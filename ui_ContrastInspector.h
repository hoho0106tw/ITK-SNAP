/********************************************************************************
** Form generated from reading UI file 'ContrastInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRASTINSPECTOR_H
#define UI_CONTRASTINSPECTOR_H

#include <QtCore/QVariant>
#include <QtVTKRenderWindowBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContrastInspector
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpWindow;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_8;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *inWindow;
    QToolButton *btnAuto;
    QLabel *label_8;
    QToolButton *btnReset;
    QDoubleSpinBox *inMin;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *inLevel;
    QLabel *label_10;
    QDoubleSpinBox *inMax;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grpCurve;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QtVTKRenderWindowBox *plotWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *inControlX;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QDoubleSpinBox *inControlY;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpinBox *inControlId;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *btnAddControl;
    QToolButton *btnRemoveControl;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *grpHistogram;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *inBinSize;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QDoubleSpinBox *inCutoff;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *inLogScale;

    void setupUi(QWidget *ContrastInspector)
    {
        if (ContrastInspector->objectName().isEmpty())
            ContrastInspector->setObjectName(QStringLiteral("ContrastInspector"));
        ContrastInspector->resize(454, 477);
        ContrastInspector->setStyleSheet(QLatin1String("QMainWindow {\n"
"  background-color: rgb(248,248,248);\n"
"}\n"
"\n"
"QGroupBox {\n"
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
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(ContrastInspector);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 18, 6, 6);
        grpWindow = new QGroupBox(ContrastInspector);
        grpWindow->setObjectName(QStringLiteral("grpWindow"));
        grpWindow->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(grpWindow);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_8 = new QWidget(grpWindow);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_2 = new QGridLayout(widget_8);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(6);
        label_2 = new QLabel(widget_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        inWindow = new QDoubleSpinBox(widget_8);
        inWindow->setObjectName(QStringLiteral("inWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inWindow->sizePolicy().hasHeightForWidth());
        inWindow->setSizePolicy(sizePolicy);
        inWindow->setMinimumSize(QSize(64, 0));
        inWindow->setMaximumSize(QSize(80, 16777215));
        inWindow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inWindow->setKeyboardTracking(false);
        inWindow->setDecimals(0);

        gridLayout_2->addWidget(inWindow, 1, 4, 1, 1);

        btnAuto = new QToolButton(widget_8);
        btnAuto->setObjectName(QStringLiteral("btnAuto"));
        btnAuto->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(btnAuto, 1, 6, 1, 1);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        btnReset = new QToolButton(widget_8);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        btnReset->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(btnReset, 0, 6, 1, 1);

        inMin = new QDoubleSpinBox(widget_8);
        inMin->setObjectName(QStringLiteral("inMin"));
        sizePolicy.setHeightForWidth(inMin->sizePolicy().hasHeightForWidth());
        inMin->setSizePolicy(sizePolicy);
        inMin->setMinimumSize(QSize(64, 0));
        inMin->setMaximumSize(QSize(80, 16777215));
        inMin->setFocusPolicy(Qt::WheelFocus);
        inMin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inMin->setKeyboardTracking(false);
        inMin->setDecimals(0);

        gridLayout_2->addWidget(inMin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);

        inLevel = new QDoubleSpinBox(widget_8);
        inLevel->setObjectName(QStringLiteral("inLevel"));
        sizePolicy.setHeightForWidth(inLevel->sizePolicy().hasHeightForWidth());
        inLevel->setSizePolicy(sizePolicy);
        inLevel->setMinimumSize(QSize(64, 0));
        inLevel->setMaximumSize(QSize(80, 16777215));
        inLevel->setFocusPolicy(Qt::WheelFocus);
        inLevel->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inLevel->setKeyboardTracking(false);
        inLevel->setDecimals(0);

        gridLayout_2->addWidget(inLevel, 0, 4, 1, 1);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        inMax = new QDoubleSpinBox(widget_8);
        inMax->setObjectName(QStringLiteral("inMax"));
        sizePolicy.setHeightForWidth(inMax->sizePolicy().hasHeightForWidth());
        inMax->setSizePolicy(sizePolicy);
        inMax->setMinimumSize(QSize(64, 0));
        inMax->setMaximumSize(QSize(80, 16777215));
        inMax->setFocusPolicy(Qt::WheelFocus);
        inMax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inMax->setKeyboardTracking(false);
        inMax->setDecimals(0);

        gridLayout_2->addWidget(inMax, 1, 1, 1, 1);

        label = new QLabel(widget_8);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout_4->addWidget(widget_8);


        verticalLayout->addWidget(grpWindow);

        grpCurve = new QGroupBox(ContrastInspector);
        grpCurve->setObjectName(QStringLiteral("grpCurve"));
        verticalLayout_2 = new QVBoxLayout(grpCurve);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(grpCurve);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 202));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        plotWidget = new QtVTKRenderWindowBox(frame);
        plotWidget->setObjectName(QStringLiteral("plotWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plotWidget->sizePolicy().hasHeightForWidth());
        plotWidget->setSizePolicy(sizePolicy1);
        plotWidget->setStyleSheet(QStringLiteral("background-color:white;"));

        verticalLayout_3->addWidget(plotWidget);


        verticalLayout_2->addWidget(frame);

        widget = new QWidget(grpCurve);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(4);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        inControlX = new QDoubleSpinBox(widget_2);
        inControlX->setObjectName(QStringLiteral("inControlX"));
        sizePolicy.setHeightForWidth(inControlX->sizePolicy().hasHeightForWidth());
        inControlX->setSizePolicy(sizePolicy);
        inControlX->setMinimumSize(QSize(80, 0));
        inControlX->setMaximumSize(QSize(80, 16777215));
        inControlX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inControlX->setKeyboardTracking(false);
        inControlX->setDecimals(0);

        horizontalLayout_3->addWidget(inControlX);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        inControlY = new QDoubleSpinBox(widget_3);
        inControlY->setObjectName(QStringLiteral("inControlY"));
        sizePolicy.setHeightForWidth(inControlY->sizePolicy().hasHeightForWidth());
        inControlY->setSizePolicy(sizePolicy);
        inControlY->setMinimumSize(QSize(80, 0));
        inControlY->setMaximumSize(QSize(80, 16777215));
        inControlY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inControlY->setKeyboardTracking(false);
        inControlY->setDecimals(0);

        horizontalLayout_4->addWidget(inControlY);


        gridLayout->addWidget(widget_3, 1, 2, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(20, 0));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);


        gridLayout->addWidget(widget_4, 0, 0, 1, 4);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        inControlId = new QSpinBox(widget_6);
        inControlId->setObjectName(QStringLiteral("inControlId"));
        inControlId->setMaximumSize(QSize(48, 16777215));
        inControlId->setKeyboardTracking(false);

        horizontalLayout_8->addWidget(inControlId);


        gridLayout->addWidget(widget_6, 1, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_9 = new QHBoxLayout(widget_7);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        btnAddControl = new QToolButton(widget_7);
        btnAddControl->setObjectName(QStringLiteral("btnAddControl"));

        horizontalLayout_9->addWidget(btnAddControl);

        btnRemoveControl = new QToolButton(widget_7);
        btnRemoveControl->setObjectName(QStringLiteral("btnRemoveControl"));

        horizontalLayout_9->addWidget(btnRemoveControl);


        gridLayout->addWidget(widget_7, 1, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(grpCurve);

        grpHistogram = new QGroupBox(ContrastInspector);
        grpHistogram->setObjectName(QStringLiteral("grpHistogram"));
        horizontalLayout_2 = new QHBoxLayout(grpHistogram);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(grpHistogram);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        inBinSize = new QSpinBox(grpHistogram);
        inBinSize->setObjectName(QStringLiteral("inBinSize"));
        inBinSize->setKeyboardTracking(false);

        horizontalLayout_2->addWidget(inBinSize);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(grpHistogram);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        inCutoff = new QDoubleSpinBox(grpHistogram);
        inCutoff->setObjectName(QStringLiteral("inCutoff"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inCutoff->sizePolicy().hasHeightForWidth());
        inCutoff->setSizePolicy(sizePolicy2);
        inCutoff->setMaximumSize(QSize(80, 16777215));
        inCutoff->setDecimals(0);

        horizontalLayout_2->addWidget(inCutoff);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        inLogScale = new QCheckBox(grpHistogram);
        inLogScale->setObjectName(QStringLiteral("inLogScale"));

        horizontalLayout_2->addWidget(inLogScale);


        verticalLayout->addWidget(grpHistogram);

        QWidget::setTabOrder(inMin, inMax);
        QWidget::setTabOrder(inMax, inLevel);
        QWidget::setTabOrder(inLevel, inWindow);
        QWidget::setTabOrder(inWindow, btnReset);
        QWidget::setTabOrder(btnReset, btnAuto);
        QWidget::setTabOrder(btnAuto, inControlId);
        QWidget::setTabOrder(inControlId, inControlX);
        QWidget::setTabOrder(inControlX, inControlY);
        QWidget::setTabOrder(inControlY, btnAddControl);
        QWidget::setTabOrder(btnAddControl, btnRemoveControl);
        QWidget::setTabOrder(btnRemoveControl, inBinSize);
        QWidget::setTabOrder(inBinSize, inCutoff);
        QWidget::setTabOrder(inCutoff, inLogScale);

        retranslateUi(ContrastInspector);

        QMetaObject::connectSlotsByName(ContrastInspector);
    } // setupUi

    void retranslateUi(QWidget *ContrastInspector)
    {
        ContrastInspector->setWindowTitle(QApplication::translate("ContrastInspector", "Form", 0));
        grpWindow->setTitle(QApplication::translate("ContrastInspector", "Linear Contrast Adjustment:", 0));
        label_2->setText(QApplication::translate("ContrastInspector", "Window:", 0));
        btnAuto->setText(QApplication::translate("ContrastInspector", "Auto", 0));
        label_8->setText(QApplication::translate("ContrastInspector", "Minimum:", 0));
        btnReset->setText(QApplication::translate("ContrastInspector", "Reset", 0));
        label_10->setText(QApplication::translate("ContrastInspector", "Maximum:", 0));
        label->setText(QApplication::translate("ContrastInspector", "Level:", 0));
        grpCurve->setTitle(QApplication::translate("ContrastInspector", "Curve-Based Contrast Adjustment:", 0));
        label_6->setText(QApplication::translate("ContrastInspector", "x:", 0));
#ifndef QT_NO_TOOLTIP
        inControlX->setToolTip(QApplication::translate("ContrastInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">The x-coordinate of the selected control point. The x-coordinate represents input image intensity.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("ContrastInspector", "y:", 0));
#ifndef QT_NO_TOOLTIP
        inControlY->setToolTip(QApplication::translate("ContrastInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">The y-coordinate of the selected control point. The y-coordinate represents the index into the color map used to display the image. Its values are in the range [0 1].</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ContrastInspector", "Selected control point:", 0));
        label_9->setText(QApplication::translate("ContrastInspector", "Id:", 0));
#ifndef QT_NO_TOOLTIP
        btnAddControl->setToolTip(QApplication::translate("ContrastInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Increase the number of control points on the curve</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAddControl->setText(QApplication::translate("ContrastInspector", "+", 0));
#ifndef QT_NO_TOOLTIP
        btnRemoveControl->setToolTip(QApplication::translate("ContrastInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Reduce the number of control points on the curve</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnRemoveControl->setText(QApplication::translate("ContrastInspector", "-", 0));
        grpHistogram->setTitle(QApplication::translate("ContrastInspector", "Histogram Display Options:", 0));
        label_3->setText(QApplication::translate("ContrastInspector", "Bin size:", 0));
        label_4->setText(QApplication::translate("ContrastInspector", "Cutoff:", 0));
        inCutoff->setSuffix(QApplication::translate("ContrastInspector", " %", 0));
        inLogScale->setText(QApplication::translate("ContrastInspector", "Log scale", 0));
    } // retranslateUi

};

namespace Ui {
    class ContrastInspector: public Ui_ContrastInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRASTINSPECTOR_H
