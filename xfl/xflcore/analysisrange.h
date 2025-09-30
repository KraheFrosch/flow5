/****************************************************************************

    flow5 application
    Copyright (C) Andre Deperrois 
    All rights reserved.

*****************************************************************************/


#pragma once

#include <cmath>

#include <QVector>

/**
 * @brief The AnalysisRange struct specifies a range of operating points to calculate for T12357 plane polars and for boat polars
 */


struct AnalysisRange
{
        enum RangeType {ALPHA, CL, REYNOLDS, THETA};


        AnalysisRange() : m_bActive(true), m_vMin(0), m_vMax(0), m_vInc(0)
        {
        }

        AnalysisRange(bool bActive, double vmin, double vmax, double vinc) : m_bActive(bActive),  m_vMin(vmin), m_vMax(vmax),  m_vInc(vinc)
        {
        }

        bool isActive() const {return m_bActive;}
        void setActive(bool bActive) {m_bActive=bActive;}

        bool bSequence() const {return nValues()>1;}

        float vMin() const {return m_vMin;}
        float vMax() const {return m_vMax;}
        float vInc() const {return m_vInc;}

        int nValues() const
        {
            if(fabs(m_vInc)<1.e-6) return 1; // will process vMin only
            if(fabs(m_vMax-m_vMin)<m_vInc) return 1; // will process vMin only
            return abs(round((m_vMax-m_vMin)/m_vInc))+1;
        }

        QVector<double> values() const
        {
            QVector<double> vals;
            double vInc = m_vInc;
            if(m_vMax<m_vMin) vInc = -fabs(m_vInc);
            for(int iv=0; iv<nValues(); iv++)
            {
                double d=0;
                // correct eventual input errors of range direction
                if(m_vMax>m_vMin) d = m_vMin + double(iv) * fabs(vInc);
                else              d = m_vMin - double(iv) * fabs(vInc);

                vals += d;
            }
            return vals;
        }

        bool m_bActive;
        double m_vMin;
        double m_vMax;
        double m_vInc;
};

