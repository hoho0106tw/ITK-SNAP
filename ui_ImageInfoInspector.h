/********************************************************************************
** Form generated from reading UI file 'ImageInfoInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEINFOINSPECTOR_H
#define UI_IMAGEINFOINSPECTOR_H

#include <QtCore/QVariant>
#include <QtVTKRenderWindowBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInfoInspector
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QLineEdit *outSpacingZ;
    QLineEdit *outOriginZ;
    QLineEdit *outDimY;
    QLabel *label_24;
    QLineEdit *outDimX;
    QToolButton *toolButton;
    QLineEdit *outDimZ;
    QLabel *label_27;
    QLabel *label_29;
    QLabel *label_26;
    QLineEdit *outOriginX;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_23;
    QLineEdit *outMin;
    QLabel *label_25;
    QLineEdit *outMax;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_28;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *outSpacingX;
    QLineEdit *outOriginY;
    QLineEdit *outSpacingY;
    QLineEdit *outRAI;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLineEdit *outNiftiZ;
    QLineEdit *outItkZ;
    QLabel *label_15;
    QLineEdit *outNiftiX;
    QLabel *label_21;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_13;
    QLineEdit *outNiftiY;
    QLabel *label_12;
    QLabel *label_14;
    QSpinBox *inVoxX;
    QSpinBox *inVoxZ;
    QLabel *label_20;
    QLabel *label_17;
    QLineEdit *outItkX;
    QLineEdit *outItkY;
    QLabel *label_11;
    QSpinBox *inVoxY;
    QLabel *label_22;
    QLabel *label_19;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QtVTKRenderWindowBox *plotWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ImageInfoInspector)
    {
        if (ImageInfoInspector->objectName().isEmpty())
            ImageInfoInspector->setObjectName(QStringLiteral("ImageInfoInspector"));
        ImageInfoInspector->resize(449, 489);
        ImageInfoInspector->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: normal;\n"
"  font-size: 12px;\n"
"  color: black;\n"
"  padding: 5px;\n"
"  border-radius: 0px;\n"
"  border-top: 1px solid rgb(130,130,130);\n"
"  border-left: none;\n"
"  border-right:none;\n"
"  border-bottom:none;\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}\n"
"QWidget:read-only {\n"
"  background-color:rgb(240,240,240);\n"
"}\n"
"QDoubleSpinBox:read-only {\n"
"  background-color:rgb(240,240,240);\n"
"}"));
        verticalLayout = new QVBoxLayout(ImageInfoInspector);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 18, 6, 6);
        groupBox = new QGroupBox(ImageInfoInspector);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("QLabel { font-size: 11px; }"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 1, 5, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 2, 3, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 2, 5, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 1, 3, 1, 1);

        outSpacingZ = new QLineEdit(groupBox);
        outSpacingZ->setObjectName(QStringLiteral("outSpacingZ"));
        outSpacingZ->setMaximumSize(QSize(80, 16777215));
        outSpacingZ->setReadOnly(true);

        gridLayout_3->addWidget(outSpacingZ, 1, 6, 1, 1);

        outOriginZ = new QLineEdit(groupBox);
        outOriginZ->setObjectName(QStringLiteral("outOriginZ"));
        outOriginZ->setMaximumSize(QSize(80, 16777215));
        outOriginZ->setReadOnly(true);

        gridLayout_3->addWidget(outOriginZ, 2, 6, 1, 1);

        outDimY = new QLineEdit(groupBox);
        outDimY->setObjectName(QStringLiteral("outDimY"));
        outDimY->setMaximumSize(QSize(80, 16777215));
        outDimY->setReadOnly(true);

        gridLayout_3->addWidget(outDimY, 0, 4, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 0, 0, 1, 1);

        outDimX = new QLineEdit(groupBox);
        outDimX->setObjectName(QStringLiteral("outDimX"));
        outDimX->setMaximumSize(QSize(80, 16777215));
        outDimX->setReadOnly(true);

        gridLayout_3->addWidget(outDimX, 0, 2, 1, 1);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(toolButton, 4, 6, 1, 1);

        outDimZ = new QLineEdit(groupBox);
        outDimZ->setObjectName(QStringLiteral("outDimZ"));
        outDimZ->setMaximumSize(QSize(80, 16777215));
        outDimZ->setReadOnly(true);

        gridLayout_3->addWidget(outDimZ, 0, 6, 1, 1);

        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(label_27, 2, 0, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_3->addWidget(label_29, 6, 0, 1, 1);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        outOriginX = new QLineEdit(groupBox);
        outOriginX->setObjectName(QStringLiteral("outOriginX"));
        outOriginX->setMaximumSize(QSize(80, 16777215));
        outOriginX->setReadOnly(true);

        gridLayout_3->addWidget(outOriginX, 2, 2, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(32, 0));
        label_23->setMaximumSize(QSize(32, 16777215));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_23);

        outMin = new QLineEdit(widget);
        outMin->setObjectName(QStringLiteral("outMin"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outMin->sizePolicy().hasHeightForWidth());
        outMin->setSizePolicy(sizePolicy1);
        outMin->setMinimumSize(QSize(96, 0));
        outMin->setMaximumSize(QSize(96, 16777215));
        outMin->setReadOnly(true);

        horizontalLayout->addWidget(outMin);

        label_25 = new QLabel(widget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(32, 0));
        label_25->setMaximumSize(QSize(32, 16777215));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_25);

        outMax = new QLineEdit(widget);
        outMax->setObjectName(QStringLiteral("outMax"));
        sizePolicy1.setHeightForWidth(outMax->sizePolicy().hasHeightForWidth());
        outMax->setSizePolicy(sizePolicy1);
        outMax->setMinimumSize(QSize(96, 0));
        outMax->setMaximumSize(QSize(96, 16777215));
        outMax->setReadOnly(true);

        horizontalLayout->addWidget(outMax);


        gridLayout_3->addWidget(widget, 6, 2, 1, 5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 2, 1, 1, 1);

        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_3->addWidget(label_28, 4, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 5, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 1, 1, 1, 1);

        outSpacingX = new QLineEdit(groupBox);
        outSpacingX->setObjectName(QStringLiteral("outSpacingX"));
        outSpacingX->setMaximumSize(QSize(80, 16777215));
        outSpacingX->setReadOnly(true);

        gridLayout_3->addWidget(outSpacingX, 1, 2, 1, 1);

        outOriginY = new QLineEdit(groupBox);
        outOriginY->setObjectName(QStringLiteral("outOriginY"));
        outOriginY->setMaximumSize(QSize(80, 16777215));
        outOriginY->setReadOnly(true);

        gridLayout_3->addWidget(outOriginY, 2, 4, 1, 1);

        outSpacingY = new QLineEdit(groupBox);
        outSpacingY->setObjectName(QStringLiteral("outSpacingY"));
        outSpacingY->setMaximumSize(QSize(80, 16777215));
        outSpacingY->setReadOnly(true);

        gridLayout_3->addWidget(outSpacingY, 1, 4, 1, 1);

        outRAI = new QLineEdit(groupBox);
        outRAI->setObjectName(QStringLiteral("outRAI"));
        outRAI->setReadOnly(true);

        gridLayout_3->addWidget(outRAI, 4, 2, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);

        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(ImageInfoInspector);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QStringLiteral("QLabel { font-size: 11px; }"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        outNiftiZ = new QLineEdit(groupBox_4);
        outNiftiZ->setObjectName(QStringLiteral("outNiftiZ"));
        sizePolicy1.setHeightForWidth(outNiftiZ->sizePolicy().hasHeightForWidth());
        outNiftiZ->setSizePolicy(sizePolicy1);
        outNiftiZ->setMinimumSize(QSize(0, 0));
        outNiftiZ->setMaximumSize(QSize(80, 16777215));
        outNiftiZ->setReadOnly(true);

        gridLayout_2->addWidget(outNiftiZ, 2, 6, 1, 1);

        outItkZ = new QLineEdit(groupBox_4);
        outItkZ->setObjectName(QStringLiteral("outItkZ"));
        sizePolicy1.setHeightForWidth(outItkZ->sizePolicy().hasHeightForWidth());
        outItkZ->setSizePolicy(sizePolicy1);
        outItkZ->setMinimumSize(QSize(80, 0));
        outItkZ->setMaximumSize(QSize(80, 16777215));
        outItkZ->setReadOnly(true);

        gridLayout_2->addWidget(outItkZ, 1, 6, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(20, 0));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 1, 5, 1, 1);

        outNiftiX = new QLineEdit(groupBox_4);
        outNiftiX->setObjectName(QStringLiteral("outNiftiX"));
        outNiftiX->setMaximumSize(QSize(80, 16777215));
        outNiftiX->setReadOnly(true);

        gridLayout_2->addWidget(outNiftiX, 2, 2, 1, 1);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(20, 0));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_21, 2, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(20, 0));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 1, 3, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral(""));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18->setWordWrap(true);

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(20, 0));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 0, 5, 1, 1);

        outNiftiY = new QLineEdit(groupBox_4);
        outNiftiY->setObjectName(QStringLiteral("outNiftiY"));
        outNiftiY->setMaximumSize(QSize(80, 16777215));
        outNiftiY->setReadOnly(true);

        gridLayout_2->addWidget(outNiftiY, 2, 4, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(20, 0));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_12, 0, 3, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setStyleSheet(QStringLiteral(""));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14->setWordWrap(true);

        gridLayout_2->addWidget(label_14, 1, 0, 1, 1);

        inVoxX = new QSpinBox(groupBox_4);
        inVoxX->setObjectName(QStringLiteral("inVoxX"));
        inVoxX->setMinimumSize(QSize(64, 0));
        inVoxX->setReadOnly(false);
        inVoxX->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_2->addWidget(inVoxX, 0, 2, 1, 1);

        inVoxZ = new QSpinBox(groupBox_4);
        inVoxZ->setObjectName(QStringLiteral("inVoxZ"));
        inVoxZ->setMinimumSize(QSize(64, 0));
        inVoxZ->setReadOnly(false);
        inVoxZ->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_2->addWidget(inVoxZ, 0, 6, 1, 1);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(20, 0));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 2, 3, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(20, 0));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 1, 1, 1, 1);

        outItkX = new QLineEdit(groupBox_4);
        outItkX->setObjectName(QStringLiteral("outItkX"));
        sizePolicy1.setHeightForWidth(outItkX->sizePolicy().hasHeightForWidth());
        outItkX->setSizePolicy(sizePolicy1);
        outItkX->setMinimumSize(QSize(80, 0));
        outItkX->setMaximumSize(QSize(80, 16777215));
        outItkX->setReadOnly(true);

        gridLayout_2->addWidget(outItkX, 1, 2, 1, 1);

        outItkY = new QLineEdit(groupBox_4);
        outItkY->setObjectName(QStringLiteral("outItkY"));
        sizePolicy1.setHeightForWidth(outItkY->sizePolicy().hasHeightForWidth());
        outItkY->setSizePolicy(sizePolicy1);
        outItkY->setMinimumSize(QSize(80, 0));
        outItkY->setMaximumSize(QSize(80, 16777215));
        outItkY->setReadOnly(true);

        gridLayout_2->addWidget(outItkY, 1, 4, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(20, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 0, 1, 1, 1);

        inVoxY = new QSpinBox(groupBox_4);
        inVoxY->setObjectName(QStringLiteral("inVoxY"));
        inVoxY->setMinimumSize(QSize(64, 0));
        inVoxY->setReadOnly(false);
        inVoxY->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_2->addWidget(inVoxY, 0, 4, 1, 1);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);
        label_22->setStyleSheet(QStringLiteral(""));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_22->setWordWrap(true);

        gridLayout_2->addWidget(label_22, 2, 0, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(20, 0));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 2, 5, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(ImageInfoInspector);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        frame = new QFrame(groupBox_5);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        plotWidget = new QtVTKRenderWindowBox(frame);
        plotWidget->setObjectName(QStringLiteral("plotWidget"));
        sizePolicy3.setHeightForWidth(plotWidget->sizePolicy().hasHeightForWidth());
        plotWidget->setSizePolicy(sizePolicy3);
        plotWidget->setStyleSheet(QStringLiteral("background-color:white;"));

        horizontalLayout_2->addWidget(plotWidget);


        verticalLayout_2->addWidget(frame);


        verticalLayout->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(2, 1);

        retranslateUi(ImageInfoInspector);

        QMetaObject::connectSlotsByName(ImageInfoInspector);
    } // setupUi

    void retranslateUi(QWidget *ImageInfoInspector)
    {
        ImageInfoInspector->setWindowTitle(QApplication::translate("ImageInfoInspector", "Form", 0));
        groupBox->setTitle(QApplication::translate("ImageInfoInspector", "Image Metadata", 0));
        label_6->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        label_8->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_9->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        label_2->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_5->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_24->setText(QApplication::translate("ImageInfoInspector", "Dimensions:", 0));
        toolButton->setText(QApplication::translate("ImageInfoInspector", "Reorient...", 0));
        label_27->setText(QApplication::translate("ImageInfoInspector", "Origin:", 0));
        label_29->setText(QApplication::translate("ImageInfoInspector", "Intensity Range:", 0));
        label_26->setText(QApplication::translate("ImageInfoInspector", "Spacing:", 0));
        label_23->setText(QApplication::translate("ImageInfoInspector", "min:", 0));
        label_25->setText(QApplication::translate("ImageInfoInspector", "max:", 0));
        label_3->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        label_7->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        label_28->setText(QApplication::translate("ImageInfoInspector", "Orientation:", 0));
        label->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        label_4->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        groupBox_4->setTitle(QApplication::translate("ImageInfoInspector", "3D Cursor Coordinates", 0));
        label_15->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        label_21->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        label_16->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_18->setText(QApplication::translate("ImageInfoInspector", "Image units:", 0));
        label_13->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        label_12->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_14->setText(QApplication::translate("ImageInfoInspector", "World units (ITK):", 0));
        label_20->setText(QApplication::translate("ImageInfoInspector", "y:", 0));
        label_17->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        label_11->setText(QApplication::translate("ImageInfoInspector", "x:", 0));
        label_22->setText(QApplication::translate("ImageInfoInspector", "World units (NIFTI):", 0));
        label_19->setText(QApplication::translate("ImageInfoInspector", "z:", 0));
        groupBox_5->setTitle(QApplication::translate("ImageInfoInspector", "Intensity Under Cursor", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageInfoInspector: public Ui_ImageInfoInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINFOINSPECTOR_H
