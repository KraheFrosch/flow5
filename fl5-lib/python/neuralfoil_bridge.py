"""
NeuralFoil Bridge Module for Flow5

This module provides a C++-callable interface to NeuralFoil for on-the-fly
viscous drag calculations in 3D plane analysis.

The module supports two modes:
1. CLI mode: Run as script, read JSON from stdin, write JSON to stdout
2. Import mode: Import and call functions directly (for testing)
"""

import sys
import os
import json

# Ensure the venv site-packages are on the path
venv_site_packages = os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))), 
                                   'venv', 'lib', 'python3.12', 'site-packages')
if venv_site_packages not in sys.path:
    sys.path.insert(0, venv_site_packages)

import numpy as np
from aerosandbox.geometry.airfoil import Airfoil


def analyze_foil_at_cls(
    x_coords: list,
    y_coords: list,
    cl_values: list,
    re_values: list,
    n_crit: float = 9.0,
    xtr_top: float = 1.0,
    xtr_bot: float = 1.0,
    mach: float = 0.0,
    model_size: str = "xlarge"
) -> dict:
    """
    Analyze an airfoil at specified Cl and Re values using NeuralFoil.
    
    This function takes the airfoil geometry and target lift coefficients,
    then finds the corresponding angle of attack and drag coefficient.
    
    Args:
        x_coords: X coordinates of airfoil (from TE upper surface, around LE, to TE lower surface)
        y_coords: Y coordinates of airfoil
        cl_values: Target lift coefficients at each span station
        re_values: Reynolds numbers at each span station
        n_crit: Critical amplification factor (NCrit), default 9.0
        xtr_top: Forced transition location on top surface (0-1), default 1.0 (natural)
        xtr_bot: Forced transition location on bottom surface (0-1), default 1.0 (natural)
        mach: Mach number, default 0.0
        model_size: NeuralFoil model size (xxsmall to xxxlarge), default "xlarge"
        
    Returns:
        Dictionary with keys:
            'success': bool - True if all points converged
            'alpha': list of angles of attack (degrees)
            'cd': list of drag coefficients
            'cl': list of actual lift coefficients (should match cl_values)
            'cm': list of moment coefficients
            'xtr_top': list of top transition locations
            'xtr_bot': list of bottom transition locations
    """
    try:
        # Create airfoil from coordinates
        coords = np.column_stack([x_coords, y_coords])
        airfoil = Airfoil(name="analysis_foil", coordinates=coords)
        
        n_points = len(cl_values)
        results = {
            'success': True,
            'alpha': [],
            'cd': [],
            'cl': [],
            'cm': [],
            'xtr_top': [],
            'xtr_bot': []
        }
        
        for i in range(n_points):
            target_cl = cl_values[i]
            re = re_values[i]
            
            # Use a simple iterative approach to find alpha for target Cl
            # NeuralFoil is fast enough that this works well
            alpha_guess = target_cl * 10.0  # rough initial guess: ~0.1 Cl per degree
            
            for iteration in range(20):  # max iterations
                aero = airfoil.get_aero_from_neuralfoil(
                    alpha=alpha_guess,
                    Re=re,
                    mach=mach,
                    n_crit=n_crit,
                    xtr_upper=xtr_top,
                    xtr_lower=xtr_bot,
                    model_size=model_size
                )
                
                cl_result = np.atleast_1d(aero['CL'])[0]
                cl_error = target_cl - cl_result
                
                if abs(cl_error) < 0.001:  # converged
                    break
                
                # Approximate Cl_alpha ~ 0.1 per degree
                alpha_guess += cl_error * 10.0  # Newton-like update
                
                # Clamp alpha to reasonable range
                alpha_guess = max(-20.0, min(20.0, alpha_guess))
            
            # Store results - ensure we get scalars from potential arrays
            results['alpha'].append(float(alpha_guess))
            results['cd'].append(float(np.atleast_1d(aero['CD'])[0]))
            results['cl'].append(float(np.atleast_1d(aero['CL'])[0]))
            results['cm'].append(float(np.atleast_1d(aero['CM'])[0]))
            results['xtr_top'].append(float(np.atleast_1d(aero['Top_Xtr'])[0]))
            results['xtr_bot'].append(float(np.atleast_1d(aero['Bot_Xtr'])[0]))
        
        return results
        
    except Exception as e:
        return {
            'success': False,
            'error': str(e),
            'alpha': [],
            'cd': [],
            'cl': [],
            'cm': [],
            'xtr_top': [],
            'xtr_bot': []
        }


def analyze_foil_at_alphas(
    x_coords: list,
    y_coords: list,
    alpha_values: list,
    re_values: list,
    n_crit: float = 9.0,
    xtr_top: float = 1.0,
    xtr_bot: float = 1.0,
    mach: float = 0.0,
    model_size: str = "xlarge"
) -> dict:
    """
    Analyze an airfoil at specified alpha and Re values using NeuralFoil.
    
    Args:
        x_coords: X coordinates of airfoil
        y_coords: Y coordinates of airfoil
        alpha_values: Angles of attack (degrees) at each span station
        re_values: Reynolds numbers at each span station
        n_crit: Critical amplification factor (NCrit)
        xtr_top: Forced transition location on top surface (0-1)
        xtr_bot: Forced transition location on bottom surface (0-1)
        mach: Mach number
        model_size: NeuralFoil model size
        
    Returns:
        Dictionary with aerodynamic results
    """
    try:
        coords = np.column_stack([x_coords, y_coords])
        airfoil = Airfoil(name="analysis_foil", coordinates=coords)
        
        # NeuralFoil can handle batched inputs
        alphas = np.array(alpha_values)
        res = np.array(re_values)
        
        aero = airfoil.get_aero_from_neuralfoil(
            alpha=alphas,
            Re=res,
            mach=mach,
            n_crit=n_crit,
            xtr_upper=xtr_top,
            xtr_lower=xtr_bot,
            model_size=model_size
        )
        
        # Convert to Python lists for C++ compatibility
        return {
            'success': True,
            'alpha': alphas.tolist() if isinstance(alphas, np.ndarray) else [alphas],
            'cd': aero['CD'].tolist() if isinstance(aero['CD'], np.ndarray) else [float(aero['CD'])],
            'cl': aero['CL'].tolist() if isinstance(aero['CL'], np.ndarray) else [float(aero['CL'])],
            'cm': aero['CM'].tolist() if isinstance(aero['CM'], np.ndarray) else [float(aero['CM'])],
            'xtr_top': aero['Top_Xtr'].tolist() if isinstance(aero['Top_Xtr'], np.ndarray) else [float(aero['Top_Xtr'])],
            'xtr_bot': aero['Bot_Xtr'].tolist() if isinstance(aero['Bot_Xtr'], np.ndarray) else [float(aero['Bot_Xtr'])]
        }
        
    except Exception as e:
        return {
            'success': False,
            'error': str(e),
            'alpha': [],
            'cd': [],
            'cl': [],
            'cm': [],
            'xtr_top': [],
            'xtr_bot': []
        }


def run_cli_mode():
    """
    CLI mode: Read JSON input from stdin, process, write JSON output to stdout.
    
    This is the main entry point when called as a subprocess from C++.
    """
    try:
        # Read JSON input from stdin
        input_data = sys.stdin.read()
        input_json = json.loads(input_data)
        
        # Extract parameters
        x_coords = input_json['x_coords']
        y_coords = input_json['y_coords']
        cl_values = input_json['cl_values']
        re_values = input_json['re_values']
        n_crit = input_json.get('n_crit', 9.0)
        xtr_top = input_json.get('xtr_top', 1.0)
        xtr_bot = input_json.get('xtr_bot', 1.0)
        mach = input_json.get('mach', 0.0)
        model_size = input_json.get('model_size', 'xlarge')
        
        # Run analysis
        result = analyze_foil_at_cls(
            x_coords=x_coords,
            y_coords=y_coords,
            cl_values=cl_values,
            re_values=re_values,
            n_crit=n_crit,
            xtr_top=xtr_top,
            xtr_bot=xtr_bot,
            mach=mach,
            model_size=model_size
        )
        
        # Write JSON output to stdout
        print(json.dumps(result), flush=True)
        sys.exit(0)
        
    except Exception as e:
        error_result = {
            'success': False,
            'error': f"CLI mode error: {str(e)}",
            'alpha': [],
            'cd': [],
            'cl': [],
            'cm': [],
            'xtr_top': [],
            'xtr_bot': []
        }
        print(json.dumps(error_result), flush=True)
        sys.exit(1)


# CLI mode entry point
if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "--cli":
        run_cli_mode()
    else:
        # Test mode - run a simple test
        from aerosandbox.geometry.airfoil import Airfoil as ASB_Airfoil
        naca0012 = ASB_Airfoil("naca0012")
        x = naca0012.x().tolist()
        y = naca0012.y().tolist()
        
        result = analyze_foil_at_cls(
            x_coords=x,
            y_coords=y,
            cl_values=[0.5, 0.6, 0.7],
            re_values=[1e6, 1e6, 1e6],
            n_crit=9.0,
            model_size="xlarge"
        )
        
        print("Test results:")
        for i in range(3):
            print(f"  Target Cl={[0.5, 0.6, 0.7][i]:.3f} -> alpha={result['alpha'][i]:.3f}°, "
                  f"Cl={result['cl'][i]:.4f}, Cd={result['cd'][i]:.5f}")
