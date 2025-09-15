/********************************************************************************
** Form generated from reading UI file 'ZoomInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOMINSPECTOR_H
#define UI_ZOOMINSPECTOR_H

#include <QActionButton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZoomInspector
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkLinkedZoom;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QDoubleSpinBox *inZoom;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnZoom1;
    QPushButton *btnZoom2;
    QPushButton *btnZoom4;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QActionButton *btnResetViews;
    QActionButton *btnCenterViews;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ZoomInspector)
    {
        if (ZoomInspector->objectName().isEmpty())
            ZoomInspector->setObjectName(QStringLiteral("ZoomInspector"));
        ZoomInspector->resize(173, 526);
        ZoomInspector->setMinimumSize(QSize(60, 0));
        ZoomInspector->setStyleSheet(QLatin1String("*  {\n"
"font-size: 12px;\n"
"}\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(ZoomInspector);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chkLinkedZoom = new QCheckBox(ZoomInspector);
        chkLinkedZoom->setObjectName(QStringLiteral("chkLinkedZoom"));
        QFont font;
        chkLinkedZoom->setFont(font);
        chkLinkedZoom->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(chkLinkedZoom);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        inZoom = new QDoubleSpinBox(ZoomInspector);
        inZoom->setObjectName(QStringLiteral("inZoom"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inZoom->sizePolicy().hasHeightForWidth());
        inZoom->setSizePolicy(sizePolicy);
        inZoom->setMinimumSize(QSize(60, 0));
        inZoom->setFont(font);
        inZoom->setKeyboardTracking(false);
        inZoom->setDecimals(3);

        gridLayout->addWidget(inZoom, 0, 1, 1, 3);

        label_4 = new QLabel(ZoomInspector);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setMargin(0);
        label_4->setIndent(0);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(ZoomInspector);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setStyleSheet(QStringLiteral("font-size:9px;"));
        label_5->setMargin(0);
        label_5->setIndent(0);

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnZoom1 = new QPushButton(ZoomInspector);
        btnZoom1->setObjectName(QStringLiteral("btnZoom1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnZoom1->sizePolicy().hasHeightForWidth());
        btnZoom1->setSizePolicy(sizePolicy1);
        btnZoom1->setMinimumSize(QSize(0, 0));
        btnZoom1->setMaximumSize(QSize(32, 24));
        btnZoom1->setStyleSheet(QStringLiteral(""));
        btnZoom1->setIconSize(QSize(0, 0));

        horizontalLayout_2->addWidget(btnZoom1);

        btnZoom2 = new QPushButton(ZoomInspector);
        btnZoom2->setObjectName(QStringLiteral("btnZoom2"));
        sizePolicy1.setHeightForWidth(btnZoom2->sizePolicy().hasHeightForWidth());
        btnZoom2->setSizePolicy(sizePolicy1);
        btnZoom2->setMaximumSize(QSize(32, 24));
        btnZoom2->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(btnZoom2);

        btnZoom4 = new QPushButton(ZoomInspector);
        btnZoom4->setObjectName(QStringLiteral("btnZoom4"));
        sizePolicy1.setHeightForWidth(btnZoom4->sizePolicy().hasHeightForWidth());
        btnZoom4->setSizePolicy(sizePolicy1);
        btnZoom4->setMaximumSize(QSize(32, 24));
        btnZoom4->setFlat(false);

        horizontalLayout_2->addWidget(btnZoom4);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 4);


        verticalLayout->addLayout(gridLayout);

        widget = new QWidget(ZoomInspector);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String(".QWidget { \n"
"	padding-left:50px; \n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ZoomInspector);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        btnResetViews = new QActionButton(widget_2);
        btnResetViews->setObjectName(QStringLiteral("btnResetViews"));
        sizePolicy.setHeightForWidth(btnResetViews->sizePolicy().hasHeightForWidth());
        btnResetViews->setSizePolicy(sizePolicy);
        btnResetViews->setBaseSize(QSize(0, 0));
        btnResetViews->setFont(font);

        verticalLayout_5->addWidget(btnResetViews);

        btnCenterViews = new QActionButton(widget_2);
        btnCenterViews->setObjectName(QStringLiteral("btnCenterViews"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnCenterViews->sizePolicy().hasHeightForWidth());
        btnCenterViews->setSizePolicy(sizePolicy2);
        btnCenterViews->setFont(font);

        verticalLayout_5->addWidget(btnCenterViews);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(inZoom);
        label_5->setBuddy(inZoom);
#endif // QT_NO_SHORTCUT

        retranslateUi(ZoomInspector);

        QMetaObject::connectSlotsByName(ZoomInspector);
    } // setupUi

    void retranslateUi(QWidget *ZoomInspector)
    {
        ZoomInspector->setWindowTitle(QApplication::translate("ZoomInspector", "Form", 0));
#ifndef QT_NO_TOOLTIP
        chkLinkedZoom->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Linked Zoom</span></p><p>When enabled, the zoom level in all three orthogonal slice views is kept equal. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkLinkedZoom->setText(QApplication::translate("ZoomInspector", "Linked zoom", 0));
#ifndef QT_NO_TOOLTIP
        inZoom->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Zoom level for slice views</span></p><p>Set the zoom level in the three orthogonal slice views. Zoom level is expressed in units of screen pixels per physical mm. For example zoom level of 2 means that there are 2 screen pixels for every mm in the scanner coordinate system. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        inZoom->setPrefix(QString());
        inZoom->setSuffix(QString());
        label_4->setText(QApplication::translate("ZoomInspector", "Zoom:", 0));
        label_5->setText(QApplication::translate("ZoomInspector", " px/mm", 0));
#ifndef QT_NO_TOOLTIP
        btnZoom1->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Set zoom to 1:1</span></p><p>Set zoom level such that one screen pixel maps onto one image voxel. <span style=\" font-style:italic;\">When image voxels have different dimensions, the smallest of the three side lengths of the voxel is used.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnZoom1->setText(QApplication::translate("ZoomInspector", "1x", 0));
#ifndef QT_NO_TOOLTIP
        btnZoom2->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Set zoom to 2:1</span></p><p>Set zoom level such that two screen pixels map onto one image voxel. <span style=\" font-style:italic;\">When image voxels have different dimensions, the smallest of the three side lengths of the voxel is used.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnZoom2->setText(QApplication::translate("ZoomInspector", "2x", 0));
#ifndef QT_NO_TOOLTIP
        btnZoom4->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Set zoom to 4:1</span></p><p>Set zoom level such that four screen pixels map onto one image voxel. <span style=\" font-style:italic;\">When image voxels have different dimensions, the smallest of the three side lengths of the voxel is used.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnZoom4->setText(QApplication::translate("ZoomInspector", "4x", 0));
#ifndef QT_NO_TOOLTIP
        btnResetViews->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p>Set the zoom level so that the image fully fits into the available screen space.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnResetViews->setText(QApplication::translate("ZoomInspector", "Zoom to fit", 0));
#ifndef QT_NO_TOOLTIP
        btnCenterViews->setToolTip(QApplication::translate("ZoomInspector", "<html><head/><body><p>Pan so that the 3D cursor is positioned at the center of the orthogonal slice views</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnCenterViews->setText(QApplication::translate("ZoomInspector", "Center on cursor", 0));
    } // retranslateUi

};

namespace Ui {
    class ZoomInspector: public Ui_ZoomInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOMINSPECTOR_H
