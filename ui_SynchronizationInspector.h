/********************************************************************************
** Form generated from reading UI file 'SynchronizationInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCHRONIZATIONINSPECTOR_H
#define UI_SYNCHRONIZATIONINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SynchronizationInspector
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkSync;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QWidget *panelProperties;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkCursor;
    QCheckBox *chkZoom;
    QCheckBox *chkPan;
    QCheckBox *chkCamera;
    QSpacerItem *verticalSpacer_2;
    QWidget *panelChannel;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QWidget *SynchronizationInspector)
    {
        if (SynchronizationInspector->objectName().isEmpty())
            SynchronizationInspector->setObjectName(QStringLiteral("SynchronizationInspector"));
        SynchronizationInspector->resize(162, 349);
        SynchronizationInspector->setStyleSheet(QLatin1String("*  {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QSpinBox { font-size: 11px; }\n"
""));
        verticalLayout = new QVBoxLayout(SynchronizationInspector);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chkSync = new QCheckBox(SynchronizationInspector);
        chkSync->setObjectName(QStringLiteral("chkSync"));
        chkSync->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(chkSync);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, -1, 5);
        label = new QLabel(SynchronizationInspector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font-size:10px;"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(SynchronizationInspector);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        panelProperties = new QWidget(SynchronizationInspector);
        panelProperties->setObjectName(QStringLiteral("panelProperties"));
        panelProperties->setEnabled(true);
        panelProperties->setStyleSheet(QLatin1String("QCheckBox {\n"
"  padding:0px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(panelProperties);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);
        chkCursor = new QCheckBox(panelProperties);
        chkCursor->setObjectName(QStringLiteral("chkCursor"));

        verticalLayout_2->addWidget(chkCursor);

        chkZoom = new QCheckBox(panelProperties);
        chkZoom->setObjectName(QStringLiteral("chkZoom"));

        verticalLayout_2->addWidget(chkZoom);

        chkPan = new QCheckBox(panelProperties);
        chkPan->setObjectName(QStringLiteral("chkPan"));

        verticalLayout_2->addWidget(chkPan);

        chkCamera = new QCheckBox(panelProperties);
        chkCamera->setObjectName(QStringLiteral("chkCamera"));

        verticalLayout_2->addWidget(chkCamera);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addWidget(panelProperties);

        panelChannel = new QWidget(SynchronizationInspector);
        panelChannel->setObjectName(QStringLiteral("panelChannel"));
        horizontalLayout_2 = new QHBoxLayout(panelChannel);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 0, 0, 0);

        verticalLayout->addWidget(panelChannel);


        retranslateUi(SynchronizationInspector);

        QMetaObject::connectSlotsByName(SynchronizationInspector);
    } // setupUi

    void retranslateUi(QWidget *SynchronizationInspector)
    {
        SynchronizationInspector->setWindowTitle(QApplication::translate("SynchronizationInspector", "Form", 0));
#ifndef QT_NO_TOOLTIP
        chkSync->setToolTip(QApplication::translate("SynchronizationInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Toggle synchronization</span></p><p><br/></p><p>When enabled, this ITK-SNAP window will synchronize cursor position and other view properties with other ITK-SNAP windows open on the same machine. This is useful for yoking the cursor across two medical images.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkSync->setText(QApplication::translate("SynchronizationInspector", "Synchronization", 0));
        label->setText(QApplication::translate("SynchronizationInspector", "Share state with other \n"
"ITK-SNAP windows", 0));
        label_3->setText(QApplication::translate("SynchronizationInspector", "Properties to sync:", 0));
#ifndef QT_NO_TOOLTIP
        chkCursor->setToolTip(QApplication::translate("SynchronizationInspector", "<html><head/><body><p>Sync the position of the 3D cursor between ITK-SNAP windows</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkCursor->setText(QApplication::translate("SynchronizationInspector", "Cursor position", 0));
#ifndef QT_NO_TOOLTIP
        chkZoom->setToolTip(QApplication::translate("SynchronizationInspector", "<html><head/><body><p>Sync the zoom level between ITK-SNAP windows. <span style=\" font-style:italic;\">Linked zoom must be enabled in the zoom inspector.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkZoom->setText(QApplication::translate("SynchronizationInspector", "Zoom level", 0));
#ifndef QT_NO_TOOLTIP
        chkPan->setToolTip(QApplication::translate("SynchronizationInspector", "<html><head/><body><p>Sync the panning position betweenITK-SNAP windows. <span style=\" font-style:italic;\">Linked zoom must be enabled in the zoom inspector.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkPan->setText(QApplication::translate("SynchronizationInspector", "Pan", 0));
#ifndef QT_NO_TOOLTIP
        chkCamera->setToolTip(QApplication::translate("SynchronizationInspector", "<html><head/><body><p>Sync the 3D view camera position between ITK-SNAP windows.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkCamera->setText(QApplication::translate("SynchronizationInspector", "3D viewpoint", 0));
    } // retranslateUi

};

namespace Ui {
    class SynchronizationInspector: public Ui_SynchronizationInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNCHRONIZATIONINSPECTOR_H
