/****************************************************************************

    flow5 application
    Copyright (C) Andre Deperrois 
    All rights reserved.

*****************************************************************************/

#pragma once

#include <QXmlStreamReader>
#include <QFile>

#include <xflcore/linestyle.h>

class XflSvgWriter : public QXmlStreamWriter
{
    public:
        XflSvgWriter(QFile &XFile);

        static void setRefFontSize(int size) {s_RefFontSize=size;}
        static int refFontSize() {return s_RefFontSize;}

    protected:
        void writeText(int x, int y, QFont const &font, const QColor &clr, QString const &text);
//        void writeLine(QPoint const& from, QPoint const &to, LineStyle const &ls);
        void writeLine(QPointF const& from, QPointF const &to, LineStyle const &ls);
        void writeLine(QPoint const& from, QPoint const &to, QColor const &clr, int w, Line::enumLineStipple stip);
        void writeLine(double x0, double y0, double x1, double y1,       QColor const &clr, int w, Line::enumLineStipple stip);
        void writeLine(double x0, double y0, double x1, double y1,       LineStyle const &ls);
        void writeLineAttributes(LineStyle const &ls, bool bFill=false, QColor fillclr=Qt::white) {writeLineAttributes(ls.m_Color, ls.m_Width, ls.m_Stipple, bFill, fillclr);}
        void writeLineAttributes(QColor const &clr, int w, Line::enumLineStipple stip, bool bFill=false, QColor fillclr=Qt::white);
        void writePoint(double x, double y, const LineStyle &ls, const QColor &backcolor);
        void writePolyLine(QPolygonF const &line, LineStyle const &ls);


    private:
        QString fontFamilyExt( QFont const &font);

        static int s_RefFontSize;
};

