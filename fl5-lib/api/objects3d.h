/****************************************************************************

                flow5 application
                Copyright © 2025 André Deperrois
                
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

/**
  * @file This file implements the variables and methods used to manage 3d objects
  */


#pragma once

#include <vector>

#include <api/linestyle.h>
#include <api/fl5lib_global.h>

class Plane;
class PlaneSTL;
class PlaneXfl;
class Part;
class WingXfl;
class PlanePolar;
class PlaneOpp;


namespace Objects3d
{
    // object variable lists
    extern int s_Index;
    extern std::vector<Plane*> s_oaPlane;   /**< The array of void pointers to the Plane objects. */
    extern std::vector<PlanePolar*> s_oaWPolar;  /**< The array of void pointers to the WPolar objects. */
    extern std::vector<PlaneOpp*> s_oaPOpp;    /**< The array of void pointers to the PlaneOpp objects. */

    FL5LIB_EXPORT  inline std::vector<Plane*>    const &planes() {return s_oaPlane;}
    FL5LIB_EXPORT  inline std::vector<PlanePolar*>   const &wPlars() {return s_oaWPolar;}
    FL5LIB_EXPORT  inline std::vector<PlaneOpp*> const &planeOpps() {return s_oaPOpp;}

    FL5LIB_EXPORT  Plane* addPlane(Plane *pPlane);
    FL5LIB_EXPORT  void deleteObjects();
    FL5LIB_EXPORT  void deletePlane(Plane *pPlane, bool bDeleteResults=true);
    FL5LIB_EXPORT  void deletePlaneResults(const Plane *pPlane, bool bDeletePolars=false);
    FL5LIB_EXPORT  void deleteExternalPolars(Plane const*pPlane);
    FL5LIB_EXPORT  void deleteWPolarResults(PlanePolar *pWPolar);
    FL5LIB_EXPORT  void deleteWPolar(PlanePolar *pWPolar);
    FL5LIB_EXPORT  void deletePlaneOpp(PlaneOpp *pPOpp);
    FL5LIB_EXPORT  Plane* plane(const std::string &PlaneName);
    FL5LIB_EXPORT  Plane const* planeAt(const std::string &PlaneName);
    FL5LIB_EXPORT  PlaneOpp* planeOpp(Plane const *pPlane, PlanePolar const*pWPolar, const std::string &oppname);
    FL5LIB_EXPORT  PlanePolar* wPolar(const Plane *pPlane, const std::string &WPolarName);
    FL5LIB_EXPORT  bool planeExists(const std::string &planeName);

    FL5LIB_EXPORT  inline void appendPlane(Plane*pPlane) {s_oaPlane.push_back(pPlane);}
    FL5LIB_EXPORT  inline void insertPlane(int k, Plane*pPlane) {s_oaPlane.insert(s_oaPlane.begin()+k, pPlane);}
    FL5LIB_EXPORT  inline void removePlaneAt(int idx) {if(idx<0 ||idx>=int(s_oaPlane.size())) return; s_oaPlane.erase(s_oaPlane.begin()+idx);}
    FL5LIB_EXPORT  void insertPlane(Plane *pModPlane);
    FL5LIB_EXPORT  void renamePlane(Plane *pPlane, std::string const &newname);

    FL5LIB_EXPORT  void addWPolar(PlanePolar *pWPolar);
    FL5LIB_EXPORT  void appendWPolar(PlanePolar *pWPolar);
    FL5LIB_EXPORT  void insertWPolar(PlanePolar *pNewWPolar);
    FL5LIB_EXPORT  inline void removeWPolarAt(int idx) {if(idx<0 ||idx>=int(s_oaWPolar.size())) return; s_oaWPolar.erase(s_oaWPolar.begin()+idx);}
    FL5LIB_EXPORT  void renameWPolar(PlanePolar *pWPolar, std::string const &newname);

    FL5LIB_EXPORT  void insertPOpp(PlaneOpp *pPOpp);
    FL5LIB_EXPORT  bool containsPOpp(PlaneOpp *pPOpp);
    FL5LIB_EXPORT  inline void removePOppAt(int idx) {if(idx<0 ||idx>=int(s_oaPOpp.size())) return; s_oaPOpp.erase(s_oaPOpp.begin()+idx);}
    FL5LIB_EXPORT  inline void appendPOpp(PlaneOpp *pPOpp) {s_oaPOpp.push_back(pPOpp);}

    FL5LIB_EXPORT  inline int nPlanes()  {return int(s_oaPlane.size());}
    FL5LIB_EXPORT  inline int nPolars()  {return int(s_oaWPolar.size());}
    FL5LIB_EXPORT  inline int nPOpps()   {return int(s_oaPOpp.size());}

    FL5LIB_EXPORT  inline Plane* planeAt(int ip)    {if(ip>=0 && ip<int(s_oaPlane.size()))  return s_oaPlane.at(ip);  else return nullptr;}
    FL5LIB_EXPORT  inline PlanePolar* wPolarAt(int iw)  {if(iw>=0 && iw<int(s_oaWPolar.size())) return s_oaWPolar.at(iw); else return nullptr;}
    FL5LIB_EXPORT  inline PlaneOpp* POppAt(int io)  {if(io>=0 && io<int(s_oaPOpp.size()))   return s_oaPOpp.at(io);   else return nullptr;}

    FL5LIB_EXPORT  int  newUniquePartIndex();

    FL5LIB_EXPORT  void setWPolarColor(const Plane *pPlane, PlanePolar *pWPolar, int darkfactor);

    FL5LIB_EXPORT  void setPlaneVisible(const Plane *pPlane, bool bVisible, bool bStabilityPolarsOnly);
    FL5LIB_EXPORT  void setWPolarVisible(PlanePolar *pWPolar, bool bVisible);

    FL5LIB_EXPORT  void setPlaneStyle(Plane *pPlane, LineStyle const &ls, bool bStipple, bool bWidth, bool bColor, bool bPoints, int darkfactor);
    FL5LIB_EXPORT  void setWPolarStyle(PlanePolar *pWPolar, LineStyle const &ls, bool bStyle, bool bWidth, bool bColor, bool bPoints, int darkfactor);
    FL5LIB_EXPORT  void setWPolarPOppStyle(PlanePolar const* pWPolar, bool bStipple, bool bWidth, bool bColor, bool bPoints, int darkfactor);

    FL5LIB_EXPORT  bool hasResults(Plane const*pPlane);
    FL5LIB_EXPORT  bool hasPOpps(Plane const *pPlane);
    FL5LIB_EXPORT  bool hasPOpps(PlanePolar const *pWPolar);


    FL5LIB_EXPORT  void updateFoilName(const std::string &oldName, const std::string &newName);


    FL5LIB_EXPORT  void cleanObjects(std::string &log);
    FL5LIB_EXPORT  void updateWPolarstoV750();

}




