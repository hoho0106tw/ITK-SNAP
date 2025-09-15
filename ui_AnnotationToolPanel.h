/********************************************************************************
** Form generated from reading UI file 'AnnotationToolPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOTATIONTOOLPANEL_H
#define UI_ANNOTATIONTOOLPANEL_H

#include <QColorButtonWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QDoubleSlider.h"

QT_BEGIN_NAMESPACE

class Ui_AnnotationToolPanel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *grpMode;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnRuler;
    QToolButton *btnText;
    QToolButton *btnSelect;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QWidget *grpMode_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QColorButtonWidget *inColor;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QWidget *grpMode_3;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSlider *inOpacity;
    QToolButton *btnVisible;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnOpen;
    QToolButton *btnSave;

    void setupUi(QWidget *AnnotationToolPanel)
    {
        if (AnnotationToolPanel->objectName().isEmpty())
            AnnotationToolPanel->setObjectName(QStringLiteral("AnnotationToolPanel"));
        AnnotationToolPanel->resize(185, 300);
        AnnotationToolPanel->setStyleSheet(QLatin1String("QLabel {\n"
"  font-size: 12px;\n"
"}\n"
"\n"
"QToolButton {\n"
"  font-size: 10px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(AnnotationToolPanel);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(AnnotationToolPanel);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        grpMode = new QWidget(AnnotationToolPanel);
        grpMode->setObjectName(QStringLiteral("grpMode"));
        verticalLayout_2 = new QVBoxLayout(grpMode);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, 0, 0);
        btnRuler = new QToolButton(grpMode);
        btnRuler->setObjectName(QStringLiteral("btnRuler"));
        btnRuler->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/icons8_ruler_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRuler->setIcon(icon);
        btnRuler->setCheckable(true);
        btnRuler->setChecked(true);
        btnRuler->setAutoExclusive(true);
        btnRuler->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnRuler);

        btnText = new QToolButton(grpMode);
        btnText->setObjectName(QStringLiteral("btnText"));
        btnText->setMinimumSize(QSize(150, 0));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/icons8_generic_text_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnText->setIcon(icon1);
        btnText->setCheckable(true);
        btnText->setChecked(false);
        btnText->setAutoExclusive(true);
        btnText->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnText);

        btnSelect = new QToolButton(grpMode);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        btnSelect->setMinimumSize(QSize(150, 0));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/icons8_cursor_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSelect->setIcon(icon2);
        btnSelect->setCheckable(true);
        btnSelect->setAutoExclusive(true);
        btnSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnSelect);


        verticalLayout->addWidget(grpMode);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(AnnotationToolPanel);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        grpMode_2 = new QWidget(AnnotationToolPanel);
        grpMode_2->setObjectName(QStringLiteral("grpMode_2"));
        grpMode_2->setStyleSheet(QLatin1String("QLabel {\n"
"font-size:12px;\n"
"}"));
        formLayout_2 = new QFormLayout(grpMode_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(4);
        formLayout_2->setVerticalSpacing(4);
        formLayout_2->setContentsMargins(-1, 4, 0, 0);
        label_2 = new QLabel(grpMode_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        inColor = new QColorButtonWidget(grpMode_2);
        inColor->setObjectName(QStringLiteral("inColor"));
        inColor->setMinimumSize(QSize(10, 10));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inColor);


        verticalLayout->addWidget(grpMode_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label_4 = new QLabel(AnnotationToolPanel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        grpMode_3 = new QWidget(AnnotationToolPanel);
        grpMode_3->setObjectName(QStringLiteral("grpMode_3"));
        grpMode_3->setStyleSheet(QLatin1String("QLabel {\n"
"font-size:12px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(grpMode_3);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 0, 4, 0);
        inOpacity = new QDoubleSlider(grpMode_3);
        inOpacity->setObjectName(QStringLiteral("inOpacity"));
        inOpacity->setMaximum(100);
        inOpacity->setOrientation(Qt::Horizontal);
        inOpacity->setTickPosition(QSlider::NoTicks);
        inOpacity->setTickInterval(25);

        horizontalLayout_2->addWidget(inOpacity);

        btnVisible = new QToolButton(grpMode_3);
        btnVisible->setObjectName(QStringLiteral("btnVisible"));
        btnVisible->setMaximumSize(QSize(20, 20));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/icons8_invisible_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/root/icons8_visible_12.png"), QSize(), QIcon::Normal, QIcon::On);
        btnVisible->setIcon(icon3);
        btnVisible->setIconSize(QSize(12, 12));
        btnVisible->setCheckable(true);
        btnVisible->setChecked(true);
        btnVisible->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnVisible);


        verticalLayout->addWidget(grpMode_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget = new QWidget(AnnotationToolPanel);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalSpacer = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOpen = new QToolButton(widget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/open_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpen->setIcon(icon4);

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QToolButton(widget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/save_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon5);

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addWidget(widget);


        retranslateUi(AnnotationToolPanel);

        QMetaObject::connectSlotsByName(AnnotationToolPanel);
    } // setupUi

    void retranslateUi(QWidget *AnnotationToolPanel)
    {
        AnnotationToolPanel->setWindowTitle(QApplication::translate("AnnotationToolPanel", "Form", 0));
        label->setText(QApplication::translate("AnnotationToolPanel", "Annotation mode:", 0));
#ifndef QT_NO_TOOLTIP
        btnRuler->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Line and Ruler Mode</span></p><p>Use this mode to measure distances between points and angles between line segments. Click with the left mouse button to begin drawing a line. Click again to place the second point of the line. Right-click to complete the line.</p><p>The length of the line and the angle between the line and other lines drawn on the same slice are shown interactively. Hold the Shift key to restrict the angle to a multiple of 5.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnRuler->setText(QApplication::translate("AnnotationToolPanel", "Line and Ruler Mode", 0));
#ifndef QT_NO_TOOLTIP
        btnText->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Text Annotation Mode</span></p><p>Use this mode to place text annotations in the 3D image. Annotations are anchored to a single voxel location. Along with line annotations, they can be saved and shared with colleagues.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnText->setText(QApplication::translate("AnnotationToolPanel", "Text Annotation Mode", 0));
#ifndef QT_NO_TOOLTIP
        btnSelect->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Selection Mode</span></p><p>Use this mode to select previously created annotations. Once selected, annotations can be moved or deleted. Shift-click to select multiple annotations.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSelect->setText(QApplication::translate("AnnotationToolPanel", "Selection Mode", 0));
        label_3->setText(QApplication::translate("AnnotationToolPanel", "Annotation properties:", 0));
        label_2->setText(QApplication::translate("AnnotationToolPanel", "Color:", 0));
        label_4->setText(QApplication::translate("AnnotationToolPanel", "Overall annotation opacity:", 0));
#ifndef QT_NO_TOOLTIP
        inOpacity->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p>Adjust the opacity of all annotations</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnVisible->setToolTip(QApplication::translate("AnnotationToolPanel", "Toggle the visibility of all annotations", 0));
#endif // QT_NO_TOOLTIP
        btnVisible->setText(QApplication::translate("AnnotationToolPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnOpen->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p>Load annotations from file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnOpen->setText(QApplication::translate("AnnotationToolPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("AnnotationToolPanel", "<html><head/><body><p>Save annotations to file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("AnnotationToolPanel", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class AnnotationToolPanel: public Ui_AnnotationToolPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOTATIONTOOLPANEL_H
