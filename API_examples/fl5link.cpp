
#include <iostream>
#include <format>


#include <api.h>
#include <constants.h>
#include <objects2d.h>
#include <polar.h>
#include <foil.h>
#include <oppoint.h>
#include <xfoiltask.h>

int main()
{
    printf("flow5 XFoil run\n");

    std::string nacaname = "theNaca2410";
    Foil *pFoil = foil::makeNacaFoil(2410, nacaname); // "high level" function which also inserts the foil object in the database

//    std::string coords = pFoil->listCoords();
//    std::cout << coords << std::endl;

    std::cout << "Foil properties:" << std::endl;
    std::cout << pFoil->name() << std::endl;
    std::string props = pFoil->properties(true);
    std::cout << props << std::endl << std::endl;

    Polar *pPolar = Objects2d::createPolar(pFoil, xfl::T1POLAR, 100000.0, 0.0, 9.0, 1.0, 1.0); // "low level" function
    pPolar->setName("T1 test polar");
    Objects2d::insertPolar(pPolar); // so that it won't get lost and will be neatly deleted on exit

    std::cout << "polar properties:" << std::endl;
    std::cout << pPolar->name() << std::endl;
    std::cout << pPolar->properties() << std::endl << std::endl;

    XFoilTask task;
    task.initialize(pFoil, pPolar, true, true);
        
    task.appendRange({true, 0.0, 11.0, 0.5});
    task.appendRange({true, 0.0, -7.0, 0.5});
    task.run();

    // retrieve the results and store them in SORTED order in the database
    for(OpPoint *pOpp : task.operatingPoints())
    {
        Objects2d::insertOpPoint(pOpp); 
    }

    // print the content of the database
    for(OpPoint const *pOpp : Objects2d::operatingPoints())
    {
        printf("alpha=%5.2f, Cl=%9.5f, Cd=%9.5f\n", pOpp->m_Alpha, pOpp->m_Cl, pOpp->m_Cd);
    }

    
    std::cout << "done" << std::endl;



    globals::deleteObjects(); // Must call! will delete the foil and the polar objects

    return 0;

}
