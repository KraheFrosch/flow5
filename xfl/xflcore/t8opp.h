/****************************************************************************

    flow5 application
    Copyright (C) Andre Deperrois 
    All rights reserved.

*****************************************************************************/


#pragma once



struct T8Opp
{
        T8Opp() : m_bActive(true), m_Alpha(0), m_Beta(0), m_Vinf(1.0)
        {
        }

        T8Opp(bool bActive, double alpha, double beta, double vinf) : m_bActive(bActive), m_Alpha(alpha), m_Beta(beta), m_Vinf(vinf)
        {
        }

        bool isActive() const {return m_bActive;}
        double alpha() const {return m_Alpha;}
        double beta() const {return m_Beta;}
        double Vinf() const {return m_Vinf;}

        bool m_bActive;
        double m_Alpha;
        double m_Beta;
        double m_Vinf;
};

