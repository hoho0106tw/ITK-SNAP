/********************************************************************************
** Form generated from reading UI file 'LayerInspectorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERINSPECTORDIALOG_H
#define UI_LAYERINSPECTORDIALOG_H

#include <MetadataInspector.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorMapInspector.h"
#include "ContrastInspector.h"
#include "GeneralLayerInspector.h"
#include "ImageInfoInspector.h"

QT_BEGIN_NAMESPACE

class Ui_LayerInspectorDialog
{
public:
    QAction *actionSaveSelectedLayerAs;
    QAction *actionLayoutToggle;
    QAction *actionOpenLayer;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *loToolbar;
    QScrollArea *saLayers;
    QWidget *saLayersContents;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    GeneralLayerInspector *cmpComponent;
    ContrastInspector *cmpContrast;
    ColorMapInspector *cmpColorMap;
    ImageInfoInspector *cmpInfo;
    MetadataInspector *cmpMetadata;

    void setupUi(QDialog *LayerInspectorDialog)
    {
        if (LayerInspectorDialog->objectName().isEmpty())
            LayerInspectorDialog->setObjectName(QStringLiteral("LayerInspectorDialog"));
        LayerInspectorDialog->resize(640, 537);
        actionSaveSelectedLayerAs = new QAction(LayerInspectorDialog);
        actionSaveSelectedLayerAs->setObjectName(QStringLiteral("actionSaveSelectedLayerAs"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/save_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSelectedLayerAs->setIcon(icon);
        actionLayoutToggle = new QAction(LayerInspectorDialog);
        actionLayoutToggle->setObjectName(QStringLiteral("actionLayoutToggle"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/layout_tile_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayoutToggle->setIcon(icon1);
        actionOpenLayer = new QAction(LayerInspectorDialog);
        actionOpenLayer->setObjectName(QStringLiteral("actionOpenLayer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/open_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenLayer->setIcon(icon2);
        horizontalLayout = new QHBoxLayout(LayerInspectorDialog);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        widget = new QWidget(LayerInspectorDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(180, 0));
        widget->setStyleSheet(QLatin1String("QToolButton {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"	icon-size: 16px;\n"
"	padding: 1px;\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loToolbar = new QHBoxLayout();
        loToolbar->setSpacing(4);
        loToolbar->setObjectName(QStringLiteral("loToolbar"));

        verticalLayout->addLayout(loToolbar);

        saLayers = new QScrollArea(widget);
        saLayers->setObjectName(QStringLiteral("saLayers"));
        saLayers->setStyleSheet(QStringLiteral(""));
        saLayers->setFrameShape(QFrame::NoFrame);
        saLayers->setFrameShadow(QFrame::Plain);
        saLayers->setWidgetResizable(true);
        saLayersContents = new QWidget();
        saLayersContents->setObjectName(QStringLiteral("saLayersContents"));
        saLayersContents->setGeometry(QRect(0, 0, 168, 409));
        saLayersContents->setStyleSheet(QLatin1String("QWidget#saLayersContents {\n"
"	border-left: 1px solid grey;\n"
"	border-right: 1px solid grey;\n"
"	border-bottom: 1px solid grey;\n"
"}"));
        saLayers->setWidget(saLayersContents);

        verticalLayout->addWidget(saLayers);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(1, 1);

        horizontalLayout->addWidget(widget);

        tabWidget = new QTabWidget(LayerInspectorDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        cmpComponent = new GeneralLayerInspector();
        cmpComponent->setObjectName(QStringLiteral("cmpComponent"));
        tabWidget->addTab(cmpComponent, QString());
        cmpContrast = new ContrastInspector();
        cmpContrast->setObjectName(QStringLiteral("cmpContrast"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmpContrast->sizePolicy().hasHeightForWidth());
        cmpContrast->setSizePolicy(sizePolicy1);
        tabWidget->addTab(cmpContrast, QString());
        cmpColorMap = new ColorMapInspector();
        cmpColorMap->setObjectName(QStringLiteral("cmpColorMap"));
        sizePolicy1.setHeightForWidth(cmpColorMap->sizePolicy().hasHeightForWidth());
        cmpColorMap->setSizePolicy(sizePolicy1);
        tabWidget->addTab(cmpColorMap, QString());
        cmpInfo = new ImageInfoInspector();
        cmpInfo->setObjectName(QStringLiteral("cmpInfo"));
        tabWidget->addTab(cmpInfo, QString());
        cmpMetadata = new MetadataInspector();
        cmpMetadata->setObjectName(QStringLiteral("cmpMetadata"));
        tabWidget->addTab(cmpMetadata, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(LayerInspectorDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LayerInspectorDialog);
    } // setupUi

    void retranslateUi(QDialog *LayerInspectorDialog)
    {
        LayerInspectorDialog->setWindowTitle(QApplication::translate("LayerInspectorDialog", "Image Layer Inspector - ITK-SNAP", 0));
        actionSaveSelectedLayerAs->setText(QApplication::translate("LayerInspectorDialog", "Save As...", 0));
        actionLayoutToggle->setText(QApplication::translate("LayerInspectorDialog", "Layout Toggle", 0));
#ifndef QT_NO_TOOLTIP
        actionLayoutToggle->setToolTip(QApplication::translate("LayerInspectorDialog", "<html><head/><body><p>Toggle between thumbnail and tiled layouts.</p><p>In <span style=\" font-weight:600;\">thumbnail</span> layout, one image layer occupies most of the available screen space, and other loaded image layers are shown as thumbnails. In <span style=\" font-weight:600;\">tiled</span> layout, multiple image layers are shown side by side. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOpenLayer->setText(QApplication::translate("LayerInspectorDialog", "Open Layer", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenLayer->setToolTip(QApplication::translate("LayerInspectorDialog", "Open an additional image layer", 0));
#endif // QT_NO_TOOLTIP
        actionOpenLayer->setShortcut(QApplication::translate("LayerInspectorDialog", "Ctrl+Shift+G", 0));
        tabWidget->setTabText(tabWidget->indexOf(cmpComponent), QApplication::translate("LayerInspectorDialog", "General", 0));
        tabWidget->setTabToolTip(tabWidget->indexOf(cmpComponent), QApplication::translate("LayerInspectorDialog", "<html><head/><body><p>Select which channels to show for multi-channel images (images with multiple components per voxel)</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(cmpContrast), QApplication::translate("LayerInspectorDialog", "Contrast", 0));
        tabWidget->setTabText(tabWidget->indexOf(cmpColorMap), QApplication::translate("LayerInspectorDialog", "Color Map", 0));
        tabWidget->setTabText(tabWidget->indexOf(cmpInfo), QApplication::translate("LayerInspectorDialog", "Info", 0));
        tabWidget->setTabText(tabWidget->indexOf(cmpMetadata), QApplication::translate("LayerInspectorDialog", "Metadata", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerInspectorDialog: public Ui_LayerInspectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERINSPECTORDIALOG_H
