/********************************************************************************
** Form generated from reading UI file 'ColorMapInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORMAPINSPECTOR_H
#define UI_COLORMAPINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorMapBox.h"

QT_BEGIN_NAMESPACE

class Ui_ColorMapInspector
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *inPreset;
    QToolButton *btnAddPreset;
    QToolButton *btnDelPreset;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    ColorMapBox *boxColorMap;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QWidget *grpControl;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QWidget *grpRadioSide;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *btnLeft;
    QRadioButton *btnRight;
    QWidget *grpRadioCont;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *btnCont;
    QRadioButton *btnDiscont;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QSpinBox *inControlIndex;
    QLabel *label_9;
    QLabel *label_4;
    QDoubleSpinBox *inControlOpacity;
    QLabel *label_8;
    QLabel *label_7;
    QToolButton *btnControlColor;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btnDeleteControl;
    QDoubleSpinBox *inControlX;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *ColorMapInspector)
    {
        if (ColorMapInspector->objectName().isEmpty())
            ColorMapInspector->setObjectName(QStringLiteral("ColorMapInspector"));
        ColorMapInspector->resize(485, 535);
        ColorMapInspector->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  font-family: helvetica;\n"
"  color: rgb(30,30,160);\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 4px;\n"
"  border: 1px solid rgb(130,130,130);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        verticalLayout = new QVBoxLayout(ColorMapInspector);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 18, 6, 6);
        groupBox = new QGroupBox(ColorMapInspector);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 40));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(2);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        inPreset = new QComboBox(groupBox);
        inPreset->setObjectName(QStringLiteral("inPreset"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inPreset->sizePolicy().hasHeightForWidth());
        inPreset->setSizePolicy(sizePolicy1);
        inPreset->setMinimumSize(QSize(0, 0));
        inPreset->setMaxVisibleItems(16);

        gridLayout->addWidget(inPreset, 1, 0, 1, 1);

        btnAddPreset = new QToolButton(groupBox);
        btnAddPreset->setObjectName(QStringLiteral("btnAddPreset"));

        gridLayout->addWidget(btnAddPreset, 1, 2, 1, 1);

        btnDelPreset = new QToolButton(groupBox);
        btnDelPreset->setObjectName(QStringLiteral("btnDelPreset"));

        gridLayout->addWidget(btnDelPreset, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ColorMapInspector);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        boxColorMap = new ColorMapBox(groupBox_2);
        boxColorMap->setObjectName(QStringLiteral("boxColorMap"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(boxColorMap->sizePolicy().hasHeightForWidth());
        boxColorMap->setSizePolicy(sizePolicy3);
        boxColorMap->setMinimumSize(QSize(0, 80));

        verticalLayout_2->addWidget(boxColorMap);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        groupBox_4->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: normal;\n"
"  font-size: 12px;\n"
"  font-family: helvetica;\n"
"  color: black;\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 0px;\n"
"  border-top: 1px solid rgb(130,130,130);\n"
"  border-left: none;\n"
"  border-right:none;\n"
"  border-bottom:none;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        grpControl = new QWidget(groupBox_4);
        grpControl->setObjectName(QStringLiteral("grpControl"));
        gridLayout_2 = new QGridLayout(grpControl);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(grpControl);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 4, 1, 1);

        grpRadioSide = new QWidget(grpControl);
        grpRadioSide->setObjectName(QStringLiteral("grpRadioSide"));
        sizePolicy1.setHeightForWidth(grpRadioSide->sizePolicy().hasHeightForWidth());
        grpRadioSide->setSizePolicy(sizePolicy1);
        grpRadioSide->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(grpRadioSide);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnLeft = new QRadioButton(grpRadioSide);
        btnLeft->setObjectName(QStringLiteral("btnLeft"));
        btnLeft->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(btnLeft);

        btnRight = new QRadioButton(grpRadioSide);
        btnRight->setObjectName(QStringLiteral("btnRight"));
        btnRight->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(btnRight);


        gridLayout_2->addWidget(grpRadioSide, 2, 5, 1, 1);

        grpRadioCont = new QWidget(grpControl);
        grpRadioCont->setObjectName(QStringLiteral("grpRadioCont"));
        sizePolicy1.setHeightForWidth(grpRadioCont->sizePolicy().hasHeightForWidth());
        grpRadioCont->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(grpRadioCont);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnCont = new QRadioButton(grpRadioCont);
        btnCont->setObjectName(QStringLiteral("btnCont"));
        btnCont->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(btnCont);

        btnDiscont = new QRadioButton(grpRadioCont);
        btnDiscont->setObjectName(QStringLiteral("btnDiscont"));
        btnDiscont->setMinimumSize(QSize(120, 0));

        verticalLayout_3->addWidget(btnDiscont);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        gridLayout_2->addWidget(grpRadioCont, 0, 5, 2, 1);

        label_5 = new QLabel(grpControl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        inControlIndex = new QSpinBox(grpControl);
        inControlIndex->setObjectName(QStringLiteral("inControlIndex"));
        inControlIndex->setKeyboardTracking(false);
        inControlIndex->setMaximum(9);

        gridLayout_2->addWidget(inControlIndex, 0, 1, 1, 1);

        label_9 = new QLabel(grpControl);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_4 = new QLabel(grpControl);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        inControlOpacity = new QDoubleSpinBox(grpControl);
        inControlOpacity->setObjectName(QStringLiteral("inControlOpacity"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(inControlOpacity->sizePolicy().hasHeightForWidth());
        inControlOpacity->setSizePolicy(sizePolicy4);
        inControlOpacity->setMinimumSize(QSize(96, 0));
        inControlOpacity->setMaximumSize(QSize(9999, 16777215));
        inControlOpacity->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inControlOpacity->setKeyboardTracking(false);
        inControlOpacity->setDecimals(0);

        gridLayout_2->addWidget(inControlOpacity, 2, 1, 1, 2);

        label_8 = new QLabel(grpControl);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_7 = new QLabel(grpControl);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        btnControlColor = new QToolButton(grpControl);
        btnControlColor->setObjectName(QStringLiteral("btnControlColor"));
        btnControlColor->setMinimumSize(QSize(96, 0));
        btnControlColor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(btnControlColor, 5, 1, 1, 2);

        widget = new QWidget(grpControl);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        gridLayout_2->addWidget(widget, 5, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        btnDeleteControl = new QToolButton(grpControl);
        btnDeleteControl->setObjectName(QStringLiteral("btnDeleteControl"));
        btnDeleteControl->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/popup_delete_16.png"), QSize(), QIcon::Normal, QIcon::On);
        btnDeleteControl->setIcon(icon);

        gridLayout_2->addWidget(btnDeleteControl, 0, 2, 1, 1);

        inControlX = new QDoubleSpinBox(grpControl);
        inControlX->setObjectName(QStringLiteral("inControlX"));
        sizePolicy4.setHeightForWidth(inControlX->sizePolicy().hasHeightForWidth());
        inControlX->setSizePolicy(sizePolicy4);
        inControlX->setMinimumSize(QSize(96, 0));
        inControlX->setMaximumSize(QSize(9999, 16777215));
        inControlX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inControlX->setKeyboardTracking(false);
        inControlX->setDecimals(0);

        gridLayout_2->addWidget(inControlX, 1, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 6, 1, 1);


        horizontalLayout_4->addWidget(grpControl);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(ColorMapInspector);

        inPreset->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ColorMapInspector);
    } // setupUi

    void retranslateUi(QWidget *ColorMapInspector)
    {
        ColorMapInspector->setWindowTitle(QApplication::translate("ColorMapInspector", "Form", 0));
        groupBox->setTitle(QApplication::translate("ColorMapInspector", "Presets:", 0));
        label_3->setText(QApplication::translate("ColorMapInspector", "Select a colormap: ", 0));
#ifndef QT_NO_TOOLTIP
        btnAddPreset->setToolTip(QApplication::translate("ColorMapInspector", "Save the current color map as a new preset", 0));
#endif // QT_NO_TOOLTIP
        btnAddPreset->setText(QApplication::translate("ColorMapInspector", "+", 0));
#ifndef QT_NO_TOOLTIP
        btnDelPreset->setToolTip(QApplication::translate("ColorMapInspector", "Delete the selected preset", 0));
#endif // QT_NO_TOOLTIP
        btnDelPreset->setText(QApplication::translate("ColorMapInspector", "-", 0));
        groupBox_2->setTitle(QApplication::translate("ColorMapInspector", "Color Map Editor:", 0));
        groupBox_4->setTitle(QApplication::translate("ColorMapInspector", "Selected Control Point Properties:", 0));
        label_6->setText(QApplication::translate("ColorMapInspector", "Side:", 0));
        btnLeft->setText(QApplication::translate("ColorMapInspector", "Left", 0));
        btnRight->setText(QApplication::translate("ColorMapInspector", "Right", 0));
        btnCont->setText(QApplication::translate("ColorMapInspector", "Continuous", 0));
        btnDiscont->setText(QApplication::translate("ColorMapInspector", "Discontinuous", 0));
        label_5->setText(QApplication::translate("ColorMapInspector", "Style:", 0));
        label_9->setText(QApplication::translate("ColorMapInspector", "Index:", 0));
        label_4->setText(QApplication::translate("ColorMapInspector", "Position:", 0));
#ifndef QT_NO_TOOLTIP
        inControlOpacity->setToolTip(QApplication::translate("ColorMapInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">The x-coordinate of the selected control point. The x-coordinate represents input image intensity.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("ColorMapInspector", "Opacity:", 0));
        label_7->setText(QApplication::translate("ColorMapInspector", "Color:", 0));
        btnControlColor->setText(QApplication::translate("ColorMapInspector", "Choose...", 0));
#ifndef QT_NO_TOOLTIP
        btnDeleteControl->setToolTip(QApplication::translate("ColorMapInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Delete the selected control point</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnDeleteControl->setText(QApplication::translate("ColorMapInspector", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        inControlX->setToolTip(QApplication::translate("ColorMapInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">The x-coordinate of the selected control point. The x-coordinate represents input image intensity.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ColorMapInspector: public Ui_ColorMapInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORMAPINSPECTOR_H
