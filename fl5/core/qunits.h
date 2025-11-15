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



#pragma once

#include <QString>

#include <api/units.h>

namespace QUnits
{

    // convenience conversion to QString
    inline QString lengthUnitLabel(int idx=-1)    {return QString::fromStdString(Units::lengthUnitLabel(idx));}
    inline QString speedUnitLabel(int idx=-1)     {return QString::fromStdString(Units::speedUnitLabel(idx));}
    inline QString massUnitLabel(int idx=-1)      {return QString::fromStdString(Units::massUnitLabel(idx));}
    inline QString areaUnitLabel(int idx=-1)      {return QString::fromStdString(Units::areaUnitLabel(idx));}
    inline QString forceUnitLabel(int idx=-1)     {return QString::fromStdString(Units::forceUnitLabel(idx));}
    inline QString momentUnitLabel(int idx=-1)    {return QString::fromStdString(Units::momentUnitLabel(idx));}
    inline QString pressureUnitLabel(int idx=-1)  {return QString::fromStdString(Units::pressureUnitLabel(idx));}
    inline QString inertiaUnitLabel(int idx=-1)   {return QString::fromStdString(Units::inertiaUnitLabel(idx));}

    inline QString densityUnitLabel()    {return QString::fromStdString(Units::densityUnitLabel());}
    inline QString viscosityUnitLabel()  {return QString::fromStdString(Units::viscosityUnitLabel());}

};

