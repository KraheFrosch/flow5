/****************************************************************************

    flow5 application
    Copyright (C) Andre Deperrois 
    All rights reserved.

*****************************************************************************/


#pragma once


namespace xfl
{

    /** @enum The different application modules used in MainFrame*/
    enum enumApp {NOAPP, XDIRECT, XPLANE, XSAIL};

    /** @enum The different formats usable to export data to text format files*/
    enum enumTextFileType {TXT, CSV};

    /**< @enum The different image formats usable to export screen captures*/
    enum enumImageFormat {PNG, JPEG, BMP};

    /** @enum The different number of graphs in the polar view */
    enum enumGraphView {ONEGRAPH, TWOGRAPHS, FOURGRAPHS, ALLGRAPHS, NOGRAPH};


    /** used for GUI conversions to/from strings */
    enum enumDataType {BOOLVALUE, INTEGER, DOUBLEVALUE, STRING, PANELDISTRIBUTION, FOILNAME, BODYTYPE, FUSEDRAG,
                       POLARTYPE, ANALYSISMETHOD, REFDIMENSIONS, WINGTYPE, BOUNDARYCONDITION};

    /** @enum The status of the 3d analysis */
    enum enumAnalysisStatus {PENDING, RUNNING, CANCELLED, FINISHED};

}


