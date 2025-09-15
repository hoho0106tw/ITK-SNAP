/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QColorButtonWidget.h>
#include <QDoubleSlider.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stack;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_4;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *chkAutoContrast;
    QCheckBox *chkLinkedZoom;
    QCheckBox *chkContinuousUpdate;
    QCheckBox *chkSynchronize;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkSyncCursor;
    QCheckBox *chkSyncZoom;
    QCheckBox *chkSyncPan;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *chkCheckForUpdates;
    QSpacerItem *verticalSpacer;
    QWidget *pageLayout;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QComboBox *inInterpolationMode;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *inDefaultColorMap;
    QComboBox *inOverlayLayout;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *chkShowThumbnail;
    QWidget *widget_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QSpinBox *inThumbnailFraction;
    QSpinBox *inThumbnailMaxSize;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *outViewTopLeft;
    QLabel *outViewTopRight;
    QLabel *outViewBottomLeft;
    QLabel *outViewBottomRight;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *grpLayoutRadio;
    QGridLayout *gridLayout_4;
    QRadioButton *btnASC;
    QRadioButton *btnCAS;
    QRadioButton *btnSAC;
    QRadioButton *btnACS;
    QRadioButton *btnSCA;
    QRadioButton *btnCSA;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *chkLayoutAnteriorSide;
    QCheckBox *chkLayoutRightLeft;
    QSpacerItem *verticalSpacer_3;
    QWidget *page;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_13;
    QTreeView *treeVisualElements;
    QGroupBox *grpAppearance;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_7;
    QFormLayout *formLayout_3;
    QCheckBox *chkElementVisible;
    QSpacerItem *verticalSpacer_7;
    QLabel *labelElementColor;
    QColorButtonWidget *btnElementColor;
    QLabel *labelElementOpacity;
    QSpacerItem *verticalSpacer_12;
    QLabel *labelElementLineThickness;
    QDoubleSpinBox *inElementThickness;
    QCheckBox *chkElementAntiAlias;
    QSpacerItem *verticalSpacer_10;
    QLabel *labelElementDashSpacing;
    QSpinBox *inElementDashSpacing;
    QSpacerItem *verticalSpacer_6;
    QLabel *labelElementFontSize;
    QSpinBox *inElementFontSize;
    QDoubleSlider *inElementOpacity;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btnElementReset;
    QPushButton *btnElementResetAll;
    QWidget *pageRendering;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkGaussianSmooth;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLabel *label_9;
    QDoubleSpinBox *inGaussianSmoothDeviation;
    QWidget *widget_5;
    QFormLayout *formLayout_5;
    QLabel *label_15;
    QDoubleSpinBox *inGaussianSmoothMaxError;
    QSpacerItem *verticalSpacer_13;
    QCheckBox *chkMeshSmooth;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QWidget *widget_6;
    QFormLayout *formLayout_6;
    QLabel *label_16;
    QDoubleSpinBox *inMeshSmoothConvergence;
    QDoubleSpinBox *inMeshSmoothIterations;
    QLabel *label_18;
    QWidget *widget_8;
    QFormLayout *formLayout_7;
    QLabel *label_17;
    QDoubleSpinBox *inMeshSmoothFeatureAngle;
    QDoubleSpinBox *inMeshSmoothRelaxation;
    QLabel *label_19;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkMeshSmoothFeatureEdgeSmoothing;
    QCheckBox *chkMeshSmoothBoundarySmoothing;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *verticalSpacer_9;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkDecimate;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_5;
    QWidget *widget_11;
    QFormLayout *formLayout_8;
    QLabel *label_20;
    QDoubleSpinBox *inDecimateTargetReduction;
    QLabel *label_21;
    QDoubleSpinBox *inDecimateMaxError;
    QWidget *widget_12;
    QFormLayout *formLayout_9;
    QLabel *label_25;
    QDoubleSpinBox *inDecimateFeatureAngle;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *chkDecimatePreserveTopology;
    QSpacerItem *verticalSpacer_14;
    QWidget *pageTools;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget_5;
    QWidget *tabPaintbrush;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpinBox *inPaintBrushInitSize;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpinBox *inPaintBrushMaxSize;
    QSpacerItem *verticalSpacer_11;
    QListWidget *listWidget;
    QLabel *outPage;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(689, 554);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        stack = new QStackedWidget(PreferencesDialog);
        stack->setObjectName(QStringLiteral("stack"));
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QStringLiteral("pageGeneral"));
        verticalLayout = new QVBoxLayout(pageGeneral);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget_4 = new QTabWidget(pageGeneral);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_11 = new QVBoxLayout(tab_6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        chkAutoContrast = new QCheckBox(tab_6);
        chkAutoContrast->setObjectName(QStringLiteral("chkAutoContrast"));

        verticalLayout_11->addWidget(chkAutoContrast);

        chkLinkedZoom = new QCheckBox(tab_6);
        chkLinkedZoom->setObjectName(QStringLiteral("chkLinkedZoom"));

        verticalLayout_11->addWidget(chkLinkedZoom);

        chkContinuousUpdate = new QCheckBox(tab_6);
        chkContinuousUpdate->setObjectName(QStringLiteral("chkContinuousUpdate"));

        verticalLayout_11->addWidget(chkContinuousUpdate);

        chkSynchronize = new QCheckBox(tab_6);
        chkSynchronize->setObjectName(QStringLiteral("chkSynchronize"));

        verticalLayout_11->addWidget(chkSynchronize);

        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        chkSyncCursor = new QCheckBox(groupBox);
        chkSyncCursor->setObjectName(QStringLiteral("chkSyncCursor"));

        horizontalLayout_3->addWidget(chkSyncCursor);

        chkSyncZoom = new QCheckBox(groupBox);
        chkSyncZoom->setObjectName(QStringLiteral("chkSyncZoom"));

        horizontalLayout_3->addWidget(chkSyncZoom);

        chkSyncPan = new QCheckBox(groupBox);
        chkSyncPan->setObjectName(QStringLiteral("chkSyncPan"));

        horizontalLayout_3->addWidget(chkSyncPan);


        verticalLayout_11->addWidget(groupBox);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        tabWidget_4->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_14 = new QVBoxLayout(tab_7);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        chkCheckForUpdates = new QCheckBox(tab_7);
        chkCheckForUpdates->setObjectName(QStringLiteral("chkCheckForUpdates"));

        verticalLayout_14->addWidget(chkCheckForUpdates);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);

        tabWidget_4->addTab(tab_7, QString());

        verticalLayout->addWidget(tabWidget_4);

        stack->addWidget(pageGeneral);
        pageLayout = new QWidget();
        pageLayout->setObjectName(QStringLiteral("pageLayout"));
        verticalLayout_5 = new QVBoxLayout(pageLayout);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(pageLayout);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        formLayout_2 = new QFormLayout(groupBox_7);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout_2->setContentsMargins(-1, -1, 24, -1);
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        inInterpolationMode = new QComboBox(groupBox_7);
        inInterpolationMode->setObjectName(QStringLiteral("inInterpolationMode"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inInterpolationMode);

        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        inDefaultColorMap = new QComboBox(groupBox_7);
        inDefaultColorMap->setObjectName(QStringLiteral("inDefaultColorMap"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inDefaultColorMap);

        inOverlayLayout = new QComboBox(groupBox_7);
        inOverlayLayout->setObjectName(QStringLiteral("inOverlayLayout"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, inOverlayLayout);


        verticalLayout_9->addWidget(groupBox_7);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_10 = new QVBoxLayout(groupBox_6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        chkShowThumbnail = new QCheckBox(groupBox_6);
        chkShowThumbnail->setObjectName(QStringLiteral("chkShowThumbnail"));

        verticalLayout_10->addWidget(chkShowThumbnail);

        widget_4 = new QWidget(groupBox_6);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        formLayout = new QFormLayout(widget_4);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(36, 0, -1, 0);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        inThumbnailFraction = new QSpinBox(widget_4);
        inThumbnailFraction->setObjectName(QStringLiteral("inThumbnailFraction"));
        inThumbnailFraction->setMinimumSize(QSize(80, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, inThumbnailFraction);

        inThumbnailMaxSize = new QSpinBox(widget_4);
        inThumbnailMaxSize->setObjectName(QStringLiteral("inThumbnailMaxSize"));
        inThumbnailMaxSize->setMinimumSize(QSize(80, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, inThumbnailMaxSize);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);


        verticalLayout_10->addWidget(widget_4);


        verticalLayout_9->addWidget(groupBox_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        outViewTopLeft = new QLabel(groupBox_3);
        outViewTopLeft->setObjectName(QStringLiteral("outViewTopLeft"));
        outViewTopLeft->setMinimumSize(QSize(64, 64));
        outViewTopLeft->setMaximumSize(QSize(64, 64));
        outViewTopLeft->setStyleSheet(QLatin1String("background-color:rgb(179, 179, 179);\n"
"border-color:rgb(51, 51, 51);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"color:white;"));
        outViewTopLeft->setAlignment(Qt::AlignCenter);
        outViewTopLeft->setWordWrap(true);

        gridLayout_2->addWidget(outViewTopLeft, 1, 0, 1, 1);

        outViewTopRight = new QLabel(groupBox_3);
        outViewTopRight->setObjectName(QStringLiteral("outViewTopRight"));
        outViewTopRight->setMinimumSize(QSize(64, 64));
        outViewTopRight->setMaximumSize(QSize(64, 64));
        outViewTopRight->setStyleSheet(QLatin1String("background-color:rgb(179, 179, 179);\n"
"border-color:rgb(51, 51, 51);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"color:white;"));
        outViewTopRight->setAlignment(Qt::AlignCenter);
        outViewTopRight->setWordWrap(true);

        gridLayout_2->addWidget(outViewTopRight, 1, 1, 1, 1);

        outViewBottomLeft = new QLabel(groupBox_3);
        outViewBottomLeft->setObjectName(QStringLiteral("outViewBottomLeft"));
        outViewBottomLeft->setMinimumSize(QSize(64, 64));
        outViewBottomLeft->setMaximumSize(QSize(64, 64));
        outViewBottomLeft->setStyleSheet(QLatin1String("background-color:rgb(179, 179, 179);\n"
"border-color:rgb(51, 51, 51);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"color:white;"));
        outViewBottomLeft->setAlignment(Qt::AlignCenter);
        outViewBottomLeft->setWordWrap(true);

        gridLayout_2->addWidget(outViewBottomLeft, 2, 0, 1, 1);

        outViewBottomRight = new QLabel(groupBox_3);
        outViewBottomRight->setObjectName(QStringLiteral("outViewBottomRight"));
        outViewBottomRight->setMinimumSize(QSize(64, 64));
        outViewBottomRight->setMaximumSize(QSize(64, 64));
        outViewBottomRight->setStyleSheet(QLatin1String("background-color:rgb(179, 179, 179);\n"
"border-color:rgb(51, 51, 51);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"color:white;"));
        outViewBottomRight->setAlignment(Qt::AlignCenter);
        outViewBottomRight->setWordWrap(true);

        gridLayout_2->addWidget(outViewBottomRight, 2, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 213, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_7 = new QVBoxLayout(widget_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        grpLayoutRadio = new QGroupBox(widget_3);
        grpLayoutRadio->setObjectName(QStringLiteral("grpLayoutRadio"));
        gridLayout_4 = new QGridLayout(grpLayoutRadio);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        btnASC = new QRadioButton(grpLayoutRadio);
        btnASC->setObjectName(QStringLiteral("btnASC"));

        gridLayout_4->addWidget(btnASC, 0, 0, 1, 1);

        btnCAS = new QRadioButton(grpLayoutRadio);
        btnCAS->setObjectName(QStringLiteral("btnCAS"));

        gridLayout_4->addWidget(btnCAS, 0, 2, 1, 1);

        btnSAC = new QRadioButton(grpLayoutRadio);
        btnSAC->setObjectName(QStringLiteral("btnSAC"));

        gridLayout_4->addWidget(btnSAC, 0, 1, 1, 1);

        btnACS = new QRadioButton(grpLayoutRadio);
        btnACS->setObjectName(QStringLiteral("btnACS"));

        gridLayout_4->addWidget(btnACS, 1, 0, 1, 1);

        btnSCA = new QRadioButton(grpLayoutRadio);
        btnSCA->setObjectName(QStringLiteral("btnSCA"));

        gridLayout_4->addWidget(btnSCA, 1, 1, 1, 1);

        btnCSA = new QRadioButton(grpLayoutRadio);
        btnCSA->setObjectName(QStringLiteral("btnCSA"));

        gridLayout_4->addWidget(btnCSA, 1, 2, 1, 1);


        verticalLayout_7->addWidget(grpLayoutRadio);

        groupBox_5 = new QGroupBox(widget_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        chkLayoutAnteriorSide = new QCheckBox(groupBox_5);
        chkLayoutAnteriorSide->setObjectName(QStringLiteral("chkLayoutAnteriorSide"));

        verticalLayout_8->addWidget(chkLayoutAnteriorSide);

        chkLayoutRightLeft = new QCheckBox(groupBox_5);
        chkLayoutRightLeft->setObjectName(QStringLiteral("chkLayoutRightLeft"));

        verticalLayout_8->addWidget(chkLayoutRightLeft);


        verticalLayout_7->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget_3);

        horizontalLayout->setStretch(1, 1);
        tabWidget->addTab(tab, QString());

        verticalLayout_5->addWidget(tabWidget);

        stack->addWidget(pageLayout);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_5 = new QHBoxLayout(page);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(page);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_8 = new QGroupBox(tab_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_13 = new QVBoxLayout(groupBox_8);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        treeVisualElements = new QTreeView(groupBox_8);
        treeVisualElements->setObjectName(QStringLiteral("treeVisualElements"));
        treeVisualElements->header()->setVisible(false);

        verticalLayout_13->addWidget(treeVisualElements);


        horizontalLayout_6->addWidget(groupBox_8);

        grpAppearance = new QGroupBox(tab_2);
        grpAppearance->setObjectName(QStringLiteral("grpAppearance"));
        grpAppearance->setStyleSheet(QStringLiteral(""));
        verticalLayout_12 = new QVBoxLayout(grpAppearance);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        widget_7 = new QWidget(grpAppearance);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        formLayout_3 = new QFormLayout(widget_7);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setVerticalSpacing(5);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        chkElementVisible = new QCheckBox(widget_7);
        chkElementVisible->setObjectName(QStringLiteral("chkElementVisible"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, chkElementVisible);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(1, QFormLayout::FieldRole, verticalSpacer_7);

        labelElementColor = new QLabel(widget_7);
        labelElementColor->setObjectName(QStringLiteral("labelElementColor"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, labelElementColor);

        btnElementColor = new QColorButtonWidget(widget_7);
        btnElementColor->setObjectName(QStringLiteral("btnElementColor"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, btnElementColor);

        labelElementOpacity = new QLabel(widget_7);
        labelElementOpacity->setObjectName(QStringLiteral("labelElementOpacity"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, labelElementOpacity);

        verticalSpacer_12 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(4, QFormLayout::FieldRole, verticalSpacer_12);

        labelElementLineThickness = new QLabel(widget_7);
        labelElementLineThickness->setObjectName(QStringLiteral("labelElementLineThickness"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, labelElementLineThickness);

        inElementThickness = new QDoubleSpinBox(widget_7);
        inElementThickness->setObjectName(QStringLiteral("inElementThickness"));
        inElementThickness->setMinimumSize(QSize(80, 0));

        formLayout_3->setWidget(8, QFormLayout::FieldRole, inElementThickness);

        chkElementAntiAlias = new QCheckBox(widget_7);
        chkElementAntiAlias->setObjectName(QStringLiteral("chkElementAntiAlias"));

        formLayout_3->setWidget(9, QFormLayout::FieldRole, chkElementAntiAlias);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(10, QFormLayout::FieldRole, verticalSpacer_10);

        labelElementDashSpacing = new QLabel(widget_7);
        labelElementDashSpacing->setObjectName(QStringLiteral("labelElementDashSpacing"));

        formLayout_3->setWidget(11, QFormLayout::LabelRole, labelElementDashSpacing);

        inElementDashSpacing = new QSpinBox(widget_7);
        inElementDashSpacing->setObjectName(QStringLiteral("inElementDashSpacing"));
        inElementDashSpacing->setMinimumSize(QSize(80, 0));

        formLayout_3->setWidget(11, QFormLayout::FieldRole, inElementDashSpacing);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_3->setItem(13, QFormLayout::FieldRole, verticalSpacer_6);

        labelElementFontSize = new QLabel(widget_7);
        labelElementFontSize->setObjectName(QStringLiteral("labelElementFontSize"));

        formLayout_3->setWidget(14, QFormLayout::LabelRole, labelElementFontSize);

        inElementFontSize = new QSpinBox(widget_7);
        inElementFontSize->setObjectName(QStringLiteral("inElementFontSize"));
        inElementFontSize->setMinimumSize(QSize(80, 0));

        formLayout_3->setWidget(14, QFormLayout::FieldRole, inElementFontSize);

        inElementOpacity = new QDoubleSlider(widget_7);
        inElementOpacity->setObjectName(QStringLiteral("inElementOpacity"));
        inElementOpacity->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, inElementOpacity);


        verticalLayout_12->addWidget(widget_7);

        widget_14 = new QWidget(grpAppearance);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_10 = new QHBoxLayout(widget_14);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        btnElementReset = new QPushButton(widget_14);
        btnElementReset->setObjectName(QStringLiteral("btnElementReset"));

        horizontalLayout_10->addWidget(btnElementReset);

        btnElementResetAll = new QPushButton(widget_14);
        btnElementResetAll->setObjectName(QStringLiteral("btnElementResetAll"));

        horizontalLayout_10->addWidget(btnElementResetAll);


        verticalLayout_12->addWidget(widget_14);


        horizontalLayout_6->addWidget(grpAppearance);

        horizontalLayout_6->setStretch(0, 1);
        tabWidget_2->addTab(tab_2, QString());

        horizontalLayout_5->addWidget(tabWidget_2);

        stack->addWidget(page);
        pageRendering = new QWidget();
        pageRendering->setObjectName(QStringLiteral("pageRendering"));
        horizontalLayout_2 = new QHBoxLayout(pageRendering);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget_3 = new QTabWidget(pageRendering);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chkGaussianSmooth = new QCheckBox(tab_4);
        chkGaussianSmooth->setObjectName(QStringLiteral("chkGaussianSmooth"));

        verticalLayout_2->addWidget(chkGaussianSmooth);

        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_9);

        inGaussianSmoothDeviation = new QDoubleSpinBox(widget);
        inGaussianSmoothDeviation->setObjectName(QStringLiteral("inGaussianSmoothDeviation"));
        inGaussianSmoothDeviation->setMinimumSize(QSize(80, 0));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, inGaussianSmoothDeviation);


        horizontalLayout_4->addWidget(widget);

        widget_5 = new QWidget(groupBox_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        formLayout_5 = new QFormLayout(widget_5);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_15 = new QLabel(widget_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setWordWrap(true);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        inGaussianSmoothMaxError = new QDoubleSpinBox(widget_5);
        inGaussianSmoothMaxError->setObjectName(QStringLiteral("inGaussianSmoothMaxError"));
        inGaussianSmoothMaxError->setMinimumSize(QSize(80, 0));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, inGaussianSmoothMaxError);


        horizontalLayout_4->addWidget(widget_5);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer_13 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_13);

        chkMeshSmooth = new QCheckBox(tab_4);
        chkMeshSmooth->setObjectName(QStringLiteral("chkMeshSmooth"));

        verticalLayout_2->addWidget(chkMeshSmooth);

        groupBox_12 = new QGroupBox(tab_4);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(groupBox_12);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        formLayout_6 = new QFormLayout(widget_6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_16 = new QLabel(widget_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_16);

        inMeshSmoothConvergence = new QDoubleSpinBox(widget_6);
        inMeshSmoothConvergence->setObjectName(QStringLiteral("inMeshSmoothConvergence"));
        inMeshSmoothConvergence->setMinimumSize(QSize(80, 0));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, inMeshSmoothConvergence);

        inMeshSmoothIterations = new QDoubleSpinBox(widget_6);
        inMeshSmoothIterations->setObjectName(QStringLiteral("inMeshSmoothIterations"));
        inMeshSmoothIterations->setMinimumSize(QSize(80, 0));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, inMeshSmoothIterations);

        label_18 = new QLabel(widget_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_18);


        gridLayout_3->addWidget(widget_6, 0, 0, 1, 1);

        widget_8 = new QWidget(groupBox_12);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        formLayout_7 = new QFormLayout(widget_8);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        label_17 = new QLabel(widget_8);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_17);

        inMeshSmoothFeatureAngle = new QDoubleSpinBox(widget_8);
        inMeshSmoothFeatureAngle->setObjectName(QStringLiteral("inMeshSmoothFeatureAngle"));
        inMeshSmoothFeatureAngle->setMinimumSize(QSize(80, 0));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, inMeshSmoothFeatureAngle);

        inMeshSmoothRelaxation = new QDoubleSpinBox(widget_8);
        inMeshSmoothRelaxation->setObjectName(QStringLiteral("inMeshSmoothRelaxation"));
        inMeshSmoothRelaxation->setMinimumSize(QSize(80, 0));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, inMeshSmoothRelaxation);

        label_19 = new QLabel(widget_8);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_19);


        gridLayout_3->addWidget(widget_8, 0, 1, 1, 1);

        widget_10 = new QWidget(groupBox_12);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_7 = new QHBoxLayout(widget_10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        chkMeshSmoothFeatureEdgeSmoothing = new QCheckBox(widget_10);
        chkMeshSmoothFeatureEdgeSmoothing->setObjectName(QStringLiteral("chkMeshSmoothFeatureEdgeSmoothing"));

        horizontalLayout_7->addWidget(chkMeshSmoothFeatureEdgeSmoothing);

        chkMeshSmoothBoundarySmoothing = new QCheckBox(widget_10);
        chkMeshSmoothBoundarySmoothing->setObjectName(QStringLiteral("chkMeshSmoothBoundarySmoothing"));

        horizontalLayout_7->addWidget(chkMeshSmoothBoundarySmoothing);


        gridLayout_3->addWidget(widget_10, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_12);

        widget_9 = new QWidget(tab_4);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        verticalLayout_2->addWidget(widget_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        tabWidget_3->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        chkDecimate = new QCheckBox(tab_5);
        chkDecimate->setObjectName(QStringLiteral("chkDecimate"));

        verticalLayout_3->addWidget(chkDecimate);

        groupBox_13 = new QGroupBox(tab_5);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout_5 = new QGridLayout(groupBox_13);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_11 = new QWidget(groupBox_13);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        formLayout_8 = new QFormLayout(widget_11);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_20 = new QLabel(widget_11);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_20);

        inDecimateTargetReduction = new QDoubleSpinBox(widget_11);
        inDecimateTargetReduction->setObjectName(QStringLiteral("inDecimateTargetReduction"));
        inDecimateTargetReduction->setMinimumSize(QSize(80, 0));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, inDecimateTargetReduction);

        label_21 = new QLabel(widget_11);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_21);

        inDecimateMaxError = new QDoubleSpinBox(widget_11);
        inDecimateMaxError->setObjectName(QStringLiteral("inDecimateMaxError"));
        inDecimateMaxError->setMinimumSize(QSize(80, 0));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, inDecimateMaxError);


        gridLayout_5->addWidget(widget_11, 0, 0, 1, 1);

        widget_12 = new QWidget(groupBox_13);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        formLayout_9 = new QFormLayout(widget_12);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_25 = new QLabel(widget_12);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_25);

        inDecimateFeatureAngle = new QDoubleSpinBox(widget_12);
        inDecimateFeatureAngle->setObjectName(QStringLiteral("inDecimateFeatureAngle"));
        inDecimateFeatureAngle->setMinimumSize(QSize(80, 0));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, inDecimateFeatureAngle);


        gridLayout_5->addWidget(widget_12, 0, 1, 1, 1);

        widget_13 = new QWidget(groupBox_13);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_9 = new QHBoxLayout(widget_13);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        chkDecimatePreserveTopology = new QCheckBox(widget_13);
        chkDecimatePreserveTopology->setObjectName(QStringLiteral("chkDecimatePreserveTopology"));

        horizontalLayout_9->addWidget(chkDecimatePreserveTopology);


        gridLayout_5->addWidget(widget_13, 1, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_13);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);

        tabWidget_3->addTab(tab_5, QString());

        horizontalLayout_2->addWidget(tabWidget_3);

        stack->addWidget(pageRendering);
        pageTools = new QWidget();
        pageTools->setObjectName(QStringLiteral("pageTools"));
        verticalLayout_4 = new QVBoxLayout(pageTools);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget_5 = new QTabWidget(pageTools);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabPaintbrush = new QWidget();
        tabPaintbrush->setObjectName(QStringLiteral("tabPaintbrush"));
        verticalLayout_15 = new QVBoxLayout(tabPaintbrush);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupBox_4 = new QGroupBox(tabPaintbrush);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_4);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_11->addWidget(label);

        inPaintBrushInitSize = new QSpinBox(groupBox_4);
        inPaintBrushInitSize->setObjectName(QStringLiteral("inPaintBrushInitSize"));

        horizontalLayout_11->addWidget(inPaintBrushInitSize);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_11->addWidget(label_2);

        inPaintBrushMaxSize = new QSpinBox(groupBox_4);
        inPaintBrushMaxSize->setObjectName(QStringLiteral("inPaintBrushMaxSize"));

        horizontalLayout_11->addWidget(inPaintBrushMaxSize);


        verticalLayout_15->addWidget(groupBox_4);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_11);

        tabWidget_5->addTab(tabPaintbrush, QString());

        verticalLayout_4->addWidget(tabWidget_5);

        stack->addWidget(pageTools);

        gridLayout->addWidget(stack, 1, 1, 1, 1);

        listWidget = new QListWidget(PreferencesDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(140, 0));
        listWidget->setMaximumSize(QSize(140, 16777215));
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 0, 0, 2, 1);

        outPage = new QLabel(PreferencesDialog);
        outPage->setObjectName(QStringLiteral("outPage"));
        outPage->setStyleSheet(QLatin1String("font-size:14px;\n"
"font-weight:bold;"));

        gridLayout->addWidget(outPage, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelElementColor->setBuddy(btnElementColor);
        labelElementOpacity->setBuddy(btnElementColor);
        labelElementLineThickness->setBuddy(inElementThickness);
        labelElementDashSpacing->setBuddy(inElementDashSpacing);
        labelElementFontSize->setBuddy(inElementFontSize);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(listWidget, tabWidget_4);
        QWidget::setTabOrder(tabWidget_4, chkLinkedZoom);
        QWidget::setTabOrder(chkLinkedZoom, chkContinuousUpdate);
        QWidget::setTabOrder(chkContinuousUpdate, chkSynchronize);
        QWidget::setTabOrder(chkSynchronize, chkSyncCursor);
        QWidget::setTabOrder(chkSyncCursor, chkSyncZoom);
        QWidget::setTabOrder(chkSyncZoom, chkSyncPan);
        QWidget::setTabOrder(chkSyncPan, chkCheckForUpdates);
        QWidget::setTabOrder(chkCheckForUpdates, tabWidget);
        QWidget::setTabOrder(tabWidget, btnASC);
        QWidget::setTabOrder(btnASC, btnSAC);
        QWidget::setTabOrder(btnSAC, btnCAS);
        QWidget::setTabOrder(btnCAS, btnACS);
        QWidget::setTabOrder(btnACS, btnSCA);
        QWidget::setTabOrder(btnSCA, btnCSA);
        QWidget::setTabOrder(btnCSA, chkLayoutAnteriorSide);
        QWidget::setTabOrder(chkLayoutAnteriorSide, chkLayoutRightLeft);
        QWidget::setTabOrder(chkLayoutRightLeft, chkShowThumbnail);
        QWidget::setTabOrder(chkShowThumbnail, inThumbnailFraction);
        QWidget::setTabOrder(inThumbnailFraction, inThumbnailMaxSize);
        QWidget::setTabOrder(inThumbnailMaxSize, inInterpolationMode);
        QWidget::setTabOrder(inInterpolationMode, tabWidget_2);
        QWidget::setTabOrder(tabWidget_2, treeVisualElements);
        QWidget::setTabOrder(treeVisualElements, chkElementVisible);
        QWidget::setTabOrder(chkElementVisible, btnElementColor);
        QWidget::setTabOrder(btnElementColor, inElementThickness);
        QWidget::setTabOrder(inElementThickness, inElementDashSpacing);
        QWidget::setTabOrder(inElementDashSpacing, inElementFontSize);
        QWidget::setTabOrder(inElementFontSize, tabWidget_3);
        QWidget::setTabOrder(tabWidget_3, chkGaussianSmooth);
        QWidget::setTabOrder(chkGaussianSmooth, inGaussianSmoothDeviation);
        QWidget::setTabOrder(inGaussianSmoothDeviation, inGaussianSmoothMaxError);
        QWidget::setTabOrder(inGaussianSmoothMaxError, chkMeshSmooth);
        QWidget::setTabOrder(chkMeshSmooth, inMeshSmoothConvergence);
        QWidget::setTabOrder(inMeshSmoothConvergence, inMeshSmoothFeatureAngle);
        QWidget::setTabOrder(inMeshSmoothFeatureAngle, inMeshSmoothIterations);
        QWidget::setTabOrder(inMeshSmoothIterations, inMeshSmoothRelaxation);
        QWidget::setTabOrder(inMeshSmoothRelaxation, chkMeshSmoothFeatureEdgeSmoothing);
        QWidget::setTabOrder(chkMeshSmoothFeatureEdgeSmoothing, chkMeshSmoothBoundarySmoothing);
        QWidget::setTabOrder(chkMeshSmoothBoundarySmoothing, chkDecimate);
        QWidget::setTabOrder(chkDecimate, inDecimateTargetReduction);
        QWidget::setTabOrder(inDecimateTargetReduction, inDecimateFeatureAngle);
        QWidget::setTabOrder(inDecimateFeatureAngle, inDecimateMaxError);
        QWidget::setTabOrder(inDecimateMaxError, chkDecimatePreserveTopology);
        QWidget::setTabOrder(chkDecimatePreserveTopology, buttonBox);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        stack->setCurrentIndex(2);
        tabWidget_4->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences - ITK-SNAP", 0));
#ifndef QT_NO_TOOLTIP
        chkAutoContrast->setToolTip(QApplication::translate("PreferencesDialog", "When this option is checked, image contrast will be adjusted automatically based on the image histogram whenever a new image is loaded into ITK-SNAP.", 0));
#endif // QT_NO_TOOLTIP
        chkAutoContrast->setText(QApplication::translate("PreferencesDialog", "Automatically adjust contrast when loading images", 0));
        chkLinkedZoom->setText(QApplication::translate("PreferencesDialog", "Maintain same zoom factor in all slices (\"linked zoom\")", 0));
        chkContinuousUpdate->setText(QApplication::translate("PreferencesDialog", "Automatically update 3D mesh in a background process", 0));
        chkSynchronize->setText(QApplication::translate("PreferencesDialog", "Synchronize view between multiple ITK-SNAP sessions", 0));
        groupBox->setTitle(QString());
        chkSyncCursor->setText(QApplication::translate("PreferencesDialog", "Cursor position", 0));
        chkSyncZoom->setText(QApplication::translate("PreferencesDialog", "Zoom", 0));
        chkSyncPan->setText(QApplication::translate("PreferencesDialog", "Pan", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_6), QApplication::translate("PreferencesDialog", "Default Behavior", 0));
        chkCheckForUpdates->setText(QApplication::translate("PreferencesDialog", "Allow ITK-SNAP to check for updates periodically", 0));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QApplication::translate("PreferencesDialog", "Permissions", 0));
        groupBox_7->setTitle(QApplication::translate("PreferencesDialog", "Anatomic image display:", 0));
        label_5->setText(QApplication::translate("PreferencesDialog", "Interpolation mode:", 0));
        label_8->setText(QApplication::translate("PreferencesDialog", "Default layout for multiple images:", 0));
        label_10->setText(QApplication::translate("PreferencesDialog", "Default color map for overlayed images:", 0));
        groupBox_6->setTitle(QApplication::translate("PreferencesDialog", "Zoom Thumbnail:", 0));
        chkShowThumbnail->setText(QApplication::translate("PreferencesDialog", "Show thumbnail when the slice does not fit in window", 0));
        label_6->setText(QApplication::translate("PreferencesDialog", "Thumbnail size, relative to slice:", 0));
        inThumbnailFraction->setSuffix(QApplication::translate("PreferencesDialog", "%", 0));
        inThumbnailMaxSize->setSuffix(QApplication::translate("PreferencesDialog", " px", 0));
        label_7->setText(QApplication::translate("PreferencesDialog", "Maximum thumbnail size:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PreferencesDialog", "Display", 0));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialog", "Current screen layout:", 0));
        outViewTopLeft->setText(QApplication::translate("PreferencesDialog", "Axial", 0));
        outViewTopRight->setText(QApplication::translate("PreferencesDialog", "Coronal", 0));
        outViewBottomLeft->setText(QApplication::translate("PreferencesDialog", "3D View", 0));
        outViewBottomRight->setText(QApplication::translate("PreferencesDialog", "Sagittal", 0));
        grpLayoutRadio->setTitle(QApplication::translate("PreferencesDialog", "Available Layouts:", 0));
        btnASC->setText(QApplication::translate("PreferencesDialog", "ASC", 0));
        btnCAS->setText(QApplication::translate("PreferencesDialog", "CAS", 0));
        btnSAC->setText(QApplication::translate("PreferencesDialog", "SAC", 0));
        btnACS->setText(QApplication::translate("PreferencesDialog", "ACS", 0));
        btnSCA->setText(QApplication::translate("PreferencesDialog", "SCA", 0));
        btnCSA->setText(QApplication::translate("PreferencesDialog", "CSA", 0));
        groupBox_5->setTitle(QApplication::translate("PreferencesDialog", "Additional options:", 0));
        chkLayoutAnteriorSide->setText(QApplication::translate("PreferencesDialog", "Display anterior on the left", 0));
        chkLayoutRightLeft->setText(QApplication::translate("PreferencesDialog", "Patient right is screen left", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "Layout", 0));
        groupBox_8->setTitle(QApplication::translate("PreferencesDialog", "Visual elements:", 0));
        grpAppearance->setTitle(QApplication::translate("PreferencesDialog", "Appearance:", 0));
        chkElementVisible->setText(QApplication::translate("PreferencesDialog", "Visible", 0));
        labelElementColor->setText(QApplication::translate("PreferencesDialog", "Color:", 0));
        labelElementOpacity->setText(QApplication::translate("PreferencesDialog", "Opacity:", 0));
        labelElementLineThickness->setText(QApplication::translate("PreferencesDialog", "Line thickness:", 0));
        chkElementAntiAlias->setText(QApplication::translate("PreferencesDialog", "Smooth ", 0));
        labelElementDashSpacing->setText(QApplication::translate("PreferencesDialog", "Dash spacing:", 0));
        labelElementFontSize->setText(QApplication::translate("PreferencesDialog", "Font size:", 0));
#ifndef QT_NO_TOOLTIP
        btnElementReset->setToolTip(QApplication::translate("PreferencesDialog", "Resets the appearance of the selected visual elements to its default", 0));
#endif // QT_NO_TOOLTIP
        btnElementReset->setText(QApplication::translate("PreferencesDialog", "Reset", 0));
#ifndef QT_NO_TOOLTIP
        btnElementResetAll->setToolTip(QApplication::translate("PreferencesDialog", "Resets the appearance of all visual elements to their defaults", 0));
#endif // QT_NO_TOOLTIP
        btnElementResetAll->setText(QApplication::translate("PreferencesDialog", "Reset All", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("PreferencesDialog", "Appearance", 0));
        chkGaussianSmooth->setText(QApplication::translate("PreferencesDialog", "Gaussian image smoothing (slow, improves display quality)", 0));
        groupBox_2->setTitle(QString());
        label_9->setText(QApplication::translate("PreferencesDialog", "Standard deviation:", 0));
        label_15->setText(QApplication::translate("PreferencesDialog", "Approximation error max:", 0));
        chkMeshSmooth->setText(QApplication::translate("PreferencesDialog", "Laplacian mesh smoothing (slow, improves mesh quality)", 0));
        groupBox_12->setTitle(QString());
        label_16->setText(QApplication::translate("PreferencesDialog", "Convergence:", 0));
        label_18->setText(QApplication::translate("PreferencesDialog", "Iterations:", 0));
        label_17->setText(QApplication::translate("PreferencesDialog", "Feature angle:", 0));
        label_19->setText(QApplication::translate("PreferencesDialog", "Relaxation:", 0));
        chkMeshSmoothFeatureEdgeSmoothing->setText(QApplication::translate("PreferencesDialog", "Feature edge smoothing", 0));
        chkMeshSmoothBoundarySmoothing->setText(QApplication::translate("PreferencesDialog", "Boundary smoothing", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("PreferencesDialog", "Smoothing", 0));
        chkDecimate->setText(QApplication::translate("PreferencesDialog", "Decimate mesh (reduces number of polygons)", 0));
        groupBox_13->setTitle(QString());
        label_20->setText(QApplication::translate("PreferencesDialog", "Target reduction:", 0));
        label_21->setText(QApplication::translate("PreferencesDialog", "Maximum error:", 0));
        label_25->setText(QApplication::translate("PreferencesDialog", "Feature angle:", 0));
        chkDecimatePreserveTopology->setText(QApplication::translate("PreferencesDialog", "Preserve topology", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("PreferencesDialog", "Decimation", 0));
        groupBox_4->setTitle(QApplication::translate("PreferencesDialog", "Paintbrush size control defaults:", 0));
        label->setText(QApplication::translate("PreferencesDialog", "Initial size:", 0));
        label_2->setText(QApplication::translate("PreferencesDialog", "Maximum size:", 0));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tabPaintbrush), QApplication::translate("PreferencesDialog", "Paintbrush", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PreferencesDialog", "General", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("PreferencesDialog", "Slice Views", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("PreferencesDialog", "Appearance", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("PreferencesDialog", "3D Rendering", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("PreferencesDialog", "Tools", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        outPage->setText(QApplication::translate("PreferencesDialog", "General", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
