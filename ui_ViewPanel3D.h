/********************************************************************************
** Form generated from reading UI file 'ViewPanel3D.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPANEL3D_H
#define UI_VIEWPANEL3D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GenericView3D.h"

QT_BEGIN_NAMESPACE

class Ui_ViewPanel3D
{
public:
    QAction *actionReset_Viewpoint;
    QAction *actionSave_Viewpoint;
    QAction *actionRestore_Viewpoint;
    QAction *actionContinuous_Update;
    QAction *actionClear_Rendering;
    QVBoxLayout *verticalLayout;
    GenericView3D *view3d;
    QWidget *toolbar;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnUpdateMesh;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnAccept;
    QToolButton *btnFlip;
    QToolButton *btnCancel;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnExpand;
    QToolButton *btnScreenshot;
    QToolButton *btnMenu;

    void setupUi(QWidget *ViewPanel3D)
    {
        if (ViewPanel3D->objectName().isEmpty())
            ViewPanel3D->setObjectName(QStringLiteral("ViewPanel3D"));
        ViewPanel3D->resize(462, 470);
        ViewPanel3D->setStyleSheet(QLatin1String("* {\n"
"font-size: 11px;\n"
"}"));
        actionReset_Viewpoint = new QAction(ViewPanel3D);
        actionReset_Viewpoint->setObjectName(QStringLiteral("actionReset_Viewpoint"));
        actionSave_Viewpoint = new QAction(ViewPanel3D);
        actionSave_Viewpoint->setObjectName(QStringLiteral("actionSave_Viewpoint"));
        actionSave_Viewpoint->setShortcutContext(Qt::WindowShortcut);
        actionRestore_Viewpoint = new QAction(ViewPanel3D);
        actionRestore_Viewpoint->setObjectName(QStringLiteral("actionRestore_Viewpoint"));
        actionContinuous_Update = new QAction(ViewPanel3D);
        actionContinuous_Update->setObjectName(QStringLiteral("actionContinuous_Update"));
        actionContinuous_Update->setCheckable(true);
        actionClear_Rendering = new QAction(ViewPanel3D);
        actionClear_Rendering->setObjectName(QStringLiteral("actionClear_Rendering"));
        verticalLayout = new QVBoxLayout(ViewPanel3D);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view3d = new GenericView3D(ViewPanel3D);
        view3d->setObjectName(QStringLiteral("view3d"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(view3d->sizePolicy().hasHeightForWidth());
        view3d->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(view3d);

        toolbar = new QWidget(ViewPanel3D);
        toolbar->setObjectName(QStringLiteral("toolbar"));
        toolbar->setStyleSheet(QLatin1String("QToolButton {\n"
"  font-size:11px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(toolbar);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        btnUpdateMesh = new QToolButton(toolbar);
        btnUpdateMesh->setObjectName(QStringLiteral("btnUpdateMesh"));
        btnUpdateMesh->setMaximumSize(QSize(16777215, 20));
        btnUpdateMesh->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(btnUpdateMesh);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnAccept = new QToolButton(toolbar);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        btnAccept->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(btnAccept);

        btnFlip = new QToolButton(toolbar);
        btnFlip->setObjectName(QStringLiteral("btnFlip"));
        btnFlip->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(btnFlip);

        btnCancel = new QToolButton(toolbar);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMaximumSize(QSize(16777215, 20));
        btnCancel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(btnCancel);

        progressBar = new QProgressBar(toolbar);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(40, 20));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnExpand = new QToolButton(toolbar);
        btnExpand->setObjectName(QStringLiteral("btnExpand"));
        btnExpand->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/dl_3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExpand->setIcon(icon);
        btnExpand->setAutoRaise(true);

        horizontalLayout->addWidget(btnExpand);

        btnScreenshot = new QToolButton(toolbar);
        btnScreenshot->setObjectName(QStringLiteral("btnScreenshot"));
        btnScreenshot->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/icons8_slr_camera_12.png"), QSize(), QIcon::Normal, QIcon::On);
        btnScreenshot->setIcon(icon1);
        btnScreenshot->setIconSize(QSize(12, 12));
        btnScreenshot->setAutoRaise(true);

        horizontalLayout->addWidget(btnScreenshot);

        btnMenu = new QToolButton(toolbar);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        btnMenu->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/open_popup_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenu->setIcon(icon2);
        btnMenu->setIconSize(QSize(12, 12));
        btnMenu->setAutoRaise(true);

        horizontalLayout->addWidget(btnMenu);


        verticalLayout->addWidget(toolbar);


        retranslateUi(ViewPanel3D);

        QMetaObject::connectSlotsByName(ViewPanel3D);
    } // setupUi

    void retranslateUi(QWidget *ViewPanel3D)
    {
        ViewPanel3D->setWindowTitle(QApplication::translate("ViewPanel3D", "Form", 0));
        actionReset_Viewpoint->setText(QApplication::translate("ViewPanel3D", "Reset Viewpoint", 0));
        actionReset_Viewpoint->setShortcut(QApplication::translate("ViewPanel3D", "Ctrl+K, K", 0));
        actionSave_Viewpoint->setText(QApplication::translate("ViewPanel3D", "Save Viewpoint", 0));
        actionSave_Viewpoint->setShortcut(QApplication::translate("ViewPanel3D", "Ctrl+K, S", 0));
        actionRestore_Viewpoint->setText(QApplication::translate("ViewPanel3D", "Restore Viewpoint", 0));
        actionRestore_Viewpoint->setShortcut(QApplication::translate("ViewPanel3D", "Ctrl+K, R", 0));
        actionContinuous_Update->setText(QApplication::translate("ViewPanel3D", "Continuous Update", 0));
        actionContinuous_Update->setShortcut(QApplication::translate("ViewPanel3D", "Ctrl+K, C", 0));
        actionClear_Rendering->setText(QApplication::translate("ViewPanel3D", "Clear 3D Display", 0));
#ifndef QT_NO_TOOLTIP
        actionClear_Rendering->setToolTip(QApplication::translate("ViewPanel3D", "Clears the meshes rendered in the 3D display", 0));
#endif // QT_NO_TOOLTIP
        actionClear_Rendering->setShortcut(QApplication::translate("ViewPanel3D", "Ctrl+K, X", 0));
        btnUpdateMesh->setText(QApplication::translate("ViewPanel3D", "update", 0));
#ifndef QT_NO_TOOLTIP
        btnAccept->setToolTip(QApplication::translate("ViewPanel3D", "Accept 3D editing operation", 0));
#endif // QT_NO_TOOLTIP
        btnAccept->setText(QApplication::translate("ViewPanel3D", "accept", 0));
#ifndef QT_NO_TOOLTIP
        btnFlip->setToolTip(QApplication::translate("ViewPanel3D", "Flip the direction of the cut plane", 0));
#endif // QT_NO_TOOLTIP
        btnFlip->setText(QApplication::translate("ViewPanel3D", "flip", 0));
#ifndef QT_NO_TOOLTIP
        btnCancel->setToolTip(QApplication::translate("ViewPanel3D", "Cancel 3D editing operation", 0));
#endif // QT_NO_TOOLTIP
        btnCancel->setText(QApplication::translate("ViewPanel3D", "cancel", 0));
#ifndef QT_NO_TOOLTIP
        btnExpand->setToolTip(QApplication::translate("ViewPanel3D", "Expand this view to occupy the entire window", 0));
#endif // QT_NO_TOOLTIP
        btnExpand->setText(QApplication::translate("ViewPanel3D", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnScreenshot->setToolTip(QApplication::translate("ViewPanel3D", "Save a screenshot", 0));
#endif // QT_NO_TOOLTIP
        btnScreenshot->setText(QApplication::translate("ViewPanel3D", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("ViewPanel3D", "Additional 3D view controls", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ViewPanel3D: public Ui_ViewPanel3D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPANEL3D_H
