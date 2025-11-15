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

#define _MATH_DEFINES_DEFINED

#include <QDebug>

#include <BRep_Builder.hxx>
#include <BRepTools.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS.hxx>

#include <api/sailocc.h>

#include <api/occ_globals.h>
#include <api/units.h>
#include <api/utils.h>

SailOcc::SailOcc() : ExternalSail()
{
    m_bRuledMesh = false;
}


void SailOcc::duplicate(Sail const*pSail)
{
    ExternalSail::duplicate(pSail);
    SailOcc const* pOccSail = dynamic_cast<SailOcc const*>(pSail);
    m_Shape = pOccSail->m_Shape;
    m_BRep  = pOccSail->m_BRep;
}


bool SailOcc::serializeSailFl5(QDataStream &ar, bool bIsStoring)
{
    Sail::serializeSailFl5(ar, bIsStoring);

    //500001 : new fl5 format;
    int k(0), n(0);
    float xf(0), yf(0), zf(0);

    Vector3d V0,V1,V2;

    // 500001: first fl5 format in beta18
    // 500002: added OccMeshParams in beta 18
    int ArchiveFormat = 500002;

    if(bIsStoring)
    {
        ar << ArchiveFormat;

        ar << m_bThinSurface;

        ar << int(m_BotMidTEIndexes.size());
        for(int idx : m_BotMidTEIndexes)
            ar << idx;

        ar << int(m_TopTEIndexes.size());
        for(int idx : m_TopTEIndexes)
            ar << idx;

        ar << m_MaxElementSize;

        ar << int(m_Shape.Size());

        std::string brepstr;
        for(TopTools_ListIteratorOfListOfShape shapeit(m_Shape); shapeit.More(); shapeit.Next())
        {
            occ::shapeToBrep(shapeit.Value(), brepstr);
            ar << QString::fromStdString(brepstr);
        }

        ar << int(m_RefTriangles.size());
        for(uint i=0; i<m_RefTriangles.size(); i++)
        {
            Triangle3d const &t3d = m_RefTriangles.at(i);
            ar << t3d.vertexAt(0).xf() << t3d.vertexAt(0).yf() << t3d.vertexAt(0).zf();
            ar << t3d.vertexAt(1).xf() << t3d.vertexAt(1).yf() << t3d.vertexAt(1).zf();
            ar << t3d.vertexAt(2).xf() << t3d.vertexAt(2).yf() << t3d.vertexAt(2).zf();
        }

        m_OccTessParams.serializeParams(ar, bIsStoring);
    }
    else
    {
        ar >> ArchiveFormat;
        if(ArchiveFormat<500000 || ArchiveFormat>500100) return false;

        ar >> m_bThinSurface;

        ar >> n;
        for(int i=0; i<n; i++)
        {
            ar >> k;
            m_BotMidTEIndexes.push_back(k);
        }

        ar >> n;
        for(int i=0; i<n; i++)
        {
            ar >> k;
            m_TopTEIndexes.push_back(k);
        }

        ar >> m_MaxElementSize;

        m_Shape.Clear();
        int nShapes;
        ar >> nShapes;


        m_BRep.resize(nShapes);
        QString strange;
        for(int iShape=0; iShape<nShapes; iShape++)
        {
            ar >> strange;   m_BRep[iShape] = strange.toStdString();
            try
            {
                std::stringstream sstream;
                sstream << m_BRep.at(iShape).c_str();

                TopoDS_Shape shape;
                BRep_Builder aBuilder;
                BRepTools::Read(shape, sstream, aBuilder);
                if(shape.IsNull())
                {
                    std::cout <<"Error serializing CAD sail " << m_Name << std::endl;
                    // continue serializing
                }
                m_Shape.Append(shape);

            }
            catch(...)
            {
                qDebug()<<"Error converting Rrep for CAD sail " + m_Name;
                return false;
            }

        }
        ar >> n;
        m_RefTriangles.resize(n);
        for(int i3=0; i3<n; i3++)
        {
            ar >> xf >> yf >> zf;
            V0.set(double(xf), double(yf), double(zf));

            ar >> xf >> yf >> zf;
            V1.set(double(xf), double(yf), double(zf));

            ar >> xf >> yf >> zf;
            V2.set(double(xf), double(yf), double(zf));

            m_RefTriangles[i3].setTriangle(V0,V1, V2);
        }

        if(ArchiveFormat>=500002)
            m_OccTessParams.serializeParams(ar, bIsStoring);

        m_bRuledMesh = false; // forced in v7.55

        computeProperties();
        updateStations();
    }
    return true;
}


void SailOcc::shapesToBreps()
{
    occ::shapesToBreps(m_Shape, m_BRep);
}


void SailOcc::makeTriangulation(int , int )
{
    // moved out of fl5-lib to avoid dependency to gmsh
//    int nada = 0;
}


void SailOcc::properties(std::string &props, const std::string &frontspacer, bool bFull) const
{
    std::string strlength = Units::lengthUnitLabel();
    std::string strarea = Units::areaUnitLabel();
    std::string strange;
    Vector3d foot = m_Clew-m_Tack;
    Vector3d gaff = m_Peak-m_Head;
    double bottwist = atan2(foot.y, foot.x)*180.0/PI;
    double toptwist = atan2(gaff.y, gaff.x)*180.0/PI;

    props.clear();
    props += frontspacer + m_Name +"\n";
    if(bFull)
    {
        props += frontspacer + "   CAD type sail\n";
    }
    strange = std::format("   Luff length    = {0:7.3g}", luffLength()*Units::mtoUnit());
    props += frontspacer + strange + strlength+ EOLch;
    strange = std::format("   Leech length   = {0:7.3g}", leechLength()*Units::mtoUnit());
    props += frontspacer + strange + strlength+ EOLch;
    strange = std::format("   Foot length    = {0:7.3g}", footLength()*Units::mtoUnit());
    props += frontspacer + strange + strlength+ EOLch;
    strange = std::format("   Wetted area    = {0:7.3g} ", m_WettedArea*Units::m2toUnit());
    props += frontspacer + strange + strarea+"\n";
    strange = std::format("   Head twist     = {0:7.3g} ", toptwist);
    props += frontspacer + strange+ DEGch + "\n";
    strange = std::format("   Foot twist     = {0:7.3g} ", bottwist);
    props += frontspacer + strange+ DEGch + "\n";
    strange = std::format("   Aspect ratio   = {0:7.3g} ", aspectRatio());
    props += frontspacer + strange + "\n";
    strange = std::format("   Triangle count = {0:d}", int(m_RefTriangles.size()));
    props += frontspacer + strange + "\n";

    if(m_Shape.Size()<=1)
        strange = std::format("   Sail is made of {0:d} shape", m_Shape.Size());
    else
        strange = std::format("   Sail is made of {0:d} shapes", m_Shape.Size());

    props += frontspacer+strange;
    if(bFull)
    {
        props +="\n";
        for(TopTools_ListIteratorOfListOfShape shapeit(m_Shape); shapeit.More(); shapeit.Next())
        {
            occ::listShapeContent(shapeit.Value(), strange, frontspacer);
            props += frontspacer+strange;
        }
    }
}


void SailOcc::flipXZ()
{
    ExternalSail::flipXZ();

    occ::flipShapesXZ(m_Shape);
    for(uint it=0; it<m_RefTriangles.size(); it++)
    {
        m_RefTriangles[it].flipXZ();
    }
    makeTriPanels(Vector3d());
}

void SailOcc::scaleAR(double newAR)
{
    double ar = aspectRatio();
    if(ar<0.001)  return;
    if(newAR<0.001) return;

    double ratio = sqrt(newAR/ar);

    occ::scaleShapes(m_Shape, 1.0/ratio, 1.0, ratio);
    occ::shapesToBreps(m_Shape, m_BRep);

    //tack is unchanged
    m_Clew.x = m_Tack.x + (m_Clew.x-m_Tack.x)/ratio;
    m_Clew.z = m_Tack.z + (m_Clew.z-m_Tack.z)*ratio;

    m_Peak.x = m_Head.x + (m_Peak.x-m_Head.x)/ratio;
    m_Peak.z = m_Tack.z + (m_Peak.z-m_Tack.z)*ratio;

    m_Head.z = m_Tack.z + (m_Head.z-m_Tack.z)*ratio;
}


void SailOcc::translate(Vector3d const &T)
{
    Sail::translate(T);

    occ::translateShapes(m_Shape, T);
    occ::shapesToBreps(m_Shape, m_BRep);

    makeTriPanels(Vector3d());

    computeProperties();
}


void SailOcc::rotate(const Vector3d &origin, const Vector3d &axis, double theta)
{
    occ::rotateShapes(m_Shape, origin, axis, theta);
    occ::shapesToBreps(m_Shape, m_BRep);

    m_Triangulation.rotate(origin, axis, theta);
    for(uint it=0; it<m_RefTriangles.size(); it++)
    {
        m_RefTriangles[it].rotate(origin, axis, theta);
    }
    makeTriPanels(Vector3d());

    m_Clew.rotate(origin, axis, theta);
    m_Tack.rotate(origin, axis, theta);
    m_Peak.rotate(origin, axis, theta);
    m_Head.rotate(origin, axis, theta);

    computeProperties();
}


void SailOcc::scale(double XFactor, double YFactor, double ZFactor)
{
    occ::scaleShapes(m_Shape, XFactor, YFactor, ZFactor);
    occ::shapesToBreps(m_Shape, m_BRep);

    m_Triangulation.scale(XFactor, YFactor, ZFactor);
    for(uint it=0; it<m_RefTriangles.size(); it++)
    {
        m_RefTriangles[it].scale(XFactor, YFactor, ZFactor);
    }
    makeTriPanels(Vector3d());

    m_Clew *= XFactor;
    m_Peak *= XFactor;
    m_Head *= XFactor;
    m_Tack *= XFactor;
    computeProperties();
}

