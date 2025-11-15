/****************************************************************************

    flow5 application
    Copyright (C) 2025 André Deperrois

    This file is part of flow5.

    flow5 is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License,
    or (at your option) any later version.

    flow5 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with flow5.
    If not, see <https://www.gnu.org/licenses/>.


*****************************************************************************/


#pragma once

#include <interfaces/optim/psotask.h>

class Foil;

class PSOTaskFoil : public PSOTask
{     
    public:
        enum enumMod {HH, SCALE};

        PSOTaskFoil();

        void setFoil(Foil const*pFoil, int iLE) {m_pFoil=pFoil; m_iLE=iLE;}
        void setPolars(Polar **polars) {m_OptPolar=polars;}
        void setModType(enumMod mod) {m_ModType=mod;}

        void setNOpt(int nopt) {m_NOpt=nopt;}

        void setHHParams(double t1, double t2, double amp) {m_HHt1=t1; m_HHt2=t2; m_HHmax=amp;}
        void makeFoil(Particle const &particle, Foil *pFoil) const;

    private:
        void calcFitness(Particle *pParticle, bool bLong=false, bool bTrace=false) const override;
        double error(Particle const *pParticle, int iObjective) const override;

    private:
        Foil const *m_pFoil;

        Polar** m_OptPolar;
        int m_NOpt;

        int m_iLE;  /**< the index of the leading edge point for the current aoa */

        double m_HHt1;     /**< t1 parameter of the HH functions */
        double m_HHt2;     /**< t2 parameter of the HH functions */
        double m_HHmax;    /**< the max amplitude of the HH functions - unused and deined by the variable's amplitude*/

        enumMod m_ModType;
};


