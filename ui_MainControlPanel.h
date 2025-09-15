/********************************************************************************
** Form generated from reading UI file 'MainControlPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCONTROLPANEL_H
#define UI_MAINCONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AnnotationToolPanel.h"
#include "CursorInspector.h"
#include "DisplayLayoutInspector.h"
#include "LabelInspector.h"
#include "LabelSelectionButton.h"
#include "PaintbrushToolPanel.h"
#include "PolygonToolPanel.h"
#include "SnakeToolROIPanel.h"
#include "SynchronizationInspector.h"
#include "ZoomInspector.h"

QT_BEGIN_NAMESPACE

class Ui_MainControlPanel
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *grpToolbox;
    QVBoxLayout *verticalLayout_4;
    QWidget *panelToolbarMode;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *btnCrosshair;
    QToolButton *btnZoom;
    QToolButton *btnPolygon;
    QToolButton *btnPaintbrush;
    QToolButton *btnSnake;
    QToolButton *btnAnnotation;
    QWidget *panelToolbarMode_3;
    QHBoxLayout *horizontalLayout_7;
    QFrame *line;
    QWidget *panelToolbarAction;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnUndo;
    QToolButton *btnRedo;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnLayerInspector;
    QSpacerItem *horizontalSpacer_9;
    LabelSelectionButton *btnLabelSelector;
    QToolButton *btnLabelEditor;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *grpInspector;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnCursorInspector;
    QToolButton *btnZoomInspector;
    QToolButton *btnDisplayInspector;
    QToolButton *btnSyncInspector;
    QToolButton *btnPolygonInspector;
    QToolButton *btnPaintbrushInspector;
    QToolButton *btnSnakeInspector;
    QToolButton *btnAnnotateInspector;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stack;
    CursorInspector *pageCursorInspector;
    ZoomInspector *pageZoomInspector;
    DisplayLayoutInspector *pageDisplayInspector;
    SynchronizationInspector *pageSyncInspector;
    SnakeToolROIPanel *pageSnakeTool;
    PaintbrushToolPanel *pagePaintbrushTool;
    PolygonToolPanel *pagePolygonTool;
    AnnotationToolPanel *pageAnnotationTool;
    QWidget *pageBlank;
    QGroupBox *grpToolbox3D_2;
    QHBoxLayout *horizontalLayout_3;
    LabelInspector *labelInspector;
    QGroupBox *grpToolbox3D;
    QVBoxLayout *verticalLayout_6;
    QWidget *panelToolbarMode3D;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *btnRotate3D;
    QToolButton *btnCross3D;
    QToolButton *btnSpray;
    QToolButton *btnScalpel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MainControlPanel)
    {
        if (MainControlPanel->objectName().isEmpty())
            MainControlPanel->setObjectName(QStringLiteral("MainControlPanel"));
        MainControlPanel->resize(184, 715);
        MainControlPanel->setMinimumSize(QSize(184, 0));
        MainControlPanel->setMaximumSize(QSize(184, 16777215));
        MainControlPanel->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  color: rgb(30,30,160);\n"
"  background-color: rgb(222,222,222);\n"
"  padding: 5px;\n"
"  border-radius: 2px;\n"
"  border: 1px solid rgb(168,168,168);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}\n"
"\n"
"QToolButton::checked {\n"
"  background-color:rgb(210, 210, 210);\n"
"}\n"
"\n"
"QToolButton::pressed {\n"
"  background-color:rgb(210, 210, 210);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(MainControlPanel);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widgetMain = new QWidget(MainControlPanel);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        widgetMain->setStyleSheet(QStringLiteral(""));
        verticalLayout_15 = new QVBoxLayout(widgetMain);
        verticalLayout_15->setSpacing(12);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        grpToolbox = new QGroupBox(widgetMain);
        grpToolbox->setObjectName(QStringLiteral("grpToolbox"));
        grpToolbox->setStyleSheet(QLatin1String("/* *** STYLE WITH 28x28 buttons, dropdown menu option *** */\n"
"\n"
"/*\n"
"QToolBar {\n"
"	padding: 0px;\n"
"}\n"
"\n"
"QToolButton { \n"
"    border: 1px solid rgba(255, 255, 255, 0);\n"
"    border-radius: 3px;\n"
"    padding: 0px;\n"
"    margin: 0px;\n"
"    height: 26px;\n"
"    width: 26px;\n"
"    icon-size: 28px;\n"
"}\n"
"\n"
"QToolButton:hover { \n"
"    border-color: #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { \n"
"  padding-right: 6px; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    border-color: #8f8f91;\n"
"    background-color: #bbbbbb;\n"
"}\n"
"\n"
"QToolButton::menu-button {\n"
"    border: 1px solid rgba(255, 255, 255, 0);\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QToolButton::menu-button:hover {\n"
"    border-top-color: #8f8f91;\n"
"    border-bottom-color: #8f8"
                        "f91;\n"
"    border-right-color: #8f8f91;\n"
"}\n"
"\n"
"QToolButton::menu-button:checked {\n"
"    border-top-color: #8f8f91;\n"
"    border-bottom-color: #8f8f91;\n"
"    border-right-color: #8f8f91;\n"
"}\n"
"\n"
"QToolButton::menu-button:pressed {\n"
"    border-top-color: #8f8f91;\n"
"    border-bottom-color: #8f8f91;\n"
"    border-right-color: #8f8f91;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"image: url(:/root/menu-arrow_8.png);\n"
"top:11px;\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
"    top: 12px; left: 0px; \n"
"}\n"
"*/\n"
"\n"
"QToolButton { \n"
"    border: 1px solid rgba(255, 255, 255, 0);\n"
"    border-radius: 3px;\n"
"    padding: 0px;\n"
"    margin: 0px;\n"
"    height: 22px;\n"
"    width: 22px;\n"
"    icon-size: 24px;\n"
"}\n"
"\n"
"QToolButton:hover { \n"
"    border-color: #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    borde"
                        "r-color: #8f8f91;\n"
"    background-color: #bbbbbb;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(grpToolbox);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        panelToolbarMode = new QWidget(grpToolbox);
        panelToolbarMode->setObjectName(QStringLiteral("panelToolbarMode"));
        panelToolbarMode->setStyleSheet(QLatin1String("QQQ_QToolButton {\n"
"	width: 22px;\n"
"	height: 22px;\n"
"	icon-size: 22px;\n"
"	padding: 1px;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(panelToolbarMode);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnCrosshair = new QToolButton(panelToolbarMode);
        btnCrosshair->setObjectName(QStringLiteral("btnCrosshair"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/crosshair.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnCrosshair->setIcon(icon);
        btnCrosshair->setCheckable(true);
        btnCrosshair->setChecked(true);

        horizontalLayout_4->addWidget(btnCrosshair);

        btnZoom = new QToolButton(panelToolbarMode);
        btnZoom->setObjectName(QStringLiteral("btnZoom"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/zoom.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnZoom->setIcon(icon1);
        btnZoom->setCheckable(true);

        horizontalLayout_4->addWidget(btnZoom);

        btnPolygon = new QToolButton(panelToolbarMode);
        btnPolygon->setObjectName(QStringLiteral("btnPolygon"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/poly.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPolygon->setIcon(icon2);
        btnPolygon->setCheckable(true);

        horizontalLayout_4->addWidget(btnPolygon);

        btnPaintbrush = new QToolButton(panelToolbarMode);
        btnPaintbrush->setObjectName(QStringLiteral("btnPaintbrush"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/paintbrush.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnPaintbrush->setIcon(icon3);
        btnPaintbrush->setCheckable(true);

        horizontalLayout_4->addWidget(btnPaintbrush);

        btnSnake = new QToolButton(panelToolbarMode);
        btnSnake->setObjectName(QStringLiteral("btnSnake"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/snake.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnSnake->setIcon(icon4);
        btnSnake->setCheckable(true);

        horizontalLayout_4->addWidget(btnSnake);

        btnAnnotation = new QToolButton(panelToolbarMode);
        btnAnnotation->setObjectName(QStringLiteral("btnAnnotation"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/annotation_28.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAnnotation->setIcon(icon5);
        btnAnnotation->setCheckable(true);

        horizontalLayout_4->addWidget(btnAnnotation);


        verticalLayout_4->addWidget(panelToolbarMode);

        panelToolbarMode_3 = new QWidget(grpToolbox);
        panelToolbarMode_3->setObjectName(QStringLiteral("panelToolbarMode_3"));
        panelToolbarMode_3->setStyleSheet(QLatin1String("QQQ_QToolButton {\n"
"	width: 22px;\n"
"	height: 22px;\n"
"	icon-size: 22px;\n"
"	padding: 1px;\n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(panelToolbarMode_3);
        horizontalLayout_7->setSpacing(2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(panelToolbarMode_3);

        line = new QFrame(grpToolbox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        panelToolbarAction = new QWidget(grpToolbox);
        panelToolbarAction->setObjectName(QStringLiteral("panelToolbarAction"));
        panelToolbarAction->setStyleSheet(QLatin1String("QToolButton {\n"
"	width: 16px;\n"
"	height: 16px;\n"
"	icon-size: 16px;\n"
"	padding: 1px;\n"
"}\n"
"\n"
"QToolButton::menu-indicator {\n"
"  image:none;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"  image:none;\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(panelToolbarAction);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnUndo = new QToolButton(panelToolbarAction);
        btnUndo->setObjectName(QStringLiteral("btnUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/icons8_undo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUndo->setIcon(icon6);

        horizontalLayout->addWidget(btnUndo);

        btnRedo = new QToolButton(panelToolbarAction);
        btnRedo->setObjectName(QStringLiteral("btnRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/icons8_redo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRedo->setIcon(icon7);

        horizontalLayout->addWidget(btnRedo);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnLayerInspector = new QToolButton(panelToolbarAction);
        btnLayerInspector->setObjectName(QStringLiteral("btnLayerInspector"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/root/layer_Inspector_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLayerInspector->setIcon(icon8);

        horizontalLayout->addWidget(btnLayerInspector);

        horizontalSpacer_9 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        btnLabelSelector = new LabelSelectionButton(panelToolbarAction);
        btnLabelSelector->setObjectName(QStringLiteral("btnLabelSelector"));
        btnLabelSelector->setStyleSheet(QStringLiteral(""));
        btnLabelSelector->setIcon(icon8);

        horizontalLayout->addWidget(btnLabelSelector);

        btnLabelEditor = new QToolButton(panelToolbarAction);
        btnLabelEditor->setObjectName(QStringLiteral("btnLabelEditor"));
        btnLabelEditor->setIcon(icon8);

        horizontalLayout->addWidget(btnLabelEditor);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout_4->addWidget(panelToolbarAction);


        verticalLayout_15->addWidget(grpToolbox);

        grpInspector = new QGroupBox(widgetMain);
        grpInspector->setObjectName(QStringLiteral("grpInspector"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(grpInspector->sizePolicy().hasHeightForWidth());
        grpInspector->setSizePolicy(sizePolicy);
        grpInspector->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(grpInspector);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(grpInspector);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QToolButton {\n"
"  icon-size: 22px;\n"
"  min-width: 1ex;\n"
"  border-top: 1px solid rgb(192, 192, 192);\n"
"  border-bottom: 1px solid rgb(192, 192, 192);\n"
"  border-left: 1px;\n"
"  border-right: 1px;\n"
"  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0394089 rgba(235, 235, 235, 255), stop:0.487685 rgba(216, 216, 216, 255), stop:0.502463 rgba(205, 205, 205, 255), stop:1 rgba(235, 235, 235, 255));\n"
"  width: 25px;\n"
"  height: 25px;\n"
"}\n"
"QToolButton:hover, QToolButton:checked {\n"
"  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0394089 rgba(214, 228, 245, 255), stop:0.487685 rgba(193, 205, 221, 255), stop:0.502463 rgba(182, 193, 207, 255), stop:1 rgba(215, 228, 245, 255));\n"
"  padding:0px;\n"
"}\n"
"QWidget#widget {\n"
"  background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.0394089 rgba(235, 235, 235, 255), stop"
                        ":0.487685 rgba(216, 216, 216, 255), stop:0.502463 rgba(205, 205, 205, 255), stop:1 rgba(235, 235, 235, 255));\n"
"  border-top: 1px solid rgb(192, 192, 192);\n"
"  border-bottom: 1px solid rgb(192, 192, 192);\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnCursorInspector = new QToolButton(widget);
        btnCursorInspector->setObjectName(QStringLiteral("btnCursorInspector"));
        btnCursorInspector->setMinimumSize(QSize(25, 30));
        btnCursorInspector->setStyleSheet(QStringLiteral(""));
        btnCursorInspector->setIcon(icon);
        btnCursorInspector->setCheckable(true);
        btnCursorInspector->setChecked(true);
        btnCursorInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnCursorInspector);

        btnZoomInspector = new QToolButton(widget);
        btnZoomInspector->setObjectName(QStringLiteral("btnZoomInspector"));
        btnZoomInspector->setMinimumSize(QSize(25, 30));
        btnZoomInspector->setStyleSheet(QStringLiteral(""));
        btnZoomInspector->setIcon(icon1);
        btnZoomInspector->setCheckable(true);
        btnZoomInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnZoomInspector);

        btnDisplayInspector = new QToolButton(widget);
        btnDisplayInspector->setObjectName(QStringLiteral("btnDisplayInspector"));
        btnDisplayInspector->setMinimumSize(QSize(25, 27));
        btnDisplayInspector->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/root/dl_toolbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDisplayInspector->setIcon(icon9);
        btnDisplayInspector->setCheckable(true);
        btnDisplayInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnDisplayInspector);

        btnSyncInspector = new QToolButton(widget);
        btnSyncInspector->setObjectName(QStringLiteral("btnSyncInspector"));
        btnSyncInspector->setMinimumSize(QSize(25, 27));
        btnSyncInspector->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/root/network-wireless.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSyncInspector->setIcon(icon10);
        btnSyncInspector->setCheckable(true);
        btnSyncInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnSyncInspector);

        btnPolygonInspector = new QToolButton(widget);
        btnPolygonInspector->setObjectName(QStringLiteral("btnPolygonInspector"));
        btnPolygonInspector->setMinimumSize(QSize(25, 27));
        btnPolygonInspector->setStyleSheet(QStringLiteral(""));
        btnPolygonInspector->setIcon(icon2);
        btnPolygonInspector->setCheckable(true);
        btnPolygonInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnPolygonInspector);

        btnPaintbrushInspector = new QToolButton(widget);
        btnPaintbrushInspector->setObjectName(QStringLiteral("btnPaintbrushInspector"));
        btnPaintbrushInspector->setMinimumSize(QSize(25, 27));
        btnPaintbrushInspector->setStyleSheet(QStringLiteral(""));
        btnPaintbrushInspector->setIcon(icon3);
        btnPaintbrushInspector->setCheckable(true);
        btnPaintbrushInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnPaintbrushInspector);

        btnSnakeInspector = new QToolButton(widget);
        btnSnakeInspector->setObjectName(QStringLiteral("btnSnakeInspector"));
        btnSnakeInspector->setMinimumSize(QSize(25, 27));
        btnSnakeInspector->setStyleSheet(QStringLiteral(""));
        btnSnakeInspector->setIcon(icon4);
        btnSnakeInspector->setCheckable(true);
        btnSnakeInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnSnakeInspector);

        btnAnnotateInspector = new QToolButton(widget);
        btnAnnotateInspector->setObjectName(QStringLiteral("btnAnnotateInspector"));
        btnAnnotateInspector->setMinimumSize(QSize(25, 27));
        btnAnnotateInspector->setStyleSheet(QStringLiteral(""));
        btnAnnotateInspector->setIcon(icon5);
        btnAnnotateInspector->setCheckable(true);
        btnAnnotateInspector->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btnAnnotateInspector);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        stack = new QStackedWidget(grpInspector);
        stack->setObjectName(QStringLiteral("stack"));
        pageCursorInspector = new CursorInspector();
        pageCursorInspector->setObjectName(QStringLiteral("pageCursorInspector"));
        stack->addWidget(pageCursorInspector);
        pageZoomInspector = new ZoomInspector();
        pageZoomInspector->setObjectName(QStringLiteral("pageZoomInspector"));
        stack->addWidget(pageZoomInspector);
        pageDisplayInspector = new DisplayLayoutInspector();
        pageDisplayInspector->setObjectName(QStringLiteral("pageDisplayInspector"));
        stack->addWidget(pageDisplayInspector);
        pageSyncInspector = new SynchronizationInspector();
        pageSyncInspector->setObjectName(QStringLiteral("pageSyncInspector"));
        stack->addWidget(pageSyncInspector);
        pageSnakeTool = new SnakeToolROIPanel();
        pageSnakeTool->setObjectName(QStringLiteral("pageSnakeTool"));
        stack->addWidget(pageSnakeTool);
        pagePaintbrushTool = new PaintbrushToolPanel();
        pagePaintbrushTool->setObjectName(QStringLiteral("pagePaintbrushTool"));
        stack->addWidget(pagePaintbrushTool);
        pagePolygonTool = new PolygonToolPanel();
        pagePolygonTool->setObjectName(QStringLiteral("pagePolygonTool"));
        stack->addWidget(pagePolygonTool);
        pageAnnotationTool = new AnnotationToolPanel();
        pageAnnotationTool->setObjectName(QStringLiteral("pageAnnotationTool"));
        stack->addWidget(pageAnnotationTool);
        pageBlank = new QWidget();
        pageBlank->setObjectName(QStringLiteral("pageBlank"));
        stack->addWidget(pageBlank);

        verticalLayout_2->addWidget(stack);


        verticalLayout_15->addWidget(grpInspector);

        grpToolbox3D_2 = new QGroupBox(widgetMain);
        grpToolbox3D_2->setObjectName(QStringLiteral("grpToolbox3D_2"));
        grpToolbox3D_2->setStyleSheet(QLatin1String("\n"
"\n"
"QToolBar {\n"
"	padding: 0px;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(grpToolbox3D_2);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelInspector = new LabelInspector(grpToolbox3D_2);
        labelInspector->setObjectName(QStringLiteral("labelInspector"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInspector->sizePolicy().hasHeightForWidth());
        labelInspector->setSizePolicy(sizePolicy1);
        labelInspector->setStyleSheet(QLatin1String("QToolButton {\n"
"	width: 22px;\n"
"	height: 22px;\n"
"	icon-size: 22px;\n"
"	padding: 1px;\n"
"}"));

        horizontalLayout_3->addWidget(labelInspector);


        verticalLayout_15->addWidget(grpToolbox3D_2);

        grpToolbox3D = new QGroupBox(widgetMain);
        grpToolbox3D->setObjectName(QStringLiteral("grpToolbox3D"));
        grpToolbox3D->setStyleSheet(QLatin1String("QToolButton { \n"
"    border: 1px solid rgba(255, 255, 255, 0);\n"
"    border-radius: 3px;\n"
"    padding: 0px;\n"
"    margin: 0px;\n"
"    height: 22px;\n"
"    width: 22px;\n"
"    icon-size: 24px;\n"
"}\n"
"\n"
"QToolButton:hover { \n"
"    border-color: #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    border-color: #8f8f91;\n"
"    background-color: #bbbbbb;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(grpToolbox3D);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        panelToolbarMode3D = new QWidget(grpToolbox3D);
        panelToolbarMode3D->setObjectName(QStringLiteral("panelToolbarMode3D"));
        panelToolbarMode3D->setStyleSheet(QStringLiteral(""));
        horizontalLayout_8 = new QHBoxLayout(panelToolbarMode3D);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        btnRotate3D = new QToolButton(panelToolbarMode3D);
        btnRotate3D->setObjectName(QStringLiteral("btnRotate3D"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/root/rotate3d.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnRotate3D->setIcon(icon11);

        horizontalLayout_8->addWidget(btnRotate3D);

        btnCross3D = new QToolButton(panelToolbarMode3D);
        btnCross3D->setObjectName(QStringLiteral("btnCross3D"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/root/crosshair3D.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnCross3D->setIcon(icon12);

        horizontalLayout_8->addWidget(btnCross3D);

        btnSpray = new QToolButton(panelToolbarMode3D);
        btnSpray->setObjectName(QStringLiteral("btnSpray"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/root/spray.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnSpray->setIcon(icon13);

        horizontalLayout_8->addWidget(btnSpray);

        btnScalpel = new QToolButton(panelToolbarMode3D);
        btnScalpel->setObjectName(QStringLiteral("btnScalpel"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/root/scalpel.gif"), QSize(), QIcon::Normal, QIcon::Off);
        btnScalpel->setIcon(icon14);

        horizontalLayout_8->addWidget(btnScalpel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(panelToolbarMode3D);


        verticalLayout_15->addWidget(grpToolbox3D);


        verticalLayout->addWidget(widgetMain);


        retranslateUi(MainControlPanel);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainControlPanel);
    } // setupUi

    void retranslateUi(QWidget *MainControlPanel)
    {
        MainControlPanel->setWindowTitle(QApplication::translate("MainControlPanel", "Form", 0));
        grpToolbox->setTitle(QApplication::translate("MainControlPanel", "Main Toolbar", 0));
        btnCrosshair->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnZoom->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnPolygon->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnPaintbrush->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnSnake->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnAnnotation->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnUndo->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnRedo->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnLayerInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnLabelSelector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Quick Label Picker</span><br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"0\" cellpadding=\"2\"><tr><td><p>Active label:</p></td><td><p><span style=\" font-weight:600;\"><!--FgStart-->FFFF<!--FgEnd--></span></p></td></tr><tr><td><p>Draw over:</p></td><td><p><span style=\" font-weight:600;\"><!--BgStart-->FFFF<!--BgEnd--></span></p></td></tr></table><p>Press this button to quickly select the active label for all segmentation operations, and the draw over mask, which determines which previously labeled voxels are affected by segmentation operations.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnLabelSelector->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnLabelEditor->setText(QApplication::translate("MainControlPanel", "...", 0));
        grpInspector->setTitle(QApplication::translate("MainControlPanel", "Cursor Inspector", 0));
#ifndef QT_NO_TOOLTIP
        btnCursorInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Cursor Inspector</span></p><p>Examine the voxel under the cursor and enter exact 3D cursor location.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnCursorInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnZoomInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Zoom Inspector</span></p><p>Control zoom factor in all slice views. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnZoomInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnDisplayInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Display Layout Inspector</span></p><p>Control which slice views are shown in the main ITK-SNAP window and how multiple image layers are rendered. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnDisplayInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSyncInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Synchronization Inspector</span></p><p>Adjust synchronization of cursor, zoom and pan across multiple ITK-SNAP sessions running on one computer.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSyncInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnPolygonInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Polygon Tool Inspector</span></p><p>Adjust settings associated with the polygon tool.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnPolygonInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnPaintbrushInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Paintbrush Tool Inspector</span></p><p>Adjust settings associated with the paintbrush tool.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnPaintbrushInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSnakeInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Snake Tool Inspector</span></p><p>Adjust settings associated with the automatic segmentation (snake) tool.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSnakeInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAnnotateInspector->setToolTip(QApplication::translate("MainControlPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Annotation Tool Inspector</span></p><p>Adjust settings associated with the annotation tool.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAnnotateInspector->setText(QApplication::translate("MainControlPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        pageDisplayInspector->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pageSyncInspector->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        grpToolbox3D_2->setTitle(QApplication::translate("MainControlPanel", "Segmentation Labels", 0));
        grpToolbox3D->setTitle(QApplication::translate("MainControlPanel", "3D Toolbar", 0));
        btnRotate3D->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnCross3D->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnSpray->setText(QApplication::translate("MainControlPanel", "...", 0));
        btnScalpel->setText(QApplication::translate("MainControlPanel", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainControlPanel: public Ui_MainControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCONTROLPANEL_H
