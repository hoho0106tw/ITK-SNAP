/********************************************************************************
** Form generated from reading UI file 'PolygonToolPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONTOOLPANEL_H
#define UI_POLYGONTOOLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolygonToolPanel
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QWidget *grpCurveStyle;
    QVBoxLayout *verticalLayout;
    QRadioButton *btnSmooth;
    QRadioButton *btnPiecewiseLinear;
    QWidget *grpSegmentLength;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *inSegmentLength;
    QSlider *inSegmentLengthSlider;
    QFrame *line;
    QCheckBox *chkInvertPolygon;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PolygonToolPanel)
    {
        if (PolygonToolPanel->objectName().isEmpty())
            PolygonToolPanel->setObjectName(QStringLiteral("PolygonToolPanel"));
        PolygonToolPanel->resize(174, 300);
        PolygonToolPanel->setStyleSheet(QLatin1String("QWidget {\n"
"font-size:12px;\n"
"}\n"
"\n"
""));
        verticalLayout_3 = new QVBoxLayout(PolygonToolPanel);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(PolygonToolPanel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        grpCurveStyle = new QWidget(PolygonToolPanel);
        grpCurveStyle->setObjectName(QStringLiteral("grpCurveStyle"));
        grpCurveStyle->setStyleSheet(QLatin1String("QRadioButton {\n"
"  padding: 0px;\n"
"}"));
        verticalLayout = new QVBoxLayout(grpCurveStyle);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 0, 0);
        btnSmooth = new QRadioButton(grpCurveStyle);
        btnSmooth->setObjectName(QStringLiteral("btnSmooth"));
        btnSmooth->setChecked(true);

        verticalLayout->addWidget(btnSmooth);

        btnPiecewiseLinear = new QRadioButton(grpCurveStyle);
        btnPiecewiseLinear->setObjectName(QStringLiteral("btnPiecewiseLinear"));

        verticalLayout->addWidget(btnPiecewiseLinear);


        verticalLayout_3->addWidget(grpCurveStyle);

        grpSegmentLength = new QWidget(PolygonToolPanel);
        grpSegmentLength->setObjectName(QStringLiteral("grpSegmentLength"));
        verticalLayout_2 = new QVBoxLayout(grpSegmentLength);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, 0, 0, 0);
        label_2 = new QLabel(grpSegmentLength);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        inSegmentLength = new QSpinBox(grpSegmentLength);
        inSegmentLength->setObjectName(QStringLiteral("inSegmentLength"));
        inSegmentLength->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(inSegmentLength);

        inSegmentLengthSlider = new QSlider(grpSegmentLength);
        inSegmentLengthSlider->setObjectName(QStringLiteral("inSegmentLengthSlider"));
        inSegmentLengthSlider->setMinimum(0);
        inSegmentLengthSlider->setMaximum(100);
        inSegmentLengthSlider->setSingleStep(1);
        inSegmentLengthSlider->setPageStep(10);
        inSegmentLengthSlider->setValue(50);
        inSegmentLengthSlider->setOrientation(Qt::Horizontal);
        inSegmentLengthSlider->setTickPosition(QSlider::NoTicks);
        inSegmentLengthSlider->setTickInterval(25);

        horizontalLayout->addWidget(inSegmentLengthSlider);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(grpSegmentLength);

        line = new QFrame(PolygonToolPanel);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        chkInvertPolygon = new QCheckBox(PolygonToolPanel);
        chkInvertPolygon->setObjectName(QStringLiteral("chkInvertPolygon"));

        verticalLayout_3->addWidget(chkInvertPolygon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(PolygonToolPanel);

        QMetaObject::connectSlotsByName(PolygonToolPanel);
    } // setupUi

    void retranslateUi(QWidget *PolygonToolPanel)
    {
        PolygonToolPanel->setWindowTitle(QApplication::translate("PolygonToolPanel", "Form", 0));
        label_4->setText(QApplication::translate("PolygonToolPanel", "Freehand drawing style:", 0));
        btnSmooth->setText(QApplication::translate("PolygonToolPanel", "Smooth curve", 0));
        btnPiecewiseLinear->setText(QApplication::translate("PolygonToolPanel", "Polygon", 0));
        label_2->setText(QApplication::translate("PolygonToolPanel", "Segment length:", 0));
#ifndef QT_NO_TOOLTIP
        inSegmentLengthSlider->setToolTip(QApplication::translate("PolygonToolPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the overall opacity of segmentation labels.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[A]: Make more transparent</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[D]: Make more opaque</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[S]: Toggle on/off</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chkInvertPolygon->setToolTip(QApplication::translate("PolygonToolPanel", "<html><head/><body><p>When enabled, polygon drawing operations are inverted, i.e., the outside of the polygon is filled with the active label.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkInvertPolygon->setText(QApplication::translate("PolygonToolPanel", "Invert polygon", 0));
    } // retranslateUi

};

namespace Ui {
    class PolygonToolPanel: public Ui_PolygonToolPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONTOOLPANEL_H
