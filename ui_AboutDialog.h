/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SplashPanel.h"

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    SplashPanel *widget;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTextBrowser *outCredits;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *outLicense;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *ouAlgorithms;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *outComponents;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *outBuild;
    QLabel *label;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(640, 480);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new SplashPanel(AboutDialog);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 4, 8, 8);
        outCredits = new QTextBrowser(tab);
        outCredits->setObjectName(QStringLiteral("outCredits"));

        verticalLayout->addWidget(outCredits);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(8, 4, 8, 8);
        outLicense = new QTextBrowser(tab_2);
        outLicense->setObjectName(QStringLiteral("outLicense"));

        verticalLayout_2->addWidget(outLicense);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(8, 4, 8, 8);
        ouAlgorithms = new QTextBrowser(tab_5);
        ouAlgorithms->setObjectName(QStringLiteral("ouAlgorithms"));

        verticalLayout_5->addWidget(ouAlgorithms);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(8, 4, 8, 8);
        outComponents = new QTextBrowser(tab_3);
        outComponents->setObjectName(QStringLiteral("outComponents"));
        outComponents->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(outComponents);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(8, 4, 8, 8);
        outBuild = new QTextBrowser(tab_4);
        outBuild->setObjectName(QStringLiteral("outBuild"));
        outBuild->setStyleSheet(QStringLiteral("font: 12px \"Courier\";"));
        outBuild->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(outBuild);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);

        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/root/logo_new.gif")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About ITK-SNAP", 0));
        outCredits->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">ITK-SNAP 3.x Team (2011 - Present)</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">Paul A. Yushkevich (University of Pennsylvania) - PI and Lead Developer <br />Guido Gerig (University of Utah) - Co-PI <br />Octavian Soldea (University of Pennsylvania) - Developer <br />Yang Gao (University of Utah) - Developer <br />Su"
                        "pported by the U.S. National Institute of Biomedical Imaging and BioEngineering through grant R01 EB014346 </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">ITK-SNAP 2.x Team (2004 - 2012)</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">Paul A. Yushkevich (University of Pennsylvania) - Lead Developer <br />Hui Zhang (University of Pennsylvania) - Developer <br />Casey Goodlett (University of Utah) - Contributor <br />Timothy Burke - Contributor <br />Nicholas Tustison - Contributor <br />Supported by the U.S. National Institute of Biomedical Imaging and BioEngineering and the NIH Blueprint for Neuroscience through grant R03 EB008200 </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">SNAP/ITK Integration (2003-2004)</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">Paul A. Yushkevich (University of Pennsylvania) - Technical Director <br />Daniel S. Fritsch - Contract PI <br />Guido Gerig (University of Utah) - Scientific Director <br />Stephen R. Aylward (Kitware) - Consultant <br />Supported by the U.S. National Library of Medicine through PO 467-MZ-202446-1 </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">Original SNAP/IRIS Team (199x - 2003)</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:12px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">Guido Gerig (University of Utah) - Scientific Director <br />Silvio Turello, Joachim Schlegel, Gabor Szekely (ETH Zurich) - Original AVS Module <br />Chris Wynn, Arun Neelamkavil, David Gregg, Eric Larsen, Sanjay Sthapit (UNC Chapel Hill) - IRIS 1999 Project <br />Sean Ho, Ashraf Farrag, Amy Henderson, Robin Munesato, Ming Yu (UNC Chapel Hill) - IRIS 2000 Project <br />Nathan Moon, Thorsten Scheuermann, Konstantin Bobkov, Nathan Talbert, Yongjik Kim (UNC Chapel Hill) - SnAP 2002 Project <br />Pierre Fillard (UNC Chapel Hill) - SnAP-VTK Integration </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">Special Thanks</span></p>\n"
"<p style=\" margin-top:6px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-family:'Lucida Grande';\">Terry S. Yoo (NLM) <br />Zohara Cohen (NIBIB) <br />Luis Ibanez (Kitware) <br />Joshua Cates (University of Utah) <br />James C. Gee (University of Pennsylvania) <br />All who generously contribute to ITK, VTK, FLTK, and SNAP </span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AboutDialog", "Developers", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AboutDialog", "License", 0));
        ouAlgorithms->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Active Contour Segmentation</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Caselles, V., Kimmel, R., and Sapiro, G. (1997). Geodesic active contours. <span style=\" font-style:italic;\">International journal of computer vision, 22(1), 61-79.</span></li>\n"
"<li style=\" font-style:i"
                        "talic;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13px; font-style:normal; color:#222222; background-color:#ffffff;\">Zhu, S. C., &amp; Yuille, A. (1996). Region competition: Unifying snakes, region growing, and Bayes/MDL for multiband image segmentation.\302\240</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\">Pattern Analysis and Machine Intelligence, IEEE Transactions on</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; font-style:normal; color:#222222; background-color:#ffffff;\">,\302\240</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\">18</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; font-style:normal; color:#222222; background-color:#ffffff;\">(9), 884-900.</span></li>\n"
"<li style=\" font-family:'Arial,"
                        "sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13px;\">Sethian, J. A. (1999).\302\240</span><span style=\" font-size:13px; font-style:italic;\">Level set methods and fast marching methods: evolving interfaces in computational geometry, fluid mechanics, computer vision, and materials science</span><span style=\" font-size:13px;\">\302\240(Vol. 3). Cambridge university press.</span></li></ul>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">Random Forest Classification</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\">Breiman, L. (2001). Random forests.\302\240</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; font-style:italic; color:#222222; background-color:#ffffff;\">Machine learning</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\">,\302\240</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; font-style:italic; color:#222222; background-color:#ffffff;\">45</span><span style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\">(1), 5-32.</span></li>\n"
"<li style=\" font-family:'Arial,sans-serif'; font-size:13px; color:#222222; background-color:#ffffff;\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:13px; background-color:#f8f8f8;\">Criminisi, A., &amp; Shotton, J. (2013).\302\240"
                        "</span><span style=\" font-size:13px; font-style:italic; background-color:#f8f8f8;\">Decision forests for computer vision and medical image analysis</span><span style=\" font-size:13px; background-color:#f8f8f8;\">. Springer Science &amp; Business Media.</span></li></ul></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("AboutDialog", "Algorithms", 0));
        outComponents->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; text-decoration: underline;\">Toolbar Icons</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">ITK-SNAP uses icons from the following free collections under the Creative Commons Attribution License:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x; font-family:'Lucida Grande';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">OpenIcon: </span><a href=\"http://openiconlibrary.sourceforge.net/\"><span style=\" font-family:'Lucida Grande'; text-decoration: underline; color:#0000ff;\">http://openiconlibrary.sourceforge.net/</span></a><span style=\" font-family:'Lucida Grande';\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">VisualPharm: </span><a href=\"http://icons8.com\"><span style=\" font-family:'Lucida Grande'; text-decoration: underline; color:#0000ff;\">http://icons8.com</span></a></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AboutDialog", "Components", 0));
        outBuild->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:13pt;\">Build date: %BUILD_DATE%</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:13pt;\">Git commit: %GIT_COMMIT%</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AboutDialog", "Build", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
