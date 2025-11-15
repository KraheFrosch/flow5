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

#define _MATH_DEFINES_DEFINED

#include <QGridLayout>

#include "thinsaildlg.h"

#include <interfaces/widgets/customwts/intedit.h>
#include <interfaces/widgets/customwts/plaintextoutput.h>
#include <api/mathelem.h>
#include <api/sail.h>
#include <interfaces/opengl/fl5views/gl3dsailview.h>

ThinSailDlg::ThinSailDlg(QWidget *pParent) : SailDlg(pParent)
{
}


void ThinSailDlg::initDialog(Sail *pSail)
{
    SailDlg::initDialog(pSail);
    if(pSail->m_EdgeSplit.size())
    {
        std::vector<EdgeSplit> &es = pSail->m_EdgeSplit.front();
        if(es.size()>=4)
        {
            for(int iEdge=0; iEdge<4; iEdge++)
            {
                m_pieNSegs[iEdge]->setValue(es[iEdge].nSegs());
                switch (es[iEdge].distrib())
                {
                    default:
                    case xfl::UNIFORM:   m_pcbDistType[iEdge]->setCurrentIndex(0);  break;
                    case xfl::COSINE:    m_pcbDistType[iEdge]->setCurrentIndex(1);  break;
                    case xfl::SINE:      m_pcbDistType[iEdge]->setCurrentIndex(2);  break;
                    case xfl::INV_SINE:  m_pcbDistType[iEdge]->setCurrentIndex(3);  break;
                    case xfl::INV_SINH:  m_pcbDistType[iEdge]->setCurrentIndex(4);  break;
                    case xfl::TANH:      m_pcbDistType[iEdge]->setCurrentIndex(5);  break;
                    case xfl::EXP:       m_pcbDistType[iEdge]->setCurrentIndex(6);  break;
                    case xfl::INV_EXP:   m_pcbDistType[iEdge]->setCurrentIndex(7);  break;
                }
            }
        }
    }
}


void ThinSailDlg::onRuledMesh()
{
    bool bRuled = m_prbRuledMesh->isChecked();

    m_pglSailView->clearHighlightList();
    m_pglSailView->clearSegments();

    m_pfrRuledMesh->setVisible(bRuled);
    m_pfrFreeMesh->setVisible(!bRuled);
    m_pgbEdgeSplit->setVisible(!bRuled);

    m_pSail->setRuledMesh(bRuled);
    if(bRuled)
    {
        m_ppto->onAppendQText("Making sail ruled mesh\n");
        m_pSail->makeRuledMesh(Vector3d()); // fast and automatic
        m_ppto->onAppendQText(QString::asprintf("   made %d triangles\n\n", int(m_pSail->refTriangles().size())));
    }
    else
    {
        m_pSail->clearRefTriangles();
        m_pSail->clearTEIndexes();
        m_pSail->updateStations();
    }

    m_pSail->makeTriPanels(Vector3d());
    QApplication::restoreOverrideCursor();

    onConnectPanels();

    m_pglSailView->resetgl3dMesh();
    m_pglSailView->update();
    m_bChanged = true;
}



void ThinSailDlg::onReadEdgeSplits()
{
    std::vector<EdgeSplit> &es = m_pSail->m_EdgeSplit.front();

    for(int iEdge=0; iEdge<4; iEdge++)
    {
        es[iEdge].setNSegs(m_pieNSegs[iEdge]->value());
        switch (m_pcbDistType[iEdge]->currentIndex())
        {
            default:
            case 0:   es[iEdge].setDistrib(xfl::UNIFORM);   break;
            case 1:   es[iEdge].setDistrib(xfl::COSINE);    break;
            case 2:   es[iEdge].setDistrib(xfl::SINE);      break;
            case 3:   es[iEdge].setDistrib(xfl::INV_SINE);  break;
            case 4:   es[iEdge].setDistrib(xfl::INV_SINH);  break;
            case 5:   es[iEdge].setDistrib(xfl::TANH);      break;
            case 6:   es[iEdge].setDistrib(xfl::EXP);       break;
            case 7:   es[iEdge].setDistrib(xfl::INV_EXP);   break;
        }
    }
}


void ThinSailDlg::onUpdateMesh()
{
    readMeshData();
    if(m_pSail->bRuledMesh()) onRuledMesh();

    updateTriMesh();
    m_pglSailView->update();
    m_bChanged = true;
}

