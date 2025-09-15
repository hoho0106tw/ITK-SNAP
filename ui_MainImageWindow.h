/********************************************************************************
** Form generated from reading UI file 'MainImageWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINIMAGEWINDOW_H
#define UI_MAINIMAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <RecentHistoryItemsView.h>
#include "SliceViewPanel.h"
#include "ViewPanel3D.h"

QT_BEGIN_NAMESPACE

class Ui_MainImageWindow
{
public:
    QAction *actionOpenMain;
    QAction *actionQuit;
    QAction *actionLoad_from_Image;
    QAction *actionSaveMain;
    QAction *actionSaveSpeed;
    QAction *actionSaveLevelSet;
    QAction *actionSaveMainROI;
    QAction *actionRecent_1;
    QAction *actionRecent_2;
    QAction *actionRecent_3;
    QAction *actionRecent_4;
    QAction *actionRecent_5;
    QAction *actionExportAxial;
    QAction *actionExportCoronal;
    QAction *actionExportSagittal;
    QAction *actionUnload_All;
    QAction *actionClear;
    QAction *actionAdd_Overlay;
    QAction *actionImage_Contrast;
    QAction *actionLabel_Editor;
    QAction *actionReorient_Image;
    QAction *actionZoomToFitInAllViews;
    QAction *actionCenter_on_Cursor;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionRecentWorkspace_1;
    QAction *actionRecentWorkspace_2;
    QAction *actionRecentWorkspace_3;
    QAction *actionRecentWorkspace_4;
    QAction *actionSSAxial;
    QAction *actionSSCoronal;
    QAction *actionSSSagittal;
    QAction *actionSaveSegmentationAs;
    QAction *actionSave_as_Mesh;
    QAction *actionLoadLabels;
    QAction *actionSaveLabels;
    QAction *actionVolumesAndStatistics;
    QAction *actionSegmentationToggle;
    QAction *actionSegmentationIncreaseOpacity;
    QAction *actionSegmentationDecreaseOpacity;
    QAction *actionColor_Map_Editor;
    QAction *actionImage_Information;
    QAction *actionUnload_Last_Overlay;
    QAction *actionUnload_All_Overlays;
    QAction *actionLayerInspector;
    QAction *actionCrosshair;
    QAction *actionZoomPan;
    QAction *actionPolygon;
    QAction *actionPaintbrush;
    QAction *actionSnake;
    QAction *actionSaveSegmentation;
    QAction *action3DTrackball;
    QAction *action3DCrosshair;
    QAction *action3DScalpel;
    QAction *action3DSpray;
    QAction *actionOverlayVisibilityToggleAll;
    QAction *actionOverlayVisibilityIncreaseAll;
    QAction *actionOverlayVisibilityDecreaseAll;
    QAction *actionAbout;
    QAction *actionPreferences;
    QAction *actionSaveWorkspace;
    QAction *actionOpenWorkspace;
    QAction *actionSaveWorkspaceAs;
    QAction *actionRecentWorkspace_5;
    QAction *actionRecentWorkspace1;
    QAction *actionRecentWorkspace2;
    QAction *actionRecentWorkspace3;
    QAction *actionRecentWorkspace4;
    QAction *actionRecentWorkspace5;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionReset;
    QAction *actionSSSeriesAxial;
    QAction *actionSSSeriesCoronal;
    QAction *actionSSSeriesSagittal;
    QAction *actionForegroundLabelPrev;
    QAction *actionForegroundLabelNext;
    QAction *actionBackgroundLabelPrev;
    QAction *actionBackgroundLabelNext;
    QAction *actionToggle_All_Annotations;
    QAction *actionToggle_Crosshair;
    QAction *actionAnnotation_Preferences;
    QAction *actionAutoContrastGlobal;
    QAction *actionResetContrastGlobal;
    QAction *actionHa;
    QAction *actionZoom_to_100;
    QAction *actionZoom_to_200;
    QAction *actionZoom_to_400;
    QAction *actionCheck_for_Updates;
    QAction *actionDocumentation_Home;
    QAction *actionNew_ITK_SNAP_Window;
    QAction *actionCoregister_Overlay;
    QAction *actionRecentOverlay_1;
    QAction *actionRecentOverlay_2;
    QAction *actionRecentOverlay_3;
    QAction *actionRecentOverlay_4;
    QAction *actionRecentOverlay_5;
    QAction *actionAnnotation;
    QAction *actionToggleLayerLayout;
    QAction *actionActivateNextLayer;
    QAction *actionActivatePreviousLayer;
    QAction *actionInterpolate_Labels;
    QAction *actionRegistration;
    QAction *actionClose_Window;
    QAction *actionDicomDummy;
    QAction *actionMainControlPanel;
    QAction *actionRecentSeg_1;
    QAction *actionRecentSeg_2;
    QAction *actionRecentSeg_3;
    QAction *actionRecentSeg_4;
    QAction *actionRecentSeg_5;
    QAction *actionActivateNextSegmentationLayer;
    QAction *actionActivatePreviousSegmentationLayer;
    QAction *actionAddSegmentation_Open;
    QAction *actionAddSegmentation_New;
    QAction *actionRecentAddSeg_1;
    QAction *actionRecentAddSeg_2;
    QAction *actionRecentAddSeg_3;
    QAction *actionRecentAddSeg_4;
    QAction *actionRecentAddSeg_5;
    QAction *actionClearActive;
    QAction *actionInstallCLI;
    QAction *actionDSS;
    QAction *actionNext_Display_Layout;
    QAction *actionContrast40_80;
    QAction *actionContrast40_40;
    QAction *actionContrast130_2400;
    QAction *actionContrast40_400;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackMain;
    QWidget *pageMain;
    QGridLayout *gridLayout_2;
    SliceViewPanel *panel0;
    SliceViewPanel *panel1;
    ViewPanel3D *panel3D;
    SliceViewPanel *panel2;
    QWidget *pageSplash;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabSplash;
    QWidget *tabGettingStarted;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QTextBrowser *brsGettingStarted;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *tabRecent;
    QVBoxLayout *verticalLayout_3;
    RecentHistoryItemsView *panelRecentImages;
    QWidget *tabRecentWorkspaces;
    QVBoxLayout *verticalLayout_5;
    RecentHistoryItemsView *panelRecentWorkspaces;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLoadMain;
    QPushButton *btnLoadWorkspace;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuRecent_Images;
    QMenu *menuRecent_Overlays;
    QMenu *menuSave_Image;
    QMenu *menuExport;
    QMenu *menuImage_Slice;
    QMenu *menuScreenshot;
    QMenu *menuScreenshot_Series;
    QMenu *menuAddAnotherDicomImage;
    QMenu *menuSegmentation;
    QMenu *menuAppearance;
    QMenu *menuRecent_Segmentations;
    QMenu *menuAddSegmentation;
    QMenu *menuAddSegmentation_Recent;
    QMenu *menuTools;
    QMenu *menuActive_Main_Tool;
    QMenu *menuActive_3D_Tool;
    QMenu *menuContrast;
    QMenu *menuEdit;
    QMenu *menuForeground_Label;
    QMenu *menuBackground_Label;
    QMenu *menuSlice_Annotations;
    QMenu *menuZoom;
    QMenu *menuLayers;
    QMenu *menuViews;
    QMenu *menuHelp;
    QMenu *menuProject;
    QMenu *menuRecentWorkspaces;
    QMenu *menuAdjust_Contrast;

    void setupUi(QMainWindow *MainImageWindow)
    {
        if (MainImageWindow->objectName().isEmpty())
            MainImageWindow->setObjectName(QStringLiteral("MainImageWindow"));
        MainImageWindow->resize(907, 700);
        MainImageWindow->setStyleSheet(QLatin1String("* {\n"
"font-size:13px;\n"
"}"));
        actionOpenMain = new QAction(MainImageWindow);
        actionOpenMain->setObjectName(QStringLiteral("actionOpenMain"));
        actionQuit = new QAction(MainImageWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionLoad_from_Image = new QAction(MainImageWindow);
        actionLoad_from_Image->setObjectName(QStringLiteral("actionLoad_from_Image"));
        actionSaveMain = new QAction(MainImageWindow);
        actionSaveMain->setObjectName(QStringLiteral("actionSaveMain"));
        actionSaveSpeed = new QAction(MainImageWindow);
        actionSaveSpeed->setObjectName(QStringLiteral("actionSaveSpeed"));
        actionSaveLevelSet = new QAction(MainImageWindow);
        actionSaveLevelSet->setObjectName(QStringLiteral("actionSaveLevelSet"));
        actionSaveMainROI = new QAction(MainImageWindow);
        actionSaveMainROI->setObjectName(QStringLiteral("actionSaveMainROI"));
        actionRecent_1 = new QAction(MainImageWindow);
        actionRecent_1->setObjectName(QStringLiteral("actionRecent_1"));
        actionRecent_2 = new QAction(MainImageWindow);
        actionRecent_2->setObjectName(QStringLiteral("actionRecent_2"));
        actionRecent_3 = new QAction(MainImageWindow);
        actionRecent_3->setObjectName(QStringLiteral("actionRecent_3"));
        actionRecent_4 = new QAction(MainImageWindow);
        actionRecent_4->setObjectName(QStringLiteral("actionRecent_4"));
        actionRecent_5 = new QAction(MainImageWindow);
        actionRecent_5->setObjectName(QStringLiteral("actionRecent_5"));
        actionExportAxial = new QAction(MainImageWindow);
        actionExportAxial->setObjectName(QStringLiteral("actionExportAxial"));
        actionExportCoronal = new QAction(MainImageWindow);
        actionExportCoronal->setObjectName(QStringLiteral("actionExportCoronal"));
        actionExportSagittal = new QAction(MainImageWindow);
        actionExportSagittal->setObjectName(QStringLiteral("actionExportSagittal"));
        actionUnload_All = new QAction(MainImageWindow);
        actionUnload_All->setObjectName(QStringLiteral("actionUnload_All"));
        actionClear = new QAction(MainImageWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionAdd_Overlay = new QAction(MainImageWindow);
        actionAdd_Overlay->setObjectName(QStringLiteral("actionAdd_Overlay"));
        actionImage_Contrast = new QAction(MainImageWindow);
        actionImage_Contrast->setObjectName(QStringLiteral("actionImage_Contrast"));
        actionLabel_Editor = new QAction(MainImageWindow);
        actionLabel_Editor->setObjectName(QStringLiteral("actionLabel_Editor"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/icons8_palette_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLabel_Editor->setIcon(icon);
        actionReorient_Image = new QAction(MainImageWindow);
        actionReorient_Image->setObjectName(QStringLiteral("actionReorient_Image"));
        actionZoomToFitInAllViews = new QAction(MainImageWindow);
        actionZoomToFitInAllViews->setObjectName(QStringLiteral("actionZoomToFitInAllViews"));
        actionCenter_on_Cursor = new QAction(MainImageWindow);
        actionCenter_on_Cursor->setObjectName(QStringLiteral("actionCenter_on_Cursor"));
        actionUndo = new QAction(MainImageWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/icons8_undo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon1);
        actionRedo = new QAction(MainImageWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/icons8_redo-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon2);
        actionRecentWorkspace_1 = new QAction(MainImageWindow);
        actionRecentWorkspace_1->setObjectName(QStringLiteral("actionRecentWorkspace_1"));
        actionRecentWorkspace_2 = new QAction(MainImageWindow);
        actionRecentWorkspace_2->setObjectName(QStringLiteral("actionRecentWorkspace_2"));
        actionRecentWorkspace_3 = new QAction(MainImageWindow);
        actionRecentWorkspace_3->setObjectName(QStringLiteral("actionRecentWorkspace_3"));
        actionRecentWorkspace_4 = new QAction(MainImageWindow);
        actionRecentWorkspace_4->setObjectName(QStringLiteral("actionRecentWorkspace_4"));
        actionSSAxial = new QAction(MainImageWindow);
        actionSSAxial->setObjectName(QStringLiteral("actionSSAxial"));
        actionSSCoronal = new QAction(MainImageWindow);
        actionSSCoronal->setObjectName(QStringLiteral("actionSSCoronal"));
        actionSSSagittal = new QAction(MainImageWindow);
        actionSSSagittal->setObjectName(QStringLiteral("actionSSSagittal"));
        actionSaveSegmentationAs = new QAction(MainImageWindow);
        actionSaveSegmentationAs->setObjectName(QStringLiteral("actionSaveSegmentationAs"));
        actionSave_as_Mesh = new QAction(MainImageWindow);
        actionSave_as_Mesh->setObjectName(QStringLiteral("actionSave_as_Mesh"));
        actionLoadLabels = new QAction(MainImageWindow);
        actionLoadLabels->setObjectName(QStringLiteral("actionLoadLabels"));
        actionSaveLabels = new QAction(MainImageWindow);
        actionSaveLabels->setObjectName(QStringLiteral("actionSaveLabels"));
        actionVolumesAndStatistics = new QAction(MainImageWindow);
        actionVolumesAndStatistics->setObjectName(QStringLiteral("actionVolumesAndStatistics"));
        actionSegmentationToggle = new QAction(MainImageWindow);
        actionSegmentationToggle->setObjectName(QStringLiteral("actionSegmentationToggle"));
        actionSegmentationToggle->setChecked(false);
        actionSegmentationIncreaseOpacity = new QAction(MainImageWindow);
        actionSegmentationIncreaseOpacity->setObjectName(QStringLiteral("actionSegmentationIncreaseOpacity"));
        actionSegmentationDecreaseOpacity = new QAction(MainImageWindow);
        actionSegmentationDecreaseOpacity->setObjectName(QStringLiteral("actionSegmentationDecreaseOpacity"));
        actionColor_Map_Editor = new QAction(MainImageWindow);
        actionColor_Map_Editor->setObjectName(QStringLiteral("actionColor_Map_Editor"));
        actionImage_Information = new QAction(MainImageWindow);
        actionImage_Information->setObjectName(QStringLiteral("actionImage_Information"));
        actionUnload_Last_Overlay = new QAction(MainImageWindow);
        actionUnload_Last_Overlay->setObjectName(QStringLiteral("actionUnload_Last_Overlay"));
        actionUnload_All_Overlays = new QAction(MainImageWindow);
        actionUnload_All_Overlays->setObjectName(QStringLiteral("actionUnload_All_Overlays"));
        actionLayerInspector = new QAction(MainImageWindow);
        actionLayerInspector->setObjectName(QStringLiteral("actionLayerInspector"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/icons8_layers_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayerInspector->setIcon(icon3);
        actionCrosshair = new QAction(MainImageWindow);
        actionCrosshair->setObjectName(QStringLiteral("actionCrosshair"));
        actionCrosshair->setCheckable(true);
        actionCrosshair->setChecked(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/crosshair.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrosshair->setIcon(icon4);
        actionZoomPan = new QAction(MainImageWindow);
        actionZoomPan->setObjectName(QStringLiteral("actionZoomPan"));
        actionZoomPan->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/zoom.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomPan->setIcon(icon5);
        actionPolygon = new QAction(MainImageWindow);
        actionPolygon->setObjectName(QStringLiteral("actionPolygon"));
        actionPolygon->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/poly.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionPolygon->setIcon(icon6);
        actionPaintbrush = new QAction(MainImageWindow);
        actionPaintbrush->setObjectName(QStringLiteral("actionPaintbrush"));
        actionPaintbrush->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/paintbrush.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaintbrush->setIcon(icon7);
        actionSnake = new QAction(MainImageWindow);
        actionSnake->setObjectName(QStringLiteral("actionSnake"));
        actionSnake->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/root/snake.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnake->setIcon(icon8);
        actionSaveSegmentation = new QAction(MainImageWindow);
        actionSaveSegmentation->setObjectName(QStringLiteral("actionSaveSegmentation"));
        action3DTrackball = new QAction(MainImageWindow);
        action3DTrackball->setObjectName(QStringLiteral("action3DTrackball"));
        action3DTrackball->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/root/rotate3d.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action3DTrackball->setIcon(icon9);
        action3DCrosshair = new QAction(MainImageWindow);
        action3DCrosshair->setObjectName(QStringLiteral("action3DCrosshair"));
        action3DCrosshair->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/root/crosshair3D.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action3DCrosshair->setIcon(icon10);
        action3DScalpel = new QAction(MainImageWindow);
        action3DScalpel->setObjectName(QStringLiteral("action3DScalpel"));
        action3DScalpel->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/root/scalpel.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action3DScalpel->setIcon(icon11);
        action3DSpray = new QAction(MainImageWindow);
        action3DSpray->setObjectName(QStringLiteral("action3DSpray"));
        action3DSpray->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/root/spray.gif"), QSize(), QIcon::Normal, QIcon::Off);
        action3DSpray->setIcon(icon12);
        actionOverlayVisibilityToggleAll = new QAction(MainImageWindow);
        actionOverlayVisibilityToggleAll->setObjectName(QStringLiteral("actionOverlayVisibilityToggleAll"));
        actionOverlayVisibilityIncreaseAll = new QAction(MainImageWindow);
        actionOverlayVisibilityIncreaseAll->setObjectName(QStringLiteral("actionOverlayVisibilityIncreaseAll"));
        actionOverlayVisibilityDecreaseAll = new QAction(MainImageWindow);
        actionOverlayVisibilityDecreaseAll->setObjectName(QStringLiteral("actionOverlayVisibilityDecreaseAll"));
        actionAbout = new QAction(MainImageWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionPreferences = new QAction(MainImageWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionSaveWorkspace = new QAction(MainImageWindow);
        actionSaveWorkspace->setObjectName(QStringLiteral("actionSaveWorkspace"));
        actionOpenWorkspace = new QAction(MainImageWindow);
        actionOpenWorkspace->setObjectName(QStringLiteral("actionOpenWorkspace"));
        actionSaveWorkspaceAs = new QAction(MainImageWindow);
        actionSaveWorkspaceAs->setObjectName(QStringLiteral("actionSaveWorkspaceAs"));
        actionRecentWorkspace_5 = new QAction(MainImageWindow);
        actionRecentWorkspace_5->setObjectName(QStringLiteral("actionRecentWorkspace_5"));
        actionRecentWorkspace1 = new QAction(MainImageWindow);
        actionRecentWorkspace1->setObjectName(QStringLiteral("actionRecentWorkspace1"));
        actionRecentWorkspace2 = new QAction(MainImageWindow);
        actionRecentWorkspace2->setObjectName(QStringLiteral("actionRecentWorkspace2"));
        actionRecentWorkspace3 = new QAction(MainImageWindow);
        actionRecentWorkspace3->setObjectName(QStringLiteral("actionRecentWorkspace3"));
        actionRecentWorkspace4 = new QAction(MainImageWindow);
        actionRecentWorkspace4->setObjectName(QStringLiteral("actionRecentWorkspace4"));
        actionRecentWorkspace5 = new QAction(MainImageWindow);
        actionRecentWorkspace5->setObjectName(QStringLiteral("actionRecentWorkspace5"));
        actionOpen = new QAction(MainImageWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainImageWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionReset = new QAction(MainImageWindow);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionSSSeriesAxial = new QAction(MainImageWindow);
        actionSSSeriesAxial->setObjectName(QStringLiteral("actionSSSeriesAxial"));
        actionSSSeriesCoronal = new QAction(MainImageWindow);
        actionSSSeriesCoronal->setObjectName(QStringLiteral("actionSSSeriesCoronal"));
        actionSSSeriesSagittal = new QAction(MainImageWindow);
        actionSSSeriesSagittal->setObjectName(QStringLiteral("actionSSSeriesSagittal"));
        actionForegroundLabelPrev = new QAction(MainImageWindow);
        actionForegroundLabelPrev->setObjectName(QStringLiteral("actionForegroundLabelPrev"));
        actionForegroundLabelNext = new QAction(MainImageWindow);
        actionForegroundLabelNext->setObjectName(QStringLiteral("actionForegroundLabelNext"));
        actionBackgroundLabelPrev = new QAction(MainImageWindow);
        actionBackgroundLabelPrev->setObjectName(QStringLiteral("actionBackgroundLabelPrev"));
        actionBackgroundLabelNext = new QAction(MainImageWindow);
        actionBackgroundLabelNext->setObjectName(QStringLiteral("actionBackgroundLabelNext"));
        actionToggle_All_Annotations = new QAction(MainImageWindow);
        actionToggle_All_Annotations->setObjectName(QStringLiteral("actionToggle_All_Annotations"));
        actionToggle_Crosshair = new QAction(MainImageWindow);
        actionToggle_Crosshair->setObjectName(QStringLiteral("actionToggle_Crosshair"));
        actionAnnotation_Preferences = new QAction(MainImageWindow);
        actionAnnotation_Preferences->setObjectName(QStringLiteral("actionAnnotation_Preferences"));
        actionAutoContrastGlobal = new QAction(MainImageWindow);
        actionAutoContrastGlobal->setObjectName(QStringLiteral("actionAutoContrastGlobal"));
        actionResetContrastGlobal = new QAction(MainImageWindow);
        actionResetContrastGlobal->setObjectName(QStringLiteral("actionResetContrastGlobal"));
        actionHa = new QAction(MainImageWindow);
        actionHa->setObjectName(QStringLiteral("actionHa"));
        actionZoom_to_100 = new QAction(MainImageWindow);
        actionZoom_to_100->setObjectName(QStringLiteral("actionZoom_to_100"));
        actionZoom_to_200 = new QAction(MainImageWindow);
        actionZoom_to_200->setObjectName(QStringLiteral("actionZoom_to_200"));
        actionZoom_to_400 = new QAction(MainImageWindow);
        actionZoom_to_400->setObjectName(QStringLiteral("actionZoom_to_400"));
        actionCheck_for_Updates = new QAction(MainImageWindow);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        actionDocumentation_Home = new QAction(MainImageWindow);
        actionDocumentation_Home->setObjectName(QStringLiteral("actionDocumentation_Home"));
        actionNew_ITK_SNAP_Window = new QAction(MainImageWindow);
        actionNew_ITK_SNAP_Window->setObjectName(QStringLiteral("actionNew_ITK_SNAP_Window"));
        actionCoregister_Overlay = new QAction(MainImageWindow);
        actionCoregister_Overlay->setObjectName(QStringLiteral("actionCoregister_Overlay"));
        actionRecentOverlay_1 = new QAction(MainImageWindow);
        actionRecentOverlay_1->setObjectName(QStringLiteral("actionRecentOverlay_1"));
        actionRecentOverlay_2 = new QAction(MainImageWindow);
        actionRecentOverlay_2->setObjectName(QStringLiteral("actionRecentOverlay_2"));
        actionRecentOverlay_3 = new QAction(MainImageWindow);
        actionRecentOverlay_3->setObjectName(QStringLiteral("actionRecentOverlay_3"));
        actionRecentOverlay_4 = new QAction(MainImageWindow);
        actionRecentOverlay_4->setObjectName(QStringLiteral("actionRecentOverlay_4"));
        actionRecentOverlay_5 = new QAction(MainImageWindow);
        actionRecentOverlay_5->setObjectName(QStringLiteral("actionRecentOverlay_5"));
        actionAnnotation = new QAction(MainImageWindow);
        actionAnnotation->setObjectName(QStringLiteral("actionAnnotation"));
        actionAnnotation->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/root/annotation_28.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnotation->setIcon(icon13);
        actionToggleLayerLayout = new QAction(MainImageWindow);
        actionToggleLayerLayout->setObjectName(QStringLiteral("actionToggleLayerLayout"));
        actionActivateNextLayer = new QAction(MainImageWindow);
        actionActivateNextLayer->setObjectName(QStringLiteral("actionActivateNextLayer"));
        actionActivatePreviousLayer = new QAction(MainImageWindow);
        actionActivatePreviousLayer->setObjectName(QStringLiteral("actionActivatePreviousLayer"));
        actionInterpolate_Labels = new QAction(MainImageWindow);
        actionInterpolate_Labels->setObjectName(QStringLiteral("actionInterpolate_Labels"));
        actionRegistration = new QAction(MainImageWindow);
        actionRegistration->setObjectName(QStringLiteral("actionRegistration"));
        actionClose_Window = new QAction(MainImageWindow);
        actionClose_Window->setObjectName(QStringLiteral("actionClose_Window"));
        actionDicomDummy = new QAction(MainImageWindow);
        actionDicomDummy->setObjectName(QStringLiteral("actionDicomDummy"));
        actionMainControlPanel = new QAction(MainImageWindow);
        actionMainControlPanel->setObjectName(QStringLiteral("actionMainControlPanel"));
        actionMainControlPanel->setCheckable(true);
        actionRecentSeg_1 = new QAction(MainImageWindow);
        actionRecentSeg_1->setObjectName(QStringLiteral("actionRecentSeg_1"));
        actionRecentSeg_2 = new QAction(MainImageWindow);
        actionRecentSeg_2->setObjectName(QStringLiteral("actionRecentSeg_2"));
        actionRecentSeg_3 = new QAction(MainImageWindow);
        actionRecentSeg_3->setObjectName(QStringLiteral("actionRecentSeg_3"));
        actionRecentSeg_4 = new QAction(MainImageWindow);
        actionRecentSeg_4->setObjectName(QStringLiteral("actionRecentSeg_4"));
        actionRecentSeg_5 = new QAction(MainImageWindow);
        actionRecentSeg_5->setObjectName(QStringLiteral("actionRecentSeg_5"));
        actionActivateNextSegmentationLayer = new QAction(MainImageWindow);
        actionActivateNextSegmentationLayer->setObjectName(QStringLiteral("actionActivateNextSegmentationLayer"));
        actionActivatePreviousSegmentationLayer = new QAction(MainImageWindow);
        actionActivatePreviousSegmentationLayer->setObjectName(QStringLiteral("actionActivatePreviousSegmentationLayer"));
        actionAddSegmentation_Open = new QAction(MainImageWindow);
        actionAddSegmentation_Open->setObjectName(QStringLiteral("actionAddSegmentation_Open"));
        actionAddSegmentation_New = new QAction(MainImageWindow);
        actionAddSegmentation_New->setObjectName(QStringLiteral("actionAddSegmentation_New"));
        actionRecentAddSeg_1 = new QAction(MainImageWindow);
        actionRecentAddSeg_1->setObjectName(QStringLiteral("actionRecentAddSeg_1"));
        actionRecentAddSeg_2 = new QAction(MainImageWindow);
        actionRecentAddSeg_2->setObjectName(QStringLiteral("actionRecentAddSeg_2"));
        actionRecentAddSeg_3 = new QAction(MainImageWindow);
        actionRecentAddSeg_3->setObjectName(QStringLiteral("actionRecentAddSeg_3"));
        actionRecentAddSeg_4 = new QAction(MainImageWindow);
        actionRecentAddSeg_4->setObjectName(QStringLiteral("actionRecentAddSeg_4"));
        actionRecentAddSeg_5 = new QAction(MainImageWindow);
        actionRecentAddSeg_5->setObjectName(QStringLiteral("actionRecentAddSeg_5"));
        actionClearActive = new QAction(MainImageWindow);
        actionClearActive->setObjectName(QStringLiteral("actionClearActive"));
        actionInstallCLI = new QAction(MainImageWindow);
        actionInstallCLI->setObjectName(QStringLiteral("actionInstallCLI"));
        actionDSS = new QAction(MainImageWindow);
        actionDSS->setObjectName(QStringLiteral("actionDSS"));
        actionNext_Display_Layout = new QAction(MainImageWindow);
        actionNext_Display_Layout->setObjectName(QStringLiteral("actionNext_Display_Layout"));
        actionContrast40_80 = new QAction(MainImageWindow);
        actionContrast40_80->setObjectName(QStringLiteral("actionContrast40_80"));
        actionContrast40_40 = new QAction(MainImageWindow);
        actionContrast40_40->setObjectName(QStringLiteral("actionContrast40_40"));
        actionContrast130_2400 = new QAction(MainImageWindow);
        actionContrast130_2400->setObjectName(QStringLiteral("actionContrast130_2400"));
        actionContrast40_400 = new QAction(MainImageWindow);
        actionContrast40_400->setObjectName(QStringLiteral("actionContrast40_400"));
        centralwidget = new QWidget(MainImageWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackMain = new QStackedWidget(centralwidget);
        stackMain->setObjectName(QStringLiteral("stackMain"));
        pageMain = new QWidget();
        pageMain->setObjectName(QStringLiteral("pageMain"));
        gridLayout_2 = new QGridLayout(pageMain);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 4, 0, 4);
        panel0 = new SliceViewPanel(pageMain);
        panel0->setObjectName(QStringLiteral("panel0"));

        gridLayout_2->addWidget(panel0, 0, 0, 1, 1);

        panel1 = new SliceViewPanel(pageMain);
        panel1->setObjectName(QStringLiteral("panel1"));

        gridLayout_2->addWidget(panel1, 0, 1, 1, 1);

        panel3D = new ViewPanel3D(pageMain);
        panel3D->setObjectName(QStringLiteral("panel3D"));
        panel3D->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(panel3D, 1, 0, 1, 1);

        panel2 = new SliceViewPanel(pageMain);
        panel2->setObjectName(QStringLiteral("panel2"));

        gridLayout_2->addWidget(panel2, 1, 1, 1, 1);

        stackMain->addWidget(pageMain);
        pageSplash = new QWidget();
        pageSplash->setObjectName(QStringLiteral("pageSplash"));
        verticalLayout_2 = new QVBoxLayout(pageSplash);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabSplash = new QTabWidget(pageSplash);
        tabSplash->setObjectName(QStringLiteral("tabSplash"));
        tabSplash->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"	margin-top: 0px;\n"
"	border:none;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"	border-top: 1px solid black;\n"
"	left:20px;\n"
"}\n"
"\n"
"QTabBar:tab {\n"
"	border:none;\n"
"	margin-left: 20px;\n"
"	margin-top: 6px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	min-width: 132px;\n"
"	color: rgb(102, 102, 102);\n"
"}\n"
"\n"
"QTabBar:tab:selected {\n"
"	font-weight:bold;\n"
"	text-decoration: underline;\n"
"}\n"
"\n"
"QTabBar:tab:hover {\n"
"	text-decoration: underline;\n"
"}"));
        tabSplash->setTabPosition(QTabWidget::North);
        tabGettingStarted = new QWidget();
        tabGettingStarted->setObjectName(QStringLiteral("tabGettingStarted"));
        verticalLayout_4 = new QVBoxLayout(tabGettingStarted);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(12, 6, 12, 4);
        frame = new QFrame(tabGettingStarted);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame#frame {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.537, y2:0.0340909, stop:0 rgba(210, 230, 230, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTextBrowser {\n"
"	background-color: rgba(1,1,1,0);\n"
"    border: none;\n"
"}\n"
"	\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        brsGettingStarted = new QTextBrowser(frame);
        brsGettingStarted->setObjectName(QStringLiteral("brsGettingStarted"));
        brsGettingStarted->setAutoFillBackground(false);
        brsGettingStarted->setStyleSheet(QStringLiteral("padding: -16px;"));
        brsGettingStarted->setFrameShape(QFrame::NoFrame);
        brsGettingStarted->setFrameShadow(QFrame::Plain);
        brsGettingStarted->setLineWidth(0);
        brsGettingStarted->setOpenExternalLinks(true);

        gridLayout_3->addWidget(brsGettingStarted, 2, 0, 1, 2);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QLatin1String("font-size:16px;\n"
"font-weight:bold;\n"
"color:rgb(103, 103, 103);\n"
""));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1, Qt::AlignBottom);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/root/logo_square_shadow.png")));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1, Qt::AlignRight);


        verticalLayout_4->addWidget(frame);

        tabSplash->addTab(tabGettingStarted, QString());
        tabRecent = new QWidget();
        tabRecent->setObjectName(QStringLiteral("tabRecent"));
        verticalLayout_3 = new QVBoxLayout(tabRecent);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(12, 6, 12, 4);
        panelRecentImages = new RecentHistoryItemsView(tabRecent);
        panelRecentImages->setObjectName(QStringLiteral("panelRecentImages"));

        verticalLayout_3->addWidget(panelRecentImages);

        tabSplash->addTab(tabRecent, QString());
        tabRecentWorkspaces = new QWidget();
        tabRecentWorkspaces->setObjectName(QStringLiteral("tabRecentWorkspaces"));
        verticalLayout_5 = new QVBoxLayout(tabRecentWorkspaces);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(12, 6, 12, 4);
        panelRecentWorkspaces = new RecentHistoryItemsView(tabRecentWorkspaces);
        panelRecentWorkspaces->setObjectName(QStringLiteral("panelRecentWorkspaces"));

        verticalLayout_5->addWidget(panelRecentWorkspaces);

        tabSplash->addTab(tabRecentWorkspaces, QString());

        verticalLayout_2->addWidget(tabSplash);

        widget = new QWidget(pageSplash);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLoadMain = new QPushButton(widget);
        btnLoadMain->setObjectName(QStringLiteral("btnLoadMain"));

        horizontalLayout->addWidget(btnLoadMain);

        btnLoadWorkspace = new QPushButton(widget);
        btnLoadWorkspace->setObjectName(QStringLiteral("btnLoadWorkspace"));

        horizontalLayout->addWidget(btnLoadWorkspace);


        verticalLayout_2->addWidget(widget);

        stackMain->addWidget(pageSplash);

        verticalLayout->addWidget(stackMain);

        MainImageWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainImageWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 907, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecent_Images = new QMenu(menuFile);
        menuRecent_Images->setObjectName(QStringLiteral("menuRecent_Images"));
        menuRecent_Overlays = new QMenu(menuFile);
        menuRecent_Overlays->setObjectName(QStringLiteral("menuRecent_Overlays"));
        menuSave_Image = new QMenu(menuFile);
        menuSave_Image->setObjectName(QStringLiteral("menuSave_Image"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuImage_Slice = new QMenu(menuExport);
        menuImage_Slice->setObjectName(QStringLiteral("menuImage_Slice"));
        menuScreenshot = new QMenu(menuExport);
        menuScreenshot->setObjectName(QStringLiteral("menuScreenshot"));
        menuScreenshot_Series = new QMenu(menuExport);
        menuScreenshot_Series->setObjectName(QStringLiteral("menuScreenshot_Series"));
        menuAddAnotherDicomImage = new QMenu(menuFile);
        menuAddAnotherDicomImage->setObjectName(QStringLiteral("menuAddAnotherDicomImage"));
        menuSegmentation = new QMenu(menubar);
        menuSegmentation->setObjectName(QStringLiteral("menuSegmentation"));
        menuAppearance = new QMenu(menuSegmentation);
        menuAppearance->setObjectName(QStringLiteral("menuAppearance"));
        menuRecent_Segmentations = new QMenu(menuSegmentation);
        menuRecent_Segmentations->setObjectName(QStringLiteral("menuRecent_Segmentations"));
        menuAddSegmentation = new QMenu(menuSegmentation);
        menuAddSegmentation->setObjectName(QStringLiteral("menuAddSegmentation"));
        menuAddSegmentation_Recent = new QMenu(menuAddSegmentation);
        menuAddSegmentation_Recent->setObjectName(QStringLiteral("menuAddSegmentation_Recent"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuActive_Main_Tool = new QMenu(menuTools);
        menuActive_Main_Tool->setObjectName(QStringLiteral("menuActive_Main_Tool"));
        menuActive_3D_Tool = new QMenu(menuTools);
        menuActive_3D_Tool->setObjectName(QStringLiteral("menuActive_3D_Tool"));
        menuContrast = new QMenu(menuTools);
        menuContrast->setObjectName(QStringLiteral("menuContrast"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuForeground_Label = new QMenu(menuEdit);
        menuForeground_Label->setObjectName(QStringLiteral("menuForeground_Label"));
        menuBackground_Label = new QMenu(menuEdit);
        menuBackground_Label->setObjectName(QStringLiteral("menuBackground_Label"));
        menuSlice_Annotations = new QMenu(menuEdit);
        menuSlice_Annotations->setObjectName(QStringLiteral("menuSlice_Annotations"));
        menuZoom = new QMenu(menuEdit);
        menuZoom->setObjectName(QStringLiteral("menuZoom"));
        menuLayers = new QMenu(menuEdit);
        menuLayers->setObjectName(QStringLiteral("menuLayers"));
        menuViews = new QMenu(menuEdit);
        menuViews->setObjectName(QStringLiteral("menuViews"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menuRecentWorkspaces = new QMenu(menuProject);
        menuRecentWorkspaces->setObjectName(QStringLiteral("menuRecentWorkspaces"));
        menuAdjust_Contrast = new QMenu(menubar);
        menuAdjust_Contrast->setObjectName(QStringLiteral("menuAdjust_Contrast"));
        MainImageWindow->setMenuBar(menubar);
        QWidget::setTabOrder(brsGettingStarted, btnLoadMain);
        QWidget::setTabOrder(btnLoadMain, btnLoadWorkspace);
        QWidget::setTabOrder(btnLoadWorkspace, tabSplash);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSegmentation->menuAction());
        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuAdjust_Contrast->menuAction());
        menuFile->addAction(actionOpenMain);
        menuFile->addAction(menuRecent_Images->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuAddAnotherDicomImage->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionAdd_Overlay);
        menuFile->addAction(menuRecent_Overlays->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuSave_Image->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuExport->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClose_Window);
        menuFile->addAction(actionUnload_Last_Overlay);
        menuFile->addAction(actionUnload_All);
        menuFile->addSeparator();
        menuFile->addAction(actionNew_ITK_SNAP_Window);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuRecent_Images->addAction(actionRecent_1);
        menuRecent_Images->addAction(actionRecent_2);
        menuRecent_Images->addAction(actionRecent_3);
        menuRecent_Images->addAction(actionRecent_4);
        menuRecent_Images->addAction(actionRecent_5);
        menuRecent_Overlays->addAction(actionRecentOverlay_1);
        menuRecent_Overlays->addAction(actionRecentOverlay_2);
        menuRecent_Overlays->addAction(actionRecentOverlay_3);
        menuRecent_Overlays->addAction(actionRecentOverlay_4);
        menuRecent_Overlays->addAction(actionRecentOverlay_5);
        menuSave_Image->addAction(actionSaveMain);
        menuSave_Image->addSeparator();
        menuSave_Image->addAction(actionSaveSpeed);
        menuSave_Image->addAction(actionSaveLevelSet);
        menuSave_Image->addAction(actionSaveMainROI);
        menuExport->addAction(menuImage_Slice->menuAction());
        menuExport->addAction(menuScreenshot->menuAction());
        menuExport->addAction(menuScreenshot_Series->menuAction());
        menuImage_Slice->addAction(actionExportAxial);
        menuImage_Slice->addAction(actionExportCoronal);
        menuImage_Slice->addAction(actionExportSagittal);
        menuScreenshot->addAction(actionSSAxial);
        menuScreenshot->addAction(actionSSCoronal);
        menuScreenshot->addAction(actionSSSagittal);
        menuScreenshot_Series->addAction(actionSSSeriesAxial);
        menuScreenshot_Series->addAction(actionSSSeriesCoronal);
        menuScreenshot_Series->addAction(actionSSSeriesSagittal);
        menuAddAnotherDicomImage->addAction(actionDicomDummy);
        menuSegmentation->addAction(actionLoad_from_Image);
        menuSegmentation->addAction(menuRecent_Segmentations->menuAction());
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(menuAddSegmentation->menuAction());
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionSaveSegmentation);
        menuSegmentation->addAction(actionSaveSegmentationAs);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionClear);
        menuSegmentation->addAction(actionClearActive);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionSave_as_Mesh);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionLoadLabels);
        menuSegmentation->addAction(actionSaveLabels);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionLabel_Editor);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionVolumesAndStatistics);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(menuAppearance->menuAction());
        menuAppearance->addAction(actionSegmentationToggle);
        menuAppearance->addSeparator();
        menuAppearance->addAction(actionSegmentationIncreaseOpacity);
        menuAppearance->addAction(actionSegmentationDecreaseOpacity);
        menuRecent_Segmentations->addAction(actionRecentSeg_1);
        menuRecent_Segmentations->addAction(actionRecentSeg_2);
        menuRecent_Segmentations->addAction(actionRecentSeg_3);
        menuRecent_Segmentations->addAction(actionRecentSeg_4);
        menuRecent_Segmentations->addAction(actionRecentSeg_5);
        menuAddSegmentation->addAction(actionAddSegmentation_New);
        menuAddSegmentation->addSeparator();
        menuAddSegmentation->addAction(actionAddSegmentation_Open);
        menuAddSegmentation->addAction(menuAddSegmentation_Recent->menuAction());
        menuAddSegmentation_Recent->addAction(actionRecentAddSeg_1);
        menuAddSegmentation_Recent->addAction(actionRecentAddSeg_2);
        menuAddSegmentation_Recent->addAction(actionRecentAddSeg_3);
        menuAddSegmentation_Recent->addAction(actionRecentAddSeg_4);
        menuAddSegmentation_Recent->addAction(actionRecentAddSeg_5);
        menuTools->addSeparator();
        menuTools->addAction(actionLayerInspector);
        menuTools->addSeparator();
        menuTools->addAction(menuContrast->menuAction());
        menuTools->addAction(actionColor_Map_Editor);
        menuTools->addAction(actionImage_Information);
        menuTools->addSeparator();
        menuTools->addAction(menuActive_Main_Tool->menuAction());
        menuTools->addAction(menuActive_3D_Tool->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionReorient_Image);
        menuTools->addAction(actionRegistration);
        menuTools->addSeparator();
        menuTools->addAction(actionDSS);
        menuTools->addSeparator();
        menuTools->addAction(actionInterpolate_Labels);
        menuTools->addSeparator();
        menuTools->addAction(actionPreferences);
        menuActive_Main_Tool->addAction(actionCrosshair);
        menuActive_Main_Tool->addAction(actionZoomPan);
        menuActive_Main_Tool->addAction(actionPolygon);
        menuActive_Main_Tool->addAction(actionPaintbrush);
        menuActive_Main_Tool->addAction(actionSnake);
        menuActive_Main_Tool->addAction(actionAnnotation);
        menuActive_3D_Tool->addAction(action3DTrackball);
        menuActive_3D_Tool->addAction(action3DCrosshair);
        menuActive_3D_Tool->addAction(action3DScalpel);
        menuActive_3D_Tool->addAction(action3DSpray);
        menuContrast->addAction(actionImage_Contrast);
        menuContrast->addSeparator();
        menuContrast->addAction(actionAutoContrastGlobal);
        menuContrast->addAction(actionResetContrastGlobal);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(menuForeground_Label->menuAction());
        menuEdit->addAction(menuBackground_Label->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(menuZoom->menuAction());
        menuEdit->addAction(menuLayers->menuAction());
        menuEdit->addAction(menuSlice_Annotations->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(menuViews->menuAction());
        menuForeground_Label->addAction(actionForegroundLabelPrev);
        menuForeground_Label->addAction(actionForegroundLabelNext);
        menuBackground_Label->addAction(actionBackgroundLabelPrev);
        menuBackground_Label->addAction(actionBackgroundLabelNext);
        menuSlice_Annotations->addAction(actionToggle_All_Annotations);
        menuSlice_Annotations->addAction(actionToggle_Crosshair);
        menuSlice_Annotations->addSeparator();
        menuSlice_Annotations->addAction(actionAnnotation_Preferences);
        menuZoom->addAction(actionZoomToFitInAllViews);
        menuZoom->addSeparator();
        menuZoom->addAction(actionZoom_to_100);
        menuZoom->addAction(actionZoom_to_200);
        menuZoom->addAction(actionZoom_to_400);
        menuZoom->addSeparator();
        menuZoom->addAction(actionCenter_on_Cursor);
        menuLayers->addAction(actionToggleLayerLayout);
        menuLayers->addSeparator();
        menuLayers->addAction(actionActivateNextLayer);
        menuLayers->addAction(actionActivatePreviousLayer);
        menuLayers->addSeparator();
        menuLayers->addAction(actionActivateNextSegmentationLayer);
        menuLayers->addAction(actionActivatePreviousSegmentationLayer);
        menuLayers->addSeparator();
        menuLayers->addAction(actionOverlayVisibilityToggleAll);
        menuLayers->addAction(actionOverlayVisibilityIncreaseAll);
        menuLayers->addAction(actionOverlayVisibilityDecreaseAll);
        menuViews->addAction(actionMainControlPanel);
        menuViews->addSeparator();
        menuViews->addAction(actionNext_Display_Layout);
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuHelp->addAction(actionInstallCLI);
        menuHelp->addAction(actionCheck_for_Updates);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDocumentation_Home);
        menuProject->addAction(actionOpenWorkspace);
        menuProject->addAction(menuRecentWorkspaces->menuAction());
        menuProject->addSeparator();
        menuProject->addAction(actionSaveWorkspace);
        menuProject->addAction(actionSaveWorkspaceAs);
        menuRecentWorkspaces->addAction(actionRecentWorkspace1);
        menuRecentWorkspaces->addAction(actionRecentWorkspace2);
        menuRecentWorkspaces->addAction(actionRecentWorkspace3);
        menuRecentWorkspaces->addAction(actionRecentWorkspace4);
        menuRecentWorkspaces->addAction(actionRecentWorkspace5);
        menuAdjust_Contrast->addAction(actionContrast40_80);
        menuAdjust_Contrast->addAction(actionContrast40_40);
        menuAdjust_Contrast->addAction(actionContrast130_2400);
        menuAdjust_Contrast->addAction(actionContrast40_400);

        retranslateUi(MainImageWindow);

        stackMain->setCurrentIndex(1);
        tabSplash->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainImageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainImageWindow)
    {
        MainImageWindow->setWindowTitle(QApplication::translate("MainImageWindow", "MainWindow", 0));
        actionOpenMain->setText(QApplication::translate("MainImageWindow", "Open Main Image ...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenMain->setToolTip(QApplication::translate("MainImageWindow", "Open the main anatomy image that you wish to display or segment", 0));
#endif // QT_NO_TOOLTIP
        actionOpenMain->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+G", 0));
        actionQuit->setText(QApplication::translate("MainImageWindow", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Q", 0));
        actionLoad_from_Image->setText(QApplication::translate("MainImageWindow", "Open Segmentation ...", 0));
#ifndef QT_NO_TOOLTIP
        actionLoad_from_Image->setToolTip(QApplication::translate("MainImageWindow", "Load the segmentation image from disk", 0));
#endif // QT_NO_TOOLTIP
        actionLoad_from_Image->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+O", 0));
        actionSaveMain->setText(QApplication::translate("MainImageWindow", "Main Image ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveMain->setToolTip(QApplication::translate("MainImageWindow", "Main Image", 0));
#endif // QT_NO_TOOLTIP
        actionSaveSpeed->setText(QApplication::translate("MainImageWindow", "Speed Image ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveSpeed->setToolTip(QApplication::translate("MainImageWindow", "Save the Speed Image in Active Contour Mode", 0));
#endif // QT_NO_TOOLTIP
        actionSaveLevelSet->setText(QApplication::translate("MainImageWindow", "Level Set Image ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveLevelSet->setToolTip(QApplication::translate("MainImageWindow", "Save level set image in active snake mode", 0));
#endif // QT_NO_TOOLTIP
        actionSaveMainROI->setText(QApplication::translate("MainImageWindow", "Main Image (Region of Interest) ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveMainROI->setToolTip(QApplication::translate("MainImageWindow", "Save the region of interest selected for active contour segmentation", 0));
#endif // QT_NO_TOOLTIP
        actionRecent_1->setText(QApplication::translate("MainImageWindow", "Recent 1", 0));
        actionRecent_1->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+1", 0));
        actionRecent_2->setText(QApplication::translate("MainImageWindow", "Recent 2", 0));
        actionRecent_2->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+2", 0));
        actionRecent_3->setText(QApplication::translate("MainImageWindow", "Recent 3", 0));
        actionRecent_3->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+3", 0));
        actionRecent_4->setText(QApplication::translate("MainImageWindow", "Recent 4", 0));
        actionRecent_4->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+4", 0));
        actionRecent_5->setText(QApplication::translate("MainImageWindow", "Recent 5", 0));
        actionRecent_5->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+5", 0));
        actionExportAxial->setText(QApplication::translate("MainImageWindow", "Axial", 0));
#ifndef QT_NO_TOOLTIP
        actionExportAxial->setToolTip(QApplication::translate("MainImageWindow", "Export axial image slice as an image", 0));
#endif // QT_NO_TOOLTIP
        actionExportCoronal->setText(QApplication::translate("MainImageWindow", "Coronal", 0));
#ifndef QT_NO_TOOLTIP
        actionExportCoronal->setToolTip(QApplication::translate("MainImageWindow", "Export coronal image slice as an image", 0));
#endif // QT_NO_TOOLTIP
        actionExportSagittal->setText(QApplication::translate("MainImageWindow", "Sagittal", 0));
#ifndef QT_NO_TOOLTIP
        actionExportSagittal->setToolTip(QApplication::translate("MainImageWindow", "Export sagittal image slice as an image", 0));
#endif // QT_NO_TOOLTIP
        actionUnload_All->setText(QApplication::translate("MainImageWindow", "Close All Images", 0));
        actionUnload_All->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+W", 0));
        actionClear->setText(QApplication::translate("MainImageWindow", "Unload Segmentation", 0));
        actionAdd_Overlay->setText(QApplication::translate("MainImageWindow", "Add Another Image ...", 0));
#ifndef QT_NO_TOOLTIP
        actionAdd_Overlay->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p>Load an image to display alongside the main image. The dimensions of this image must match those of the main image. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAdd_Overlay->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+G", 0));
        actionImage_Contrast->setText(QApplication::translate("MainImageWindow", "Contrast Adjustment...", 0));
#ifndef QT_NO_TOOLTIP
        actionImage_Contrast->setToolTip(QApplication::translate("MainImageWindow", "Adjust image contrast", 0));
#endif // QT_NO_TOOLTIP
        actionLabel_Editor->setText(QApplication::translate("MainImageWindow", "Label Editor ...", 0));
#ifndef QT_NO_TOOLTIP
        actionLabel_Editor->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Label Editor (\342\214\230L)</span></p><p>Opens the label editor, where you can edit segmentation labels.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionLabel_Editor->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+L", 0));
        actionReorient_Image->setText(QApplication::translate("MainImageWindow", "Reorient Image...", 0));
        actionZoomToFitInAllViews->setText(QApplication::translate("MainImageWindow", "Zoom to Fit in All Views", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomToFitInAllViews->setToolTip(QApplication::translate("MainImageWindow", "Reset the zoom factor in all views to fit", 0));
#endif // QT_NO_TOOLTIP
        actionZoomToFitInAllViews->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+F", 0));
        actionCenter_on_Cursor->setText(QApplication::translate("MainImageWindow", "Center All Views on Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionCenter_on_Cursor->setToolTip(QApplication::translate("MainImageWindow", "Center each slice view on the cursor position", 0));
#endif // QT_NO_TOOLTIP
        actionCenter_on_Cursor->setShortcut(QApplication::translate("MainImageWindow", "C", 0));
        actionUndo->setText(QApplication::translate("MainImageWindow", "Undo", 0));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Undo (\342\214\230Z)</span></p><p>Undo the last modification to the segmentation image.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainImageWindow", "Redo", 0));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Redo (\342\207\247\342\214\230Z)</span></p><p>Redo the last modification to the segmentation image.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+Z", 0));
        actionRecentWorkspace_1->setText(QApplication::translate("MainImageWindow", "Recent 1", 0));
        actionRecentWorkspace_2->setText(QApplication::translate("MainImageWindow", "Recent 2", 0));
        actionRecentWorkspace_3->setText(QApplication::translate("MainImageWindow", "Recent 3", 0));
        actionRecentWorkspace_4->setText(QApplication::translate("MainImageWindow", "Recent 4", 0));
        actionSSAxial->setText(QApplication::translate("MainImageWindow", "Axial", 0));
#ifndef QT_NO_TOOLTIP
        actionSSAxial->setToolTip(QApplication::translate("MainImageWindow", "Export a screenshot of the axial view as an image", 0));
#endif // QT_NO_TOOLTIP
        actionSSCoronal->setText(QApplication::translate("MainImageWindow", "Coronal", 0));
#ifndef QT_NO_TOOLTIP
        actionSSCoronal->setToolTip(QApplication::translate("MainImageWindow", "Export a screenshot of the axial view as an image", 0));
#endif // QT_NO_TOOLTIP
        actionSSSagittal->setText(QApplication::translate("MainImageWindow", "Sagittal", 0));
#ifndef QT_NO_TOOLTIP
        actionSSSagittal->setToolTip(QApplication::translate("MainImageWindow", "Export a screenshot of the axial view as an image", 0));
#endif // QT_NO_TOOLTIP
        actionSaveSegmentationAs->setText(QApplication::translate("MainImageWindow", "Save as...", 0));
        actionSave_as_Mesh->setText(QApplication::translate("MainImageWindow", "Export as Surface Mesh...", 0));
        actionLoadLabels->setText(QApplication::translate("MainImageWindow", "Import Label Descriptions...", 0));
        actionSaveLabels->setText(QApplication::translate("MainImageWindow", "Export Label Descriptions...", 0));
        actionVolumesAndStatistics->setText(QApplication::translate("MainImageWindow", "Volumes and Statistics...", 0));
        actionSegmentationToggle->setText(QApplication::translate("MainImageWindow", "Toggle Visibility", 0));
        actionSegmentationToggle->setShortcut(QApplication::translate("MainImageWindow", "S", 0));
        actionSegmentationIncreaseOpacity->setText(QApplication::translate("MainImageWindow", "Increase Opacity", 0));
        actionSegmentationIncreaseOpacity->setShortcut(QApplication::translate("MainImageWindow", "D", 0));
        actionSegmentationDecreaseOpacity->setText(QApplication::translate("MainImageWindow", "Decrease Opacity", 0));
        actionSegmentationDecreaseOpacity->setShortcut(QApplication::translate("MainImageWindow", "A", 0));
        actionColor_Map_Editor->setText(QApplication::translate("MainImageWindow", "Color Map Editor...", 0));
        actionImage_Information->setText(QApplication::translate("MainImageWindow", "Image Information...", 0));
        actionUnload_Last_Overlay->setText(QApplication::translate("MainImageWindow", "Close Image XXX", 0));
#ifndef QT_NO_TOOLTIP
        actionUnload_Last_Overlay->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p>Unload the last image layer</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionUnload_Last_Overlay->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+W", 0));
        actionUnload_All_Overlays->setText(QApplication::translate("MainImageWindow", "Unload all additional image layers", 0));
#ifndef QT_NO_TOOLTIP
        actionUnload_All_Overlays->setToolTip(QApplication::translate("MainImageWindow", "Remove all overlays from the current workspace. Only the main image will remain open.", 0));
#endif // QT_NO_TOOLTIP
        actionLayerInspector->setText(QApplication::translate("MainImageWindow", "Layer Inspector...", 0));
#ifndef QT_NO_TOOLTIP
        actionLayerInspector->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Layer Inspector (\342\214\230I)</span></p><p>Opens the layer inspector window, which lists loaded image layers and can be used used to adjust their display properties.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionLayerInspector->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+I", 0));
        actionCrosshair->setText(QApplication::translate("MainImageWindow", "Crosshair Tool", 0));
#ifndef QT_NO_TOOLTIP
        actionCrosshair->setToolTip(QApplication::translate("MainImageWindow", "Crosshair Tool", 0));
#endif // QT_NO_TOOLTIP
        actionCrosshair->setShortcut(QApplication::translate("MainImageWindow", "1", 0));
        actionZoomPan->setText(QApplication::translate("MainImageWindow", "Zoom/Pan Mode", 0));
#ifndef QT_NO_TOOLTIP
        actionZoomPan->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Zoom/Pan Mode (2)</span></p><p>Use the mouse to zoom in and out of the image, and to pan around when the image is zoomed in. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to pan around the image</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_scrolling_1"
                        "6.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Scroll through image slices.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionZoomPan->setShortcut(QApplication::translate("MainImageWindow", "2", 0));
        actionPolygon->setText(QApplication::translate("MainImageWindow", "Polygon Drawing Mode", 0));
#ifndef QT_NO_TOOLTIP
        actionPolygon->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Polygon Drawing Mode (3)</span></p><p>Used to perform manual segmentation by drawing and filling polygons in the three orthogonal image slices. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Add points to the polygon and edit completed polygon</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src"
                        "=\":/root/icons8_mouse_scrolling_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Scroll through image slices.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionPolygon->setShortcut(QApplication::translate("MainImageWindow", "3", 0));
        actionPaintbrush->setText(QApplication::translate("MainImageWindow", "Paintbrush Mode", 0));
#ifndef QT_NO_TOOLTIP
        actionPaintbrush->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Paintbrush Mode (4)</span></p><p>Used to perform manual segmentation by drawing with a paintbrush-like tool. Different brush shapes are available, including an adaptive brush that adjusts itself to the image data. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Paint with foreground label</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Paint with background label</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-to"
                        "p:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_scrolling_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Scroll through image slices.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionPaintbrush->setShortcut(QApplication::translate("MainImageWindow", "4", 0));
        actionSnake->setText(QApplication::translate("MainImageWindow", "Active Contour Segmentation Mode", 0));
#ifndef QT_NO_TOOLTIP
        actionSnake->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Active Contour (aka &quot;Snake&quot;) Segmentation Mode (5)</span></p><p>Used to select the region of interest for semi-automatic active contour segmentation and start the semi-automatic segmentation wizard.<br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Adjust the boundaries of the region of interest</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out of the image</p></td></tr><tr><td style=\" padding-"
                        "left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_scrolling_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Scroll through image slices.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionSnake->setShortcut(QApplication::translate("MainImageWindow", "5", 0));
        actionSaveSegmentation->setText(QApplication::translate("MainImageWindow", "Save", 0));
        actionSaveSegmentation->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+S", 0));
        action3DTrackball->setText(QApplication::translate("MainImageWindow", "3D Trackball Tool", 0));
#ifndef QT_NO_TOOLTIP
        action3DTrackball->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">3D Trackball Mode</span></p><p>Used to manipulate the viewpoint in the 3D window. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to rotate the camera</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>\342\207\247<img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" pa"
                        "dding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to pan the camera.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        action3DCrosshair->setText(QApplication::translate("MainImageWindow", "3D Crosshair Tool", 0));
#ifndef QT_NO_TOOLTIP
        action3DCrosshair->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">3D Crosshair Mode</span></p><p>Used to place the linked 3D cursor on one of the surfaces rendered in the 3D window. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Click on a surface to place 3D cursor</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        action3DScalpel->setText(QApplication::translate("MainImageWindow", "3D Scalpel Tool", 0));
#ifndef QT_NO_TOOLTIP
        action3DScalpel->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Scalpel Mode</span></p><p>Used to relabel parts of the 3D scene with a cutplane. Voxels on one side of the cutplane will be assigned the current foreground label. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Click once to start cutplane drawing. Click again in a different location to finish. Then hold and drag cutplane 3D widget to rotate.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td><"
                        "/tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"/><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"/></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        action3DSpray->setText(QApplication::translate("MainImageWindow", "3D Spray Paint Tool", 0));
#ifndef QT_NO_TOOLTIP
        action3DSpray->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Spray Paint Mode</span></p><p>Used to add voxels to the surfaces of existing segmentations. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Press and hold to apply spray paint. </p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"/><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0"
                        ";\"/></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionOverlayVisibilityToggleAll->setText(QApplication::translate("MainImageWindow", "Toggle Overlay Visibility", 0));
        actionOverlayVisibilityToggleAll->setIconText(QApplication::translate("MainImageWindow", "Toggle Visibility of Sticky Layers", 0));
#ifndef QT_NO_TOOLTIP
        actionOverlayVisibilityToggleAll->setToolTip(QApplication::translate("MainImageWindow", "Toggle Visibility (All)", 0));
#endif // QT_NO_TOOLTIP
        actionOverlayVisibilityToggleAll->setShortcut(QApplication::translate("MainImageWindow", "W", 0));
        actionOverlayVisibilityIncreaseAll->setText(QApplication::translate("MainImageWindow", "Increase Overlay Opacity", 0));
        actionOverlayVisibilityIncreaseAll->setShortcut(QApplication::translate("MainImageWindow", "E", 0));
        actionOverlayVisibilityDecreaseAll->setText(QApplication::translate("MainImageWindow", "Decrease Overlay Opacity", 0));
        actionOverlayVisibilityDecreaseAll->setShortcut(QApplication::translate("MainImageWindow", "Q", 0));
        actionAbout->setText(QApplication::translate("MainImageWindow", "About ITK-SNAP", 0));
        actionPreferences->setText(QApplication::translate("MainImageWindow", "Preferences ...", 0));
        actionSaveWorkspace->setText(QApplication::translate("MainImageWindow", "Save Workspace ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveWorkspace->setToolTip(QApplication::translate("MainImageWindow", "Save the current workspace, including open image layers and associated settings and parameters", 0));
#endif // QT_NO_TOOLTIP
        actionOpenWorkspace->setText(QApplication::translate("MainImageWindow", "Open Workspace ...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenWorkspace->setToolTip(QApplication::translate("MainImageWindow", "Open a workspace containing multiple image layers and associated settings and parameters", 0));
#endif // QT_NO_TOOLTIP
        actionSaveWorkspaceAs->setText(QApplication::translate("MainImageWindow", "Save Workspace As ...", 0));
#ifndef QT_NO_TOOLTIP
        actionSaveWorkspaceAs->setToolTip(QApplication::translate("MainImageWindow", "Save the current workspace, including open image layers and associated settings and parameters", 0));
#endif // QT_NO_TOOLTIP
        actionRecentWorkspace_5->setText(QApplication::translate("MainImageWindow", "Recent 5", 0));
        actionRecentWorkspace1->setText(QApplication::translate("MainImageWindow", "Recent 1", 0));
        actionRecentWorkspace2->setText(QApplication::translate("MainImageWindow", "Recent 2", 0));
        actionRecentWorkspace3->setText(QApplication::translate("MainImageWindow", "Recent 3", 0));
        actionRecentWorkspace4->setText(QApplication::translate("MainImageWindow", "Recent 4", 0));
        actionRecentWorkspace5->setText(QApplication::translate("MainImageWindow", "Recent 5", 0));
        actionOpen->setText(QApplication::translate("MainImageWindow", "Open ...", 0));
        actionSave->setText(QApplication::translate("MainImageWindow", "Save ...", 0));
        actionReset->setText(QApplication::translate("MainImageWindow", "Reset to Defaults", 0));
        actionSSSeriesAxial->setText(QApplication::translate("MainImageWindow", "Axial", 0));
#ifndef QT_NO_TOOLTIP
        actionSSSeriesAxial->setToolTip(QApplication::translate("MainImageWindow", "Iterate through all the slices in the axial view and save as a series of PNG image files.", 0));
#endif // QT_NO_TOOLTIP
        actionSSSeriesCoronal->setText(QApplication::translate("MainImageWindow", "Coronal", 0));
#ifndef QT_NO_TOOLTIP
        actionSSSeriesCoronal->setToolTip(QApplication::translate("MainImageWindow", "Iterate through all the slices in the coronal view and save as a series of PNG image files.", 0));
#endif // QT_NO_TOOLTIP
        actionSSSeriesSagittal->setText(QApplication::translate("MainImageWindow", "Sagittal", 0));
#ifndef QT_NO_TOOLTIP
        actionSSSeriesSagittal->setToolTip(QApplication::translate("MainImageWindow", "Iterate through all the slices in the sagittal view and save as a series of PNG image files.", 0));
#endif // QT_NO_TOOLTIP
        actionForegroundLabelPrev->setText(QApplication::translate("MainImageWindow", "Previous", 0));
        actionForegroundLabelPrev->setShortcut(QApplication::translate("MainImageWindow", "<", 0));
        actionForegroundLabelNext->setText(QApplication::translate("MainImageWindow", "Next", 0));
        actionForegroundLabelNext->setShortcut(QApplication::translate("MainImageWindow", ">", 0));
        actionBackgroundLabelPrev->setText(QApplication::translate("MainImageWindow", "Previous", 0));
        actionBackgroundLabelPrev->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+,", 0));
        actionBackgroundLabelNext->setText(QApplication::translate("MainImageWindow", "Next", 0));
        actionBackgroundLabelNext->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+.", 0));
        actionToggle_All_Annotations->setText(QApplication::translate("MainImageWindow", "Toggle All Annotations", 0));
        actionToggle_All_Annotations->setShortcut(QApplication::translate("MainImageWindow", "X", 0));
        actionToggle_Crosshair->setText(QApplication::translate("MainImageWindow", "Toggle Crosshair", 0));
        actionToggle_Crosshair->setShortcut(QApplication::translate("MainImageWindow", "Shift+X", 0));
        actionAnnotation_Preferences->setText(QApplication::translate("MainImageWindow", "Annotation Preferences...", 0));
        actionAutoContrastGlobal->setText(QApplication::translate("MainImageWindow", "Auto-Adjust Contrast (all layers)", 0));
#ifndef QT_NO_TOOLTIP
        actionAutoContrastGlobal->setToolTip(QApplication::translate("MainImageWindow", "Automatically adjust contrast in the main image and all overlays", 0));
#endif // QT_NO_TOOLTIP
        actionAutoContrastGlobal->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+J", 0));
        actionResetContrastGlobal->setText(QApplication::translate("MainImageWindow", "Reset Contrast (all layers)", 0));
        actionResetContrastGlobal->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+J", 0));
        actionHa->setText(QApplication::translate("MainImageWindow", "Ha", 0));
        actionZoom_to_100->setText(QApplication::translate("MainImageWindow", "Zoom to Actual Size x1", 0));
        actionZoom_to_100->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+F, 1", 0));
        actionZoom_to_200->setText(QApplication::translate("MainImageWindow", "Zoom to Actual Size x2", 0));
        actionZoom_to_200->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+F, 2", 0));
        actionZoom_to_400->setText(QApplication::translate("MainImageWindow", "Zoom to Actual Size x4", 0));
        actionZoom_to_400->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+Shift+F, 4", 0));
        actionCheck_for_Updates->setText(QApplication::translate("MainImageWindow", "Check for Software Updates ...", 0));
        actionDocumentation_Home->setText(QApplication::translate("MainImageWindow", "Documentation Home ...", 0));
        actionNew_ITK_SNAP_Window->setText(QApplication::translate("MainImageWindow", "New ITK-SNAP Window", 0));
        actionCoregister_Overlay->setText(QApplication::translate("MainImageWindow", "Coregister Overlay ...", 0));
#ifndef QT_NO_TOOLTIP
        actionCoregister_Overlay->setToolTip(QApplication::translate("MainImageWindow", "Co-register an image with the main image currently loaded into ITK-SNAP", 0));
#endif // QT_NO_TOOLTIP
        actionRecentOverlay_1->setText(QApplication::translate("MainImageWindow", "Recent 1", 0));
        actionRecentOverlay_2->setText(QApplication::translate("MainImageWindow", "Recent 2", 0));
        actionRecentOverlay_3->setText(QApplication::translate("MainImageWindow", "Recent 3", 0));
        actionRecentOverlay_4->setText(QApplication::translate("MainImageWindow", "Recent 4", 0));
        actionRecentOverlay_5->setText(QApplication::translate("MainImageWindow", "Recent 5", 0));
        actionAnnotation->setText(QApplication::translate("MainImageWindow", "Annotation Tool", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotation->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Annotation Mode (6)</span></p><p>Used to draw annotations (lines, text) on image slices and to measure distance and angles between points in a slice. <br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_left_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Use to draw and manipulate annotations</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/root/icons8_mouse_right_click_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Hold and drag to zoom in / zoom out.</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p><img src=\":/roo"
                        "t/icons8_mouse_scrolling_16.png\"/></p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Scroll through image slices.</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotation->setShortcut(QApplication::translate("MainImageWindow", "6", 0));
        actionToggleLayerLayout->setText(QApplication::translate("MainImageWindow", "Thumbnail Layout", 0));
#ifndef QT_NO_TOOLTIP
        actionToggleLayerLayout->setToolTip(QApplication::translate("MainImageWindow", "<html><head/><body><p>Toggle between thumbnail and tiled layouts.</p><p>In <span style=\" font-weight:600;\">thumbnail</span> layout, one image layer occupies most of the available screen space, and other loaded image layers are shown as thumbnails. In <span style=\" font-weight:600;\">tiled</span> layout, multiple image layers are shown side by side. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionToggleLayerLayout->setShortcut(QApplication::translate("MainImageWindow", "\\", 0));
        actionActivateNextLayer->setText(QApplication::translate("MainImageWindow", "Activate Next Layer", 0));
        actionActivateNextLayer->setShortcut(QApplication::translate("MainImageWindow", "]", 0));
        actionActivatePreviousLayer->setText(QApplication::translate("MainImageWindow", "Activate Previous Layer", 0));
        actionActivatePreviousLayer->setShortcut(QApplication::translate("MainImageWindow", "[", 0));
        actionInterpolate_Labels->setText(QApplication::translate("MainImageWindow", "Interpolate Labels...", 0));
        actionRegistration->setText(QApplication::translate("MainImageWindow", "Registration ...", 0));
#ifndef QT_NO_TOOLTIP
        actionRegistration->setToolTip(QApplication::translate("MainImageWindow", "Perform image registration", 0));
#endif // QT_NO_TOOLTIP
        actionRegistration->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+R", 0));
        actionClose_Window->setText(QApplication::translate("MainImageWindow", "Close Window", 0));
        actionClose_Window->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+W", 0));
        actionDicomDummy->setText(QApplication::translate("MainImageWindow", "Dummy", 0));
        actionMainControlPanel->setText(QApplication::translate("MainImageWindow", "Main Control Panel", 0));
        actionRecentSeg_1->setText(QApplication::translate("MainImageWindow", "Recent1", 0));
        actionRecentSeg_2->setText(QApplication::translate("MainImageWindow", "Recent2", 0));
        actionRecentSeg_3->setText(QApplication::translate("MainImageWindow", "Recent3", 0));
        actionRecentSeg_4->setText(QApplication::translate("MainImageWindow", "Recent4", 0));
        actionRecentSeg_5->setText(QApplication::translate("MainImageWindow", "Recent5", 0));
        actionActivateNextSegmentationLayer->setText(QApplication::translate("MainImageWindow", "Activate Next Segmentation Layer", 0));
        actionActivateNextSegmentationLayer->setShortcut(QApplication::translate("MainImageWindow", "}", 0));
        actionActivatePreviousSegmentationLayer->setText(QApplication::translate("MainImageWindow", "Activate Previous Segmentation Layer", 0));
        actionActivatePreviousSegmentationLayer->setShortcut(QApplication::translate("MainImageWindow", "{", 0));
        actionAddSegmentation_Open->setText(QApplication::translate("MainImageWindow", "Open...", 0));
#ifndef QT_NO_TOOLTIP
        actionAddSegmentation_Open->setToolTip(QApplication::translate("MainImageWindow", "Add existing segmentation image to the workspace", 0));
#endif // QT_NO_TOOLTIP
        actionAddSegmentation_New->setText(QApplication::translate("MainImageWindow", "New", 0));
#ifndef QT_NO_TOOLTIP
        actionAddSegmentation_New->setToolTip(QApplication::translate("MainImageWindow", "Add another blank segmentation to the current workspace", 0));
#endif // QT_NO_TOOLTIP
        actionRecentAddSeg_1->setText(QApplication::translate("MainImageWindow", "Recent1", 0));
#ifndef QT_NO_TOOLTIP
        actionRecentAddSeg_1->setToolTip(QApplication::translate("MainImageWindow", "Recent1", 0));
#endif // QT_NO_TOOLTIP
        actionRecentAddSeg_2->setText(QApplication::translate("MainImageWindow", "Recent2", 0));
        actionRecentAddSeg_3->setText(QApplication::translate("MainImageWindow", "Recent3", 0));
        actionRecentAddSeg_4->setText(QApplication::translate("MainImageWindow", "Recent4", 0));
        actionRecentAddSeg_5->setText(QApplication::translate("MainImageWindow", "Recent5", 0));
        actionClearActive->setText(QApplication::translate("MainImageWindow", "Unload Active Segmentation", 0));
#ifndef QT_NO_TOOLTIP
        actionClearActive->setToolTip(QApplication::translate("MainImageWindow", "Unload the segmentation that is currently being edited", 0));
#endif // QT_NO_TOOLTIP
        actionInstallCLI->setText(QApplication::translate("MainImageWindow", "Install Command-Line Tools ...", 0));
        actionDSS->setText(QApplication::translate("MainImageWindow", "Distributed Segmentation Service...", 0));
#ifndef QT_NO_TOOLTIP
        actionDSS->setToolTip(QApplication::translate("MainImageWindow", "Send images to external server for automated segmentation", 0));
#endif // QT_NO_TOOLTIP
        actionDSS->setShortcut(QApplication::translate("MainImageWindow", "Ctrl+D", 0));
        actionNext_Display_Layout->setText(QApplication::translate("MainImageWindow", "Next Display Layout", 0));
        actionNext_Display_Layout->setShortcut(QApplication::translate("MainImageWindow", "|", 0));
        actionContrast40_80->setText(QApplication::translate("MainImageWindow", "Level:40 Window:80", 0));
        actionContrast40_40->setText(QApplication::translate("MainImageWindow", "Level:40 Window:40", 0));
        actionContrast130_2400->setText(QApplication::translate("MainImageWindow", "Level:130 Window:2400", 0));
        actionContrast40_400->setText(QApplication::translate("MainImageWindow", "Level:40 Window:400", 0));
        brsGettingStarted->setHtml(QApplication::translate("MainImageWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:13px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Lucida Grande'; font-size:13pt;\"><br /></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Lucida Grande'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:4px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">Learn about the </span><a href=\"http://www.itksnap.org/pmwiki/pmwiki.php?n=Documentation.NewFeaturesVersion30\"><span style=\" font-size:11px; text-decoration: un"
                        "derline; color:#0000ff;\">new features</span></a><span style=\" font-size:11px;\"> in this version</span></li>\n"
"<li style=\" font-family:'Lucida Grande'; font-size:13pt;\" style=\" margin-top:0px; margin-bottom:4px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">Read a </span><a href=\"http://www.itksnap.org/pmwiki/pmwiki.php?n=Documentation.UpgradingTo30\"><span style=\" font-size:11px; text-decoration: underline; color:#0000ff;\">quick transition guide</span></a><span style=\" font-size:11px;\"> for Version 2 users</span></li>\n"
"<li style=\" font-family:'Lucida Grande'; font-size:13pt;\" style=\" margin-top:0px; margin-bottom:4px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">Download </span><a href=\"http://www.itksnap.org/pmwiki/pmwiki.php?n=Downloads.Data\"><span style=\" font-size:11px; text-decoration: underline; color:#0000ff;\">sample datasets</span></a></li>\n"
"<li style=\" f"
                        "ont-family:'Lucida Grande'; font-size:13pt;\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11px;\">Connect to the </span><a href=\"http://www.itksnap.org/pmwiki/pmwiki.php?n=MailingLists.MailingLists\"><span style=\" font-size:11px; text-decoration: underline; color:#0000ff;\">ITK-SNAP community</span></a></li></ul></body></html>", 0));
        label_2->setText(QApplication::translate("MainImageWindow", "Getting started with ITK-SNAP Version 3", 0));
        label_3->setText(QString());
        tabSplash->setTabText(tabSplash->indexOf(tabGettingStarted), QApplication::translate("MainImageWindow", "Getting Started", 0));
        tabSplash->setTabText(tabSplash->indexOf(tabRecent), QApplication::translate("MainImageWindow", "Recent Images", 0));
        tabSplash->setTabText(tabSplash->indexOf(tabRecentWorkspaces), QApplication::translate("MainImageWindow", "Recent Workspaces", 0));
        btnLoadMain->setText(QApplication::translate("MainImageWindow", "Open Image ...", 0));
        btnLoadWorkspace->setText(QApplication::translate("MainImageWindow", "Open Workspace ...", 0));
        menuFile->setTitle(QApplication::translate("MainImageWindow", "File", 0));
        menuRecent_Images->setTitle(QApplication::translate("MainImageWindow", "Recent Main Images", 0));
        menuRecent_Overlays->setTitle(QApplication::translate("MainImageWindow", "Recent Added Images", 0));
        menuSave_Image->setTitle(QApplication::translate("MainImageWindow", "Save Image", 0));
        menuExport->setTitle(QApplication::translate("MainImageWindow", "Export", 0));
        menuImage_Slice->setTitle(QApplication::translate("MainImageWindow", "Image Slice", 0));
        menuScreenshot->setTitle(QApplication::translate("MainImageWindow", "Screenshot", 0));
        menuScreenshot_Series->setTitle(QApplication::translate("MainImageWindow", "Screenshot Series", 0));
        menuAddAnotherDicomImage->setTitle(QApplication::translate("MainImageWindow", "Add Another DICOM Series", 0));
        menuSegmentation->setTitle(QApplication::translate("MainImageWindow", "Segmentation", 0));
        menuAppearance->setTitle(QApplication::translate("MainImageWindow", "Appearance", 0));
        menuRecent_Segmentations->setTitle(QApplication::translate("MainImageWindow", "Recent Segmentations", 0));
        menuAddSegmentation->setTitle(QApplication::translate("MainImageWindow", "Add Another Segmentation", 0));
        menuAddSegmentation_Recent->setTitle(QApplication::translate("MainImageWindow", "Recent", 0));
        menuTools->setTitle(QApplication::translate("MainImageWindow", "Tools", 0));
        menuActive_Main_Tool->setTitle(QApplication::translate("MainImageWindow", "Active Main Tool", 0));
        menuActive_3D_Tool->setTitle(QApplication::translate("MainImageWindow", "Active 3D Tool", 0));
        menuContrast->setTitle(QApplication::translate("MainImageWindow", "Image Contrast", 0));
        menuEdit->setTitle(QApplication::translate("MainImageWindow", "Edit", 0));
        menuForeground_Label->setTitle(QApplication::translate("MainImageWindow", "Foreground Label", 0));
        menuBackground_Label->setTitle(QApplication::translate("MainImageWindow", "Background Label", 0));
        menuSlice_Annotations->setTitle(QApplication::translate("MainImageWindow", "Slice Annotations", 0));
        menuZoom->setTitle(QApplication::translate("MainImageWindow", "Zoom", 0));
        menuLayers->setTitle(QApplication::translate("MainImageWindow", "Layers", 0));
        menuViews->setTitle(QApplication::translate("MainImageWindow", "Views", 0));
        menuHelp->setTitle(QApplication::translate("MainImageWindow", "Help", 0));
        menuProject->setTitle(QApplication::translate("MainImageWindow", "Workspace", 0));
        menuRecentWorkspaces->setTitle(QApplication::translate("MainImageWindow", "Recent Workspaces", 0));
        menuAdjust_Contrast->setTitle(QApplication::translate("MainImageWindow", "Adjust Contrast", 0));
    } // retranslateUi

};

namespace Ui {
    class MainImageWindow: public Ui_MainImageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINIMAGEWINDOW_H
