/****************************************************************************

    flow5 application
    Copyright (C) Andre Deperrois 
    All rights reserved.

*****************************************************************************/



#pragma once

#include <QDialog>
#include <QDialogButtonBox>
#include <QCheckBox>
#include <QComboBox>
#include <QSettings>

#include <xflgeom/geom3d/triangle3d.h>

class PlainTextOutput;
class FloatEdit;

class StlReaderDlg : public QDialog
{
    Q_OBJECT

    public:
        StlReaderDlg(QWidget *pParent);
        QString logMsg() const;

        QVector<Triangle3d> const & triangleList() const {return m_Triangle;}

        bool importTrianglesFromStlFile(const QString &FileName, double unitfactor, QVector<Triangle3d> &trianglelist) const;
        bool importStlBinaryFile(QDataStream &binstream, double unitfactor, QVector<Triangle3d> &trianglelist, QString &solidname) const;
        bool importStlTextFile(QTextStream &textstream, double unitfactor, QVector<Triangle3d> &trianglelist, QString &solidname) const;

        static void loadSettings(QSettings &settings);
        static void saveSettings(QSettings &settings);

    private:
        void setupLayout();

        void showEvent(QShowEvent *pEvent) override;
        void hideEvent(QHideEvent *pEvent) override;
        QSize sizeHint() const override {return QSize(750,500);}


    private slots:
        void onImportFromStlFile();
        void onButton(QAbstractButton *pButton);

    private:
        QDialogButtonBox *m_pButtonBox;
        QComboBox *m_pcbLengthUnitSel;
        PlainTextOutput *m_pptoTextOutput;
        QPushButton *m_ppbImport;

        QVector<Triangle3d> m_Triangle;
        bool m_bCancel;
        bool m_bIsRunning;


        static QByteArray s_Geometry;
        static int s_LengthUnitIndex;
};

