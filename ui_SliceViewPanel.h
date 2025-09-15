/********************************************************************************
** Form generated from reading UI file 'SliceViewPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLICEVIEWPANEL_H
#define UI_SLICEVIEWPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AnnotationInteractionMode.h"
#include "CrosshairsInteractionMode.h"
#include "GenericSliceView.h"
#include "PaintbrushInteractionMode.h"
#include "PolygonDrawingInteractionMode.h"
#include "RegistrationInteractionMode.h"
#include "SnakeROIInteractionMode.h"
#include "ThumbnailInteractionMode.h"

QT_BEGIN_NAMESPACE

class Ui_SliceViewPanel
{
public:
    QAction *actionAccept;
    QAction *actionPaste;
    QAction *actionComplete;
    QAction *actionUndo;
    QAction *actionClearDrawing;
    QAction *actionDeleteSelected;
    QAction *actionSplitSelected;
    QAction *actionClearPolygon;
    QAction *actionCompleteAndAccept;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionAnnotationAcceptLine;
    QAction *actionAnnotationClearLine;
    QAction *actionAnnotationSelectAll;
    QAction *actionAnnotationDelete;
    QAction *actionAnnotationNext;
    QAction *actionAnnotationPrevious;
    QAction *actionAnnotationEdit;
    QGridLayout *gridLayout;
    QWidget *sidebar;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnExpand;
    QToolButton *btnToggleLayout;
    QToolButton *btnScreenshot;
    QScrollBar *inSlicePosition;
    QWidget *mainToolbar;
    QHBoxLayout *horizontalLayout_6;
    QWidget *toolbar;
    QVBoxLayout *verticalLayout;
    QWidget *pageDefault;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnZoomToFit;
    QWidget *pagePolygonDraw;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnCloseLoop;
    QToolButton *btnUndoLast;
    QToolButton *btnClearDrawing;
    QWidget *pagePolygonEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btnAcceptPolygon;
    QToolButton *btnDeleteNodes;
    QToolButton *btnSplitNodes;
    QToolButton *btnDeletePolygon;
    QWidget *pageAnnotateLineActive;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *btnAnnotationAcceptLine;
    QToolButton *btnAnnotationClearLine;
    QWidget *pageAnnotateSelect;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *btnAnnotationPrevious;
    QToolButton *btnAnnotationNext;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *btnAnnotationSelectAll;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *btnAnnotationEdit;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *btnAnnotationDeleteSelected;
    QWidget *pagePolygonInactive;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btnPastePolygon;
    QLabel *lblSliceInfo;
    GenericSliceView *sliceView;
    QHBoxLayout *horizontalLayout_4;
    CrosshairsInteractionMode *imCrosshairs;
    CrosshairsInteractionMode *imZoomPan;
    ThumbnailInteractionMode *imThumbnail;
    PolygonDrawingInteractionMode *imPolygon;
    SnakeROIInteractionMode *imSnakeROI;
    PaintbrushInteractionMode *imPaintbrush;
    AnnotationInteractionMode *imAnnotation;
    RegistrationInteractionMode *imRegistration;

    void setupUi(QWidget *SliceViewPanel)
    {
        if (SliceViewPanel->objectName().isEmpty())
            SliceViewPanel->setObjectName(QStringLiteral("SliceViewPanel"));
        SliceViewPanel->resize(542, 382);
        SliceViewPanel->setStyleSheet(QLatin1String("* {\n"
"font-size:11px;\n"
"}"));
        actionAccept = new QAction(SliceViewPanel);
        actionAccept->setObjectName(QStringLiteral("actionAccept"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/popup_ok_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAccept->setIcon(icon);
        actionPaste = new QAction(SliceViewPanel);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/popup_paste_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionComplete = new QAction(SliceViewPanel);
        actionComplete->setObjectName(QStringLiteral("actionComplete"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/popup_edit_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComplete->setIcon(icon2);
        actionUndo = new QAction(SliceViewPanel);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/popup_undo_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionClearDrawing = new QAction(SliceViewPanel);
        actionClearDrawing->setObjectName(QStringLiteral("actionClearDrawing"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/popup_clear_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearDrawing->setIcon(icon4);
        actionDeleteSelected = new QAction(SliceViewPanel);
        actionDeleteSelected->setObjectName(QStringLiteral("actionDeleteSelected"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/popup_delete_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteSelected->setIcon(icon5);
        actionSplitSelected = new QAction(SliceViewPanel);
        actionSplitSelected->setObjectName(QStringLiteral("actionSplitSelected"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/popup_split_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSplitSelected->setIcon(icon6);
        actionClearPolygon = new QAction(SliceViewPanel);
        actionClearPolygon->setObjectName(QStringLiteral("actionClearPolygon"));
        actionClearPolygon->setIcon(icon4);
        actionCompleteAndAccept = new QAction(SliceViewPanel);
        actionCompleteAndAccept->setObjectName(QStringLiteral("actionCompleteAndAccept"));
        actionCompleteAndAccept->setIcon(icon);
        actionZoom_In = new QAction(SliceViewPanel);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/icons8_zoomin_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon7);
        actionZoom_In->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionZoom_Out = new QAction(SliceViewPanel);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/root/icons8_zoomout_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon8);
        actionZoom_Out->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionAnnotationAcceptLine = new QAction(SliceViewPanel);
        actionAnnotationAcceptLine->setObjectName(QStringLiteral("actionAnnotationAcceptLine"));
        actionAnnotationAcceptLine->setIcon(icon);
        actionAnnotationClearLine = new QAction(SliceViewPanel);
        actionAnnotationClearLine->setObjectName(QStringLiteral("actionAnnotationClearLine"));
        actionAnnotationClearLine->setIcon(icon4);
        actionAnnotationSelectAll = new QAction(SliceViewPanel);
        actionAnnotationSelectAll->setObjectName(QStringLiteral("actionAnnotationSelectAll"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/root/icons8_cursor_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnotationSelectAll->setIcon(icon9);
        actionAnnotationDelete = new QAction(SliceViewPanel);
        actionAnnotationDelete->setObjectName(QStringLiteral("actionAnnotationDelete"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/root/delete_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnotationDelete->setIcon(icon10);
        actionAnnotationNext = new QAction(SliceViewPanel);
        actionAnnotationNext->setObjectName(QStringLiteral("actionAnnotationNext"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/root/arrow_down_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnotationNext->setIcon(icon11);
        actionAnnotationPrevious = new QAction(SliceViewPanel);
        actionAnnotationPrevious->setObjectName(QStringLiteral("actionAnnotationPrevious"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/root/arrow_up_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnotationPrevious->setIcon(icon12);
        actionAnnotationEdit = new QAction(SliceViewPanel);
        actionAnnotationEdit->setObjectName(QStringLiteral("actionAnnotationEdit"));
        actionAnnotationEdit->setIcon(icon2);
        gridLayout = new QGridLayout(SliceViewPanel);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(SliceViewPanel);
        sidebar->setObjectName(QStringLiteral("sidebar"));
        verticalLayout_2 = new QVBoxLayout(sidebar);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnExpand = new QToolButton(sidebar);
        btnExpand->setObjectName(QStringLiteral("btnExpand"));
        btnExpand->setMaximumSize(QSize(20, 20));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/root/dl_axial.png"), QSize(), QIcon::Normal, QIcon::On);
        btnExpand->setIcon(icon13);
        btnExpand->setAutoRaise(true);

        verticalLayout_2->addWidget(btnExpand);

        btnToggleLayout = new QToolButton(sidebar);
        btnToggleLayout->setObjectName(QStringLiteral("btnToggleLayout"));
        btnToggleLayout->setMaximumSize(QSize(20, 20));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/root/layout_thumb_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon14.addFile(QStringLiteral(":/root/layout_tile_16.png"), QSize(), QIcon::Normal, QIcon::On);
        btnToggleLayout->setIcon(icon14);
        btnToggleLayout->setCheckable(false);
        btnToggleLayout->setChecked(false);
        btnToggleLayout->setAutoRaise(true);

        verticalLayout_2->addWidget(btnToggleLayout);

        btnScreenshot = new QToolButton(sidebar);
        btnScreenshot->setObjectName(QStringLiteral("btnScreenshot"));
        btnScreenshot->setMaximumSize(QSize(20, 20));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/root/icons8_slr_camera_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnScreenshot->setIcon(icon15);
        btnScreenshot->setIconSize(QSize(12, 12));
        btnScreenshot->setAutoRaise(true);

        verticalLayout_2->addWidget(btnScreenshot);

        inSlicePosition = new QScrollBar(sidebar);
        inSlicePosition->setObjectName(QStringLiteral("inSlicePosition"));
        inSlicePosition->setEnabled(true);
        inSlicePosition->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(inSlicePosition, 0, Qt::AlignHCenter);


        gridLayout->addWidget(sidebar, 1, 1, 1, 1, Qt::AlignHCenter);

        mainToolbar = new QWidget(SliceViewPanel);
        mainToolbar->setObjectName(QStringLiteral("mainToolbar"));
        horizontalLayout_6 = new QHBoxLayout(mainToolbar);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, 0, 10, 0);
        toolbar = new QWidget(mainToolbar);
        toolbar->setObjectName(QStringLiteral("toolbar"));
        verticalLayout = new QVBoxLayout(toolbar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pageDefault = new QWidget(toolbar);
        pageDefault->setObjectName(QStringLiteral("pageDefault"));
        horizontalLayout_2 = new QHBoxLayout(pageDefault);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnZoomToFit = new QToolButton(pageDefault);
        btnZoomToFit->setObjectName(QStringLiteral("btnZoomToFit"));
        btnZoomToFit->setMaximumSize(QSize(16777215, 20));
        QFont font;
        btnZoomToFit->setFont(font);

        horizontalLayout_2->addWidget(btnZoomToFit);


        verticalLayout->addWidget(pageDefault);

        pagePolygonDraw = new QWidget(toolbar);
        pagePolygonDraw->setObjectName(QStringLiteral("pagePolygonDraw"));
        horizontalLayout = new QHBoxLayout(pagePolygonDraw);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnCloseLoop = new QToolButton(pagePolygonDraw);
        btnCloseLoop->setObjectName(QStringLiteral("btnCloseLoop"));
        btnCloseLoop->setMinimumSize(QSize(64, 0));
        btnCloseLoop->setMaximumSize(QSize(16777215, 20));
        btnCloseLoop->setFont(font);
        btnCloseLoop->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(btnCloseLoop);

        btnUndoLast = new QToolButton(pagePolygonDraw);
        btnUndoLast->setObjectName(QStringLiteral("btnUndoLast"));
        btnUndoLast->setMinimumSize(QSize(96, 0));
        btnUndoLast->setMaximumSize(QSize(16777215, 20));
        btnUndoLast->setFont(font);
        btnUndoLast->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(btnUndoLast);

        btnClearDrawing = new QToolButton(pagePolygonDraw);
        btnClearDrawing->setObjectName(QStringLiteral("btnClearDrawing"));
        btnClearDrawing->setMaximumSize(QSize(16777215, 20));
        btnClearDrawing->setFont(font);
        btnClearDrawing->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(btnClearDrawing);


        verticalLayout->addWidget(pagePolygonDraw);

        pagePolygonEdit = new QWidget(toolbar);
        pagePolygonEdit->setObjectName(QStringLiteral("pagePolygonEdit"));
        horizontalLayout_3 = new QHBoxLayout(pagePolygonEdit);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnAcceptPolygon = new QToolButton(pagePolygonEdit);
        btnAcceptPolygon->setObjectName(QStringLiteral("btnAcceptPolygon"));
        btnAcceptPolygon->setMinimumSize(QSize(64, 0));
        btnAcceptPolygon->setMaximumSize(QSize(16777215, 20));
        btnAcceptPolygon->setFont(font);
        btnAcceptPolygon->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_3->addWidget(btnAcceptPolygon);

        btnDeleteNodes = new QToolButton(pagePolygonEdit);
        btnDeleteNodes->setObjectName(QStringLiteral("btnDeleteNodes"));
        btnDeleteNodes->setMinimumSize(QSize(46, 0));
        btnDeleteNodes->setMaximumSize(QSize(16777215, 20));
        btnDeleteNodes->setFont(font);
        btnDeleteNodes->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_3->addWidget(btnDeleteNodes);

        btnSplitNodes = new QToolButton(pagePolygonEdit);
        btnSplitNodes->setObjectName(QStringLiteral("btnSplitNodes"));
        btnSplitNodes->setMinimumSize(QSize(46, 0));
        btnSplitNodes->setMaximumSize(QSize(16777215, 20));
        btnSplitNodes->setFont(font);
        btnSplitNodes->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_3->addWidget(btnSplitNodes);

        btnDeletePolygon = new QToolButton(pagePolygonEdit);
        btnDeletePolygon->setObjectName(QStringLiteral("btnDeletePolygon"));
        btnDeletePolygon->setMaximumSize(QSize(16777215, 20));
        btnDeletePolygon->setFont(font);
        btnDeletePolygon->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_3->addWidget(btnDeletePolygon);


        verticalLayout->addWidget(pagePolygonEdit);

        pageAnnotateLineActive = new QWidget(toolbar);
        pageAnnotateLineActive->setObjectName(QStringLiteral("pageAnnotateLineActive"));
        horizontalLayout_7 = new QHBoxLayout(pageAnnotateLineActive);
        horizontalLayout_7->setSpacing(4);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_5 = new QSpacerItem(313, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        btnAnnotationAcceptLine = new QToolButton(pageAnnotateLineActive);
        btnAnnotationAcceptLine->setObjectName(QStringLiteral("btnAnnotationAcceptLine"));
        btnAnnotationAcceptLine->setMinimumSize(QSize(64, 0));
        btnAnnotationAcceptLine->setMaximumSize(QSize(16777215, 20));
        btnAnnotationAcceptLine->setFont(font);
        btnAnnotationAcceptLine->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_7->addWidget(btnAnnotationAcceptLine);

        btnAnnotationClearLine = new QToolButton(pageAnnotateLineActive);
        btnAnnotationClearLine->setObjectName(QStringLiteral("btnAnnotationClearLine"));
        btnAnnotationClearLine->setMaximumSize(QSize(16777215, 20));
        btnAnnotationClearLine->setFont(font);
        btnAnnotationClearLine->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_7->addWidget(btnAnnotationClearLine);


        verticalLayout->addWidget(pageAnnotateLineActive);

        pageAnnotateSelect = new QWidget(toolbar);
        pageAnnotateSelect->setObjectName(QStringLiteral("pageAnnotateSelect"));
        horizontalLayout_8 = new QHBoxLayout(pageAnnotateSelect);
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_6 = new QSpacerItem(313, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        btnAnnotationPrevious = new QToolButton(pageAnnotateSelect);
        btnAnnotationPrevious->setObjectName(QStringLiteral("btnAnnotationPrevious"));
        btnAnnotationPrevious->setMaximumSize(QSize(16777215, 20));
        btnAnnotationPrevious->setFont(font);
        btnAnnotationPrevious->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_8->addWidget(btnAnnotationPrevious);

        btnAnnotationNext = new QToolButton(pageAnnotateSelect);
        btnAnnotationNext->setObjectName(QStringLiteral("btnAnnotationNext"));
        btnAnnotationNext->setMaximumSize(QSize(16777215, 20));
        btnAnnotationNext->setFont(font);
        btnAnnotationNext->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_8->addWidget(btnAnnotationNext);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        btnAnnotationSelectAll = new QToolButton(pageAnnotateSelect);
        btnAnnotationSelectAll->setObjectName(QStringLiteral("btnAnnotationSelectAll"));
        btnAnnotationSelectAll->setMaximumSize(QSize(16777215, 20));
        btnAnnotationSelectAll->setFont(font);
        btnAnnotationSelectAll->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_8->addWidget(btnAnnotationSelectAll);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        btnAnnotationEdit = new QToolButton(pageAnnotateSelect);
        btnAnnotationEdit->setObjectName(QStringLiteral("btnAnnotationEdit"));
        btnAnnotationEdit->setMaximumSize(QSize(16777215, 20));
        btnAnnotationEdit->setFont(font);
        btnAnnotationEdit->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_8->addWidget(btnAnnotationEdit);

        horizontalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        btnAnnotationDeleteSelected = new QToolButton(pageAnnotateSelect);
        btnAnnotationDeleteSelected->setObjectName(QStringLiteral("btnAnnotationDeleteSelected"));
        btnAnnotationDeleteSelected->setMaximumSize(QSize(16777215, 20));
        btnAnnotationDeleteSelected->setFont(font);
        btnAnnotationDeleteSelected->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_8->addWidget(btnAnnotationDeleteSelected);


        verticalLayout->addWidget(pageAnnotateSelect);

        pagePolygonInactive = new QWidget(toolbar);
        pagePolygonInactive->setObjectName(QStringLiteral("pagePolygonInactive"));
        horizontalLayout_5 = new QHBoxLayout(pagePolygonInactive);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        btnPastePolygon = new QToolButton(pagePolygonInactive);
        btnPastePolygon->setObjectName(QStringLiteral("btnPastePolygon"));
        btnPastePolygon->setMaximumSize(QSize(16777215, 20));
        btnPastePolygon->setFont(font);
        btnPastePolygon->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_5->addWidget(btnPastePolygon);


        verticalLayout->addWidget(pagePolygonInactive);


        horizontalLayout_6->addWidget(toolbar);

        lblSliceInfo = new QLabel(mainToolbar);
        lblSliceInfo->setObjectName(QStringLiteral("lblSliceInfo"));
        lblSliceInfo->setMinimumSize(QSize(64, 0));
        lblSliceInfo->setFont(font);
        lblSliceInfo->setStyleSheet(QStringLiteral("font-size:11px;"));
        lblSliceInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(lblSliceInfo);


        gridLayout->addWidget(mainToolbar, 2, 0, 1, 2);

        sliceView = new GenericSliceView(SliceViewPanel);
        sliceView->setObjectName(QStringLiteral("sliceView"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sliceView->sizePolicy().hasHeightForWidth());
        sliceView->setSizePolicy(sizePolicy);
        sliceView->setMinimumSize(QSize(40, 40));
        horizontalLayout_4 = new QHBoxLayout(sliceView);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        imCrosshairs = new CrosshairsInteractionMode(sliceView);
        imCrosshairs->setObjectName(QStringLiteral("imCrosshairs"));

        horizontalLayout_4->addWidget(imCrosshairs);

        imZoomPan = new CrosshairsInteractionMode(sliceView);
        imZoomPan->setObjectName(QStringLiteral("imZoomPan"));

        horizontalLayout_4->addWidget(imZoomPan);

        imThumbnail = new ThumbnailInteractionMode(sliceView);
        imThumbnail->setObjectName(QStringLiteral("imThumbnail"));

        horizontalLayout_4->addWidget(imThumbnail);

        imPolygon = new PolygonDrawingInteractionMode(sliceView);
        imPolygon->setObjectName(QStringLiteral("imPolygon"));

        horizontalLayout_4->addWidget(imPolygon);

        imSnakeROI = new SnakeROIInteractionMode(sliceView);
        imSnakeROI->setObjectName(QStringLiteral("imSnakeROI"));

        horizontalLayout_4->addWidget(imSnakeROI);

        imPaintbrush = new PaintbrushInteractionMode(sliceView);
        imPaintbrush->setObjectName(QStringLiteral("imPaintbrush"));

        horizontalLayout_4->addWidget(imPaintbrush);

        imAnnotation = new AnnotationInteractionMode(sliceView);
        imAnnotation->setObjectName(QStringLiteral("imAnnotation"));

        horizontalLayout_4->addWidget(imAnnotation);

        imRegistration = new RegistrationInteractionMode(sliceView);
        imRegistration->setObjectName(QStringLiteral("imRegistration"));

        horizontalLayout_4->addWidget(imRegistration);


        gridLayout->addWidget(sliceView, 1, 0, 1, 1);


        retranslateUi(SliceViewPanel);
        QObject::connect(actionComplete, SIGNAL(triggered()), imPolygon, SLOT(onCloseLoopAndEdit()));
        QObject::connect(actionUndo, SIGNAL(triggered()), imPolygon, SLOT(onUndoLastPoint()));
        QObject::connect(actionClearDrawing, SIGNAL(triggered()), imPolygon, SLOT(onCancelDrawing()));
        QObject::connect(actionDeleteSelected, SIGNAL(triggered()), imPolygon, SLOT(onDeleteSelected()));
        QObject::connect(actionSplitSelected, SIGNAL(triggered()), imPolygon, SLOT(onSplitSelected()));
        QObject::connect(actionClearPolygon, SIGNAL(triggered()), imPolygon, SLOT(onClearPolygon()));
        QObject::connect(actionPaste, SIGNAL(triggered()), imPolygon, SLOT(onPastePolygon()));
        QObject::connect(actionAccept, SIGNAL(triggered()), imPolygon, SLOT(onAcceptPolygon()));
        QObject::connect(actionCompleteAndAccept, SIGNAL(triggered()), imPolygon, SLOT(onCloseLoopAndAccept()));

        QMetaObject::connectSlotsByName(SliceViewPanel);
    } // setupUi

    void retranslateUi(QWidget *SliceViewPanel)
    {
        SliceViewPanel->setWindowTitle(QApplication::translate("SliceViewPanel", "Form", 0));
        actionAccept->setText(QApplication::translate("SliceViewPanel", "Accept Polygon", 0));
        actionAccept->setIconText(QApplication::translate("SliceViewPanel", "accept", 0));
#ifndef QT_NO_TOOLTIP
        actionAccept->setToolTip(QApplication::translate("SliceViewPanel", "Incorporates the polygon into the segmentation.", 0));
#endif // QT_NO_TOOLTIP
        actionAccept->setShortcut(QApplication::translate("SliceViewPanel", "Return", 0));
        actionPaste->setText(QApplication::translate("SliceViewPanel", "Paste Last Polygon", 0));
        actionPaste->setIconText(QApplication::translate("SliceViewPanel", "paste last polygon", 0));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("SliceViewPanel", "Pastes the last polygon that you have accepted in this slice view. You can then move the vertices in the pasted polygon to fit image data. This can be more efficient than drawing a new polygon when performing segmentation across multiple slices.", 0));
#endif // QT_NO_TOOLTIP
        actionPaste->setShortcut(QApplication::translate("SliceViewPanel", "Ctrl+V", 0));
        actionComplete->setText(QApplication::translate("SliceViewPanel", "Complete Polygon and Edit", 0));
        actionComplete->setIconText(QApplication::translate("SliceViewPanel", "complete", 0));
#ifndef QT_NO_TOOLTIP
        actionComplete->setToolTip(QApplication::translate("SliceViewPanel", "Finishes drawing the polygon by connecting the last point to the first. The window will enter \"editing\" mode, where you can modify the polygon.", 0));
#endif // QT_NO_TOOLTIP
        actionComplete->setShortcut(QApplication::translate("SliceViewPanel", "Return", 0));
        actionUndo->setText(QApplication::translate("SliceViewPanel", "Undo Last Point", 0));
        actionUndo->setIconText(QApplication::translate("SliceViewPanel", "undo last point", 0));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("SliceViewPanel", "Deletes the last point added to the polygon", 0));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("SliceViewPanel", "Backspace", 0));
        actionClearDrawing->setText(QApplication::translate("SliceViewPanel", "Clear Drawing", 0));
        actionClearDrawing->setIconText(QApplication::translate("SliceViewPanel", "clear", 0));
#ifndef QT_NO_TOOLTIP
        actionClearDrawing->setToolTip(QApplication::translate("SliceViewPanel", "Clears the current polygon so you can start drawing from scratch", 0));
#endif // QT_NO_TOOLTIP
        actionClearDrawing->setShortcut(QApplication::translate("SliceViewPanel", "Esc", 0));
        actionDeleteSelected->setText(QApplication::translate("SliceViewPanel", "Trim Selected Vertices", 0));
        actionDeleteSelected->setIconText(QApplication::translate("SliceViewPanel", "trim", 0));
#ifndef QT_NO_TOOLTIP
        actionDeleteSelected->setToolTip(QApplication::translate("SliceViewPanel", "Deletes the selected vertices in the polygon", 0));
#endif // QT_NO_TOOLTIP
        actionDeleteSelected->setShortcut(QApplication::translate("SliceViewPanel", "-", 0));
        actionSplitSelected->setText(QApplication::translate("SliceViewPanel", "Split Selected Edges", 0));
        actionSplitSelected->setIconText(QApplication::translate("SliceViewPanel", "split", 0));
#ifndef QT_NO_TOOLTIP
        actionSplitSelected->setToolTip(QApplication::translate("SliceViewPanel", "Splits each selected edge in the polygon by inserting a new vertex in the middle", 0));
#endif // QT_NO_TOOLTIP
        actionSplitSelected->setShortcut(QApplication::translate("SliceViewPanel", "+", 0));
        actionClearPolygon->setText(QApplication::translate("SliceViewPanel", "Clear Polygon", 0));
        actionClearPolygon->setIconText(QApplication::translate("SliceViewPanel", "clear", 0));
#ifndef QT_NO_TOOLTIP
        actionClearPolygon->setToolTip(QApplication::translate("SliceViewPanel", "Deletes the entire polygon, so you can draw a new one from scratch", 0));
#endif // QT_NO_TOOLTIP
        actionClearPolygon->setShortcut(QApplication::translate("SliceViewPanel", "Esc", 0));
        actionCompleteAndAccept->setText(QApplication::translate("SliceViewPanel", "Complete Polygon and Accept", 0));
#ifndef QT_NO_TOOLTIP
        actionCompleteAndAccept->setToolTip(QApplication::translate("SliceViewPanel", "Finishes drawing the polygon by connecting the last point to the first, then incorporates the polygon into the segmentation. This bypasses the editing mode.", 0));
#endif // QT_NO_TOOLTIP
        actionCompleteAndAccept->setShortcut(QApplication::translate("SliceViewPanel", "Ctrl+Return", 0));
        actionZoom_In->setText(QApplication::translate("SliceViewPanel", "Zoom In", 0));
        actionZoom_In->setShortcut(QApplication::translate("SliceViewPanel", "Ctrl+Up", 0));
        actionZoom_Out->setText(QApplication::translate("SliceViewPanel", "Zoom Out", 0));
#ifndef QT_NO_TOOLTIP
        actionZoom_Out->setToolTip(QApplication::translate("SliceViewPanel", "Zoom Out", 0));
#endif // QT_NO_TOOLTIP
        actionZoom_Out->setShortcut(QApplication::translate("SliceViewPanel", "Ctrl+Down", 0));
        actionAnnotationAcceptLine->setText(QApplication::translate("SliceViewPanel", "Accept Polygon", 0));
        actionAnnotationAcceptLine->setIconText(QApplication::translate("SliceViewPanel", "accept", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationAcceptLine->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p>Add the current line measurement to the annotation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationAcceptLine->setShortcut(QApplication::translate("SliceViewPanel", "Return", 0));
        actionAnnotationClearLine->setText(QApplication::translate("SliceViewPanel", "Clear measurement", 0));
        actionAnnotationClearLine->setIconText(QApplication::translate("SliceViewPanel", "clear", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationClearLine->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p>Cancels the current measurement</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationClearLine->setShortcut(QApplication::translate("SliceViewPanel", "Esc", 0));
        actionAnnotationSelectAll->setText(QApplication::translate("SliceViewPanel", "Select all annotations", 0));
        actionAnnotationSelectAll->setIconText(QApplication::translate("SliceViewPanel", "select all", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationSelectAll->setToolTip(QApplication::translate("SliceViewPanel", "Select all annotations on the current slice", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationSelectAll->setShortcut(QApplication::translate("SliceViewPanel", "Ctrl+A", 0));
        actionAnnotationDelete->setText(QApplication::translate("SliceViewPanel", "Delete selected annotations", 0));
        actionAnnotationDelete->setIconText(QApplication::translate("SliceViewPanel", "delete", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationDelete->setToolTip(QApplication::translate("SliceViewPanel", "Delete selected annotations on this slice", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationDelete->setShortcut(QApplication::translate("SliceViewPanel", "Backspace", 0));
        actionAnnotationNext->setText(QApplication::translate("SliceViewPanel", "Next annotation", 0));
        actionAnnotationNext->setIconText(QApplication::translate("SliceViewPanel", "next", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationNext->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p>Select the next annotation. Use this to cycle through the annotations in this slice view in forward order.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationPrevious->setText(QApplication::translate("SliceViewPanel", "Previous annotation", 0));
        actionAnnotationPrevious->setIconText(QApplication::translate("SliceViewPanel", "previous", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationPrevious->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p>Select the previous annotation. Use this to cycle through the annotations in this slice view in reverse order.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        actionAnnotationEdit->setText(QApplication::translate("SliceViewPanel", "Edit selected annotation", 0));
        actionAnnotationEdit->setIconText(QApplication::translate("SliceViewPanel", "edit...", 0));
#ifndef QT_NO_TOOLTIP
        actionAnnotationEdit->setToolTip(QApplication::translate("SliceViewPanel", "Change selected annotation properties", 0));
#endif // QT_NO_TOOLTIP
        btnExpand->setText(QApplication::translate("SliceViewPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnToggleLayout->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p>Toggle between thumbnail and tiled layouts.</p><p>In <span style=\" font-weight:600;\">thumbnail</span> layout, one image layer occupies most of the available screen space, and other loaded image layers are shown as thumbnails. In <span style=\" font-weight:600;\">tiled</span> layout, multiple image layers are shown side by side. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnToggleLayout->setText(QApplication::translate("SliceViewPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnScreenshot->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p><span style=\" font-size:11pt;\">Save a screenshot of the current slice view.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnScreenshot->setText(QApplication::translate("SliceViewPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        inSlicePosition->setToolTip(QApplication::translate("SliceViewPanel", "Slice selection", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnZoomToFit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnZoomToFit->setText(QApplication::translate("SliceViewPanel", "zoom to fit", 0));
#ifndef QT_NO_TOOLTIP
        btnCloseLoop->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnCloseLoop->setText(QApplication::translate("SliceViewPanel", "complete", 0));
#ifndef QT_NO_TOOLTIP
        btnUndoLast->setToolTip(QApplication::translate("SliceViewPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Deletes the last point added to the polygon</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnUndoLast->setText(QApplication::translate("SliceViewPanel", "undo last point", 0));
#ifndef QT_NO_TOOLTIP
        btnClearDrawing->setToolTip(QApplication::translate("SliceViewPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clears the current polygon so you can start drawing from scratch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClearDrawing->setText(QApplication::translate("SliceViewPanel", "clear", 0));
#ifndef QT_NO_TOOLTIP
        btnAcceptPolygon->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAcceptPolygon->setText(QApplication::translate("SliceViewPanel", "accept", 0));
#ifndef QT_NO_TOOLTIP
        btnDeleteNodes->setToolTip(QApplication::translate("SliceViewPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Deletes the selected vertices in the polygon</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnDeleteNodes->setText(QApplication::translate("SliceViewPanel", "delete", 0));
#ifndef QT_NO_TOOLTIP
        btnSplitNodes->setToolTip(QApplication::translate("SliceViewPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Splits each selected edge in the polygon by inserting a new vertex in the middle</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSplitNodes->setText(QApplication::translate("SliceViewPanel", "split", 0));
#ifndef QT_NO_TOOLTIP
        btnDeletePolygon->setToolTip(QApplication::translate("SliceViewPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Deletes the entire polygon, so you can draw a new one from scratch</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnDeletePolygon->setText(QApplication::translate("SliceViewPanel", "clear", 0));
#ifndef QT_NO_TOOLTIP
        btnAnnotationAcceptLine->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAnnotationAcceptLine->setText(QApplication::translate("SliceViewPanel", "accept", 0));
        btnAnnotationClearLine->setText(QApplication::translate("SliceViewPanel", "clear", 0));
        btnAnnotationPrevious->setText(QApplication::translate("SliceViewPanel", "previous", 0));
        btnAnnotationNext->setText(QApplication::translate("SliceViewPanel", "next", 0));
        btnAnnotationSelectAll->setText(QApplication::translate("SliceViewPanel", "select all", 0));
        btnAnnotationEdit->setText(QApplication::translate("SliceViewPanel", "edit...", 0));
#ifndef QT_NO_TOOLTIP
        btnAnnotationDeleteSelected->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnAnnotationDeleteSelected->setText(QApplication::translate("SliceViewPanel", "delete", 0));
#ifndef QT_NO_TOOLTIP
        btnPastePolygon->setToolTip(QApplication::translate("SliceViewPanel", "<html><head/><body><p><span style=\" font-family:'Helvetica'; font-size:11px;\">Pastes the last polygon that you have accepted in this slice view. You can then move the vertices in the pasted polygon to fit image data. This can be more efficient than drawing a new polygon when performing segmentation across multiple slices.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnPastePolygon->setText(QApplication::translate("SliceViewPanel", "paste", 0));
        lblSliceInfo->setText(QApplication::translate("SliceViewPanel", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class SliceViewPanel: public Ui_SliceViewPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLICEVIEWPANEL_H
