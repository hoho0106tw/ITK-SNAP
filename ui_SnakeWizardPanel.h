/********************************************************************************
** Form generated from reading UI file 'SnakeWizardPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEWIZARDPANEL_H
#define UI_SNAKEWIZARDPANEL_H

#include <QDoubleSlider.h>
#include <QDoubleSliderWithEditor.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorLabelQuickListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SnakeWizardPanel
{
public:
    QAction *actionIncreaseBubbleRadius;
    QAction *actionDecreaseBubbleRadius;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *boxStepInfo;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackStepInfo;
    QWidget *pgInfoPreproc;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QWidget *pgInfoBubbles;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_11;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    QLabel *pgInfoEvolution;
    QGroupBox *grpPreprocActions;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stack;
    QWidget *pgPreproc;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *inPreprocessMode;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *stackPreprocess;
    QWidget *pgThreshold;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_9;
    QWidget *grpThreshMode;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btnThreshUpper;
    QToolButton *btnThreshLower;
    QToolButton *btnThreshTwoSided;
    QDoubleSlider *inThreshLowerSlider;
    QDoubleSlider *inThreshUpperSlider;
    QDoubleSpinBox *inThreshLowerSpin;
    QDoubleSpinBox *inThreshUpperSpin;
    QLabel *label_18;
    QPushButton *btnThreshDetail;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_19;
    QWidget *pgCluster;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QSpinBox *inClusterActive;
    QSpinBox *inClusterCount;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnClusterDetail;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btnClusterReinitialize;
    QToolButton *btnClusterIterate;
    QToolButton *btnClusterIterateMany;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QWidget *pgClassify;
    QGridLayout *gridLayout_5;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    ColorLabelQuickListWidget *boxLabelQuickList;
    QPushButton *btnClassifyDetail;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_9;
    QPushButton *btnClassifyClearExamples;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_12;
    QLabel *label_25;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *verticalSpacer_16;
    QPushButton *btnClassifyTrain;
    QListView *lstClassifyForeground;
    QWidget *pgUserSpeed;
    QGridLayout *gridLayout_7;
    QPushButton *btnLoadSpeed;
    QRadioButton *radioButton_2;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_21;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_12;
    QWidget *pgEdge;
    QGridLayout *gridLayout_6;
    QDoubleSlider *inEdgeScaleSlider;
    QDoubleSpinBox *inEdgeScale;
    QLabel *label_23;
    QPushButton *btnEdgeDetail;
    QSpacerItem *verticalSpacer_15;
    QFrame *line_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_7;
    QPushButton *btnNextPreproc;
    QWidget *pgBubbles;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QPushButton *btnAddBubble;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QDoubleSliderWithEditor *inBubbleRadius;
    QLabel *label_8;
    QTableView *tableBubbleList;
    QPushButton *btnRemoveBubble;
    QFrame *line_3;
    QLabel *label_16;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btnBubbleBack;
    QPushButton *btnBubbleNext;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_8;
    QWidget *pgEvolution;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEvolutionParameters;
    QFrame *line_5;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnRewind;
    QToolButton *btnPlay;
    QToolButton *btnSingleStep;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_7;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *outIteration;
    QSpinBox *inStepSize;
    QFrame *line_4;
    QLabel *label_17;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *btnEvolutionBack;
    QPushButton *btnEvolutionNext;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnCancel;

    void setupUi(QWidget *SnakeWizardPanel)
    {
        if (SnakeWizardPanel->objectName().isEmpty())
            SnakeWizardPanel->setObjectName(QStringLiteral("SnakeWizardPanel"));
        SnakeWizardPanel->resize(191, 654);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SnakeWizardPanel->sizePolicy().hasHeightForWidth());
        SnakeWizardPanel->setSizePolicy(sizePolicy);
        SnakeWizardPanel->setMaximumSize(QSize(191, 16777215));
        SnakeWizardPanel->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}\n"
"QGroupBox {\n"
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
"\n"
"\n"
""));
        actionIncreaseBubbleRadius = new QAction(SnakeWizardPanel);
        actionIncreaseBubbleRadius->setObjectName(QStringLiteral("actionIncreaseBubbleRadius"));
        actionDecreaseBubbleRadius = new QAction(SnakeWizardPanel);
        actionDecreaseBubbleRadius->setObjectName(QStringLiteral("actionDecreaseBubbleRadius"));
        verticalLayout_3 = new QVBoxLayout(SnakeWizardPanel);
        verticalLayout_3->setSpacing(12);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        boxStepInfo = new QGroupBox(SnakeWizardPanel);
        boxStepInfo->setObjectName(QStringLiteral("boxStepInfo"));
        boxStepInfo->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(boxStepInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackStepInfo = new QStackedWidget(boxStepInfo);
        stackStepInfo->setObjectName(QStringLiteral("stackStepInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackStepInfo->sizePolicy().hasHeightForWidth());
        stackStepInfo->setSizePolicy(sizePolicy1);
        pgInfoPreproc = new QWidget();
        pgInfoPreproc->setObjectName(QStringLiteral("pgInfoPreproc"));
        verticalLayout_6 = new QVBoxLayout(pgInfoPreproc);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(pgInfoPreproc);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        label_10->setStyleSheet(QStringLiteral("font-size:10px;"));
        label_10->setWordWrap(true);

        verticalLayout_6->addWidget(label_10);

        stackStepInfo->addWidget(pgInfoPreproc);
        pgInfoBubbles = new QWidget();
        pgInfoBubbles->setObjectName(QStringLiteral("pgInfoBubbles"));
        verticalLayout_8 = new QVBoxLayout(pgInfoBubbles);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(pgInfoBubbles);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(16777215, 16777215));
        label_11->setStyleSheet(QStringLiteral("font-size:10px;"));
        label_11->setWordWrap(true);

        verticalLayout_8->addWidget(label_11);

        stackStepInfo->addWidget(pgInfoBubbles);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pgInfoEvolution = new QLabel(page);
        pgInfoEvolution->setObjectName(QStringLiteral("pgInfoEvolution"));
        pgInfoEvolution->setMaximumSize(QSize(16777215, 16777215));
        pgInfoEvolution->setStyleSheet(QStringLiteral("font-size:10px;"));
        pgInfoEvolution->setWordWrap(true);

        verticalLayout_9->addWidget(pgInfoEvolution);

        stackStepInfo->addWidget(page);

        verticalLayout->addWidget(stackStepInfo);


        verticalLayout_3->addWidget(boxStepInfo);

        grpPreprocActions = new QGroupBox(SnakeWizardPanel);
        grpPreprocActions->setObjectName(QStringLiteral("grpPreprocActions"));
        sizePolicy1.setHeightForWidth(grpPreprocActions->sizePolicy().hasHeightForWidth());
        grpPreprocActions->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(grpPreprocActions);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 6, 0, 0);
        stack = new QStackedWidget(grpPreprocActions);
        stack->setObjectName(QStringLiteral("stack"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stack->sizePolicy().hasHeightForWidth());
        stack->setSizePolicy(sizePolicy2);
        pgPreproc = new QWidget();
        pgPreproc->setObjectName(QStringLiteral("pgPreproc"));
        verticalLayout_7 = new QVBoxLayout(pgPreproc);
        verticalLayout_7->setSpacing(4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(pgPreproc);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        horizontalLayout->addWidget(label_2);


        verticalLayout_7->addWidget(widget_2);

        inPreprocessMode = new QComboBox(pgPreproc);
        inPreprocessMode->setObjectName(QStringLiteral("inPreprocessMode"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inPreprocessMode->sizePolicy().hasHeightForWidth());
        inPreprocessMode->setSizePolicy(sizePolicy3);
        inPreprocessMode->setMinimumSize(QSize(150, 0));

        verticalLayout_7->addWidget(inPreprocessMode);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        line = new QFrame(pgPreproc);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QLatin1String("border-top:  1px solid rgb(164, 164, 164);\n"
"border-bottom: 1px solid rgb(164,164, 164);\n"
"border-left: 0px;\n"
"border-right: 0px;"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_7->addWidget(line);

        widget_4 = new QWidget(pgPreproc);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_7->addWidget(widget_4);

        stackPreprocess = new QStackedWidget(pgPreproc);
        stackPreprocess->setObjectName(QStringLiteral("stackPreprocess"));
        pgThreshold = new QWidget();
        pgThreshold->setObjectName(QStringLiteral("pgThreshold"));
        gridLayout_3 = new QGridLayout(pgThreshold);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 0, -1);
        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_9, 2, 0, 1, 2);

        grpThreshMode = new QWidget(pgThreshold);
        grpThreshMode->setObjectName(QStringLiteral("grpThreshMode"));
        grpThreshMode->setMinimumSize(QSize(0, 40));
        horizontalLayout_5 = new QHBoxLayout(grpThreshMode);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        btnThreshUpper = new QToolButton(grpThreshMode);
        btnThreshUpper->setObjectName(QStringLiteral("btnThreshUpper"));
        btnThreshUpper->setMaximumSize(QSize(28, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/thresh_both.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThreshUpper->setIcon(icon);
        btnThreshUpper->setIconSize(QSize(22, 22));
        btnThreshUpper->setCheckable(true);
        btnThreshUpper->setAutoExclusive(true);

        horizontalLayout_5->addWidget(btnThreshUpper);

        btnThreshLower = new QToolButton(grpThreshMode);
        btnThreshLower->setObjectName(QStringLiteral("btnThreshLower"));
        btnThreshLower->setMaximumSize(QSize(28, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/thresh_lower.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThreshLower->setIcon(icon1);
        btnThreshLower->setIconSize(QSize(22, 22));
        btnThreshLower->setCheckable(true);
        btnThreshLower->setChecked(true);
        btnThreshLower->setAutoExclusive(true);

        horizontalLayout_5->addWidget(btnThreshLower);

        btnThreshTwoSided = new QToolButton(grpThreshMode);
        btnThreshTwoSided->setObjectName(QStringLiteral("btnThreshTwoSided"));
        btnThreshTwoSided->setMaximumSize(QSize(28, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/thresh_upper.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThreshTwoSided->setIcon(icon2);
        btnThreshTwoSided->setIconSize(QSize(22, 22));
        btnThreshTwoSided->setCheckable(true);
        btnThreshTwoSided->setAutoExclusive(true);

        horizontalLayout_5->addWidget(btnThreshTwoSided);


        gridLayout_3->addWidget(grpThreshMode, 1, 0, 1, 2);

        inThreshLowerSlider = new QDoubleSlider(pgThreshold);
        inThreshLowerSlider->setObjectName(QStringLiteral("inThreshLowerSlider"));
        inThreshLowerSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(inThreshLowerSlider, 4, 0, 1, 2);

        inThreshUpperSlider = new QDoubleSlider(pgThreshold);
        inThreshUpperSlider->setObjectName(QStringLiteral("inThreshUpperSlider"));
        inThreshUpperSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(inThreshUpperSlider, 8, 0, 1, 2);

        inThreshLowerSpin = new QDoubleSpinBox(pgThreshold);
        inThreshLowerSpin->setObjectName(QStringLiteral("inThreshLowerSpin"));
        inThreshLowerSpin->setKeyboardTracking(false);

        gridLayout_3->addWidget(inThreshLowerSpin, 3, 1, 1, 1);

        inThreshUpperSpin = new QDoubleSpinBox(pgThreshold);
        inThreshUpperSpin->setObjectName(QStringLiteral("inThreshUpperSpin"));
        inThreshUpperSpin->setKeyboardTracking(false);

        gridLayout_3->addWidget(inThreshUpperSpin, 6, 1, 1, 1);

        label_18 = new QLabel(pgThreshold);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 6, 0, 1, 1);

        btnThreshDetail = new QPushButton(pgThreshold);
        btnThreshDetail->setObjectName(QStringLiteral("btnThreshDetail"));
        btnThreshDetail->setMinimumSize(QSize(120, 0));
        btnThreshDetail->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(btnThreshDetail, 10, 0, 1, 2, Qt::AlignHCenter);

        label_15 = new QLabel(pgThreshold);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_8, 5, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 9, 0, 1, 2);

        label_19 = new QLabel(pgThreshold);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 0, 0, 1, 2);

        stackPreprocess->addWidget(pgThreshold);
        pgCluster = new QWidget();
        pgCluster->setObjectName(QStringLiteral("pgCluster"));
        gridLayout_4 = new QGridLayout(pgCluster);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 12);
        label_5 = new QLabel(pgCluster);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        inClusterActive = new QSpinBox(pgCluster);
        inClusterActive->setObjectName(QStringLiteral("inClusterActive"));

        gridLayout_4->addWidget(inClusterActive, 2, 1, 1, 1);

        inClusterCount = new QSpinBox(pgCluster);
        inClusterCount->setObjectName(QStringLiteral("inClusterCount"));

        gridLayout_4->addWidget(inClusterCount, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 6, 0, 1, 1);

        btnClusterDetail = new QPushButton(pgCluster);
        btnClusterDetail->setObjectName(QStringLiteral("btnClusterDetail"));
        btnClusterDetail->setMinimumSize(QSize(120, 0));
        btnClusterDetail->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(btnClusterDetail, 8, 0, 1, 2, Qt::AlignHCenter);

        label_3 = new QLabel(pgCluster);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        widget_3 = new QWidget(pgCluster);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btnClusterReinitialize = new QToolButton(widget_3);
        btnClusterReinitialize->setObjectName(QStringLiteral("btnClusterReinitialize"));
        btnClusterReinitialize->setMaximumSize(QSize(28, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/view-refresh-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClusterReinitialize->setIcon(icon3);
        btnClusterReinitialize->setIconSize(QSize(22, 22));

        horizontalLayout_4->addWidget(btnClusterReinitialize);

        btnClusterIterate = new QToolButton(widget_3);
        btnClusterIterate->setObjectName(QStringLiteral("btnClusterIterate"));
        btnClusterIterate->setMaximumSize(QSize(28, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/media-playback-start-1x-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClusterIterate->setIcon(icon4);
        btnClusterIterate->setIconSize(QSize(22, 22));

        horizontalLayout_4->addWidget(btnClusterIterate);

        btnClusterIterateMany = new QToolButton(widget_3);
        btnClusterIterateMany->setObjectName(QStringLiteral("btnClusterIterateMany"));
        btnClusterIterateMany->setMaximumSize(QSize(28, 28));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/media-playback-start-10x-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClusterIterateMany->setIcon(icon5);
        btnClusterIterateMany->setIconSize(QSize(22, 22));

        horizontalLayout_4->addWidget(btnClusterIterateMany);


        gridLayout_4->addWidget(widget_3, 5, 0, 1, 2);

        label_20 = new QLabel(pgCluster);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_4->addWidget(label_20, 4, 0, 1, 2);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_10, 3, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_11, 1, 0, 1, 1);

        stackPreprocess->addWidget(pgCluster);
        pgClassify = new QWidget();
        pgClassify->setObjectName(QStringLiteral("pgClassify"));
        gridLayout_5 = new QGridLayout(pgClassify);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(2);
        gridLayout_5->setContentsMargins(0, 0, 0, -1);
        widget_8 = new QWidget(pgClassify);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        gridLayout_5->addWidget(widget_8, 17, 0, 1, 1);

        boxLabelQuickList = new ColorLabelQuickListWidget(pgClassify);
        boxLabelQuickList->setObjectName(QStringLiteral("boxLabelQuickList"));
        boxLabelQuickList->setMinimumSize(QSize(0, 20));

        gridLayout_5->addWidget(boxLabelQuickList, 2, 0, 1, 1, Qt::AlignHCenter);

        btnClassifyDetail = new QPushButton(pgClassify);
        btnClassifyDetail->setObjectName(QStringLiteral("btnClassifyDetail"));
        btnClassifyDetail->setMinimumSize(QSize(120, 0));
        btnClassifyDetail->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(btnClassifyDetail, 18, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_17 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_17, 15, 0, 1, 1);

        label_9 = new QLabel(pgClassify);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 13, 0, 1, 1);

        btnClassifyClearExamples = new QPushButton(pgClassify);
        btnClassifyClearExamples->setObjectName(QStringLiteral("btnClassifyClearExamples"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnClassifyClearExamples->sizePolicy().hasHeightForWidth());
        btnClassifyClearExamples->setSizePolicy(sizePolicy4);
        btnClassifyClearExamples->setMinimumSize(QSize(140, 0));
        btnClassifyClearExamples->setMaximumSize(QSize(140, 16777215));

        gridLayout_5->addWidget(btnClassifyClearExamples, 4, 0, 1, 1, Qt::AlignHCenter);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_6, 12, 0, 1, 1);

        label_12 = new QLabel(pgClassify);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy5);
        label_12->setMinimumSize(QSize(0, 68));
        label_12->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64)"));
        label_12->setWordWrap(true);

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        label_25 = new QLabel(pgClassify);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy5.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy5);
        label_25->setMinimumSize(QSize(0, 56));
        label_25->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64)"));
        label_25->setWordWrap(true);

        gridLayout_5->addWidget(label_25, 6, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_14, 5, 0, 1, 1);

        verticalSpacer_18 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_18, 3, 0, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_16, 16, 0, 1, 1);

        btnClassifyTrain = new QPushButton(pgClassify);
        btnClassifyTrain->setObjectName(QStringLiteral("btnClassifyTrain"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(btnClassifyTrain->sizePolicy().hasHeightForWidth());
        btnClassifyTrain->setSizePolicy(sizePolicy6);
        btnClassifyTrain->setMinimumSize(QSize(140, 0));
        btnClassifyTrain->setMaximumSize(QSize(140, 16777215));
        QFont font;
        btnClassifyTrain->setFont(font);

        gridLayout_5->addWidget(btnClassifyTrain, 7, 0, 1, 1, Qt::AlignHCenter);

        lstClassifyForeground = new QListView(pgClassify);
        lstClassifyForeground->setObjectName(QStringLiteral("lstClassifyForeground"));
        lstClassifyForeground->setMaximumSize(QSize(165, 16777215));
        lstClassifyForeground->setStyleSheet(QLatin1String("QListView:!active\n"
"{\n"
"  selection-background-color: rgb(162, 204, 255);\n"
"}"));
        lstClassifyForeground->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstClassifyForeground->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstClassifyForeground->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_5->addWidget(lstClassifyForeground, 14, 0, 1, 1, Qt::AlignHCenter);

        stackPreprocess->addWidget(pgClassify);
        pgUserSpeed = new QWidget();
        pgUserSpeed->setObjectName(QStringLiteral("pgUserSpeed"));
        gridLayout_7 = new QGridLayout(pgUserSpeed);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(4);
        gridLayout_7->setContentsMargins(0, 0, 0, -1);
        btnLoadSpeed = new QPushButton(pgUserSpeed);
        btnLoadSpeed->setObjectName(QStringLiteral("btnLoadSpeed"));
        sizePolicy4.setHeightForWidth(btnLoadSpeed->sizePolicy().hasHeightForWidth());
        btnLoadSpeed->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(btnLoadSpeed, 2, 0, 1, 2);

        radioButton_2 = new QRadioButton(pgUserSpeed);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_7->addWidget(radioButton_2, 6, 1, 1, 1);

        label_22 = new QLabel(pgUserSpeed);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setWordWrap(true);

        gridLayout_7->addWidget(label_22, 4, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 5, 0, 1, 1);

        label_21 = new QLabel(pgUserSpeed);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral(""));
        label_21->setWordWrap(true);

        gridLayout_7->addWidget(label_21, 0, 0, 1, 2);

        radioButton = new QRadioButton(pgUserSpeed);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_7->addWidget(radioButton, 5, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_13, 1, 0, 1, 2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_12, 3, 0, 1, 2);

        stackPreprocess->addWidget(pgUserSpeed);
        pgEdge = new QWidget();
        pgEdge->setObjectName(QStringLiteral("pgEdge"));
        gridLayout_6 = new QGridLayout(pgEdge);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(4);
        gridLayout_6->setContentsMargins(0, 0, 0, -1);
        inEdgeScaleSlider = new QDoubleSlider(pgEdge);
        inEdgeScaleSlider->setObjectName(QStringLiteral("inEdgeScaleSlider"));
        inEdgeScaleSlider->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(inEdgeScaleSlider, 1, 0, 2, 3);

        inEdgeScale = new QDoubleSpinBox(pgEdge);
        inEdgeScale->setObjectName(QStringLiteral("inEdgeScale"));

        gridLayout_6->addWidget(inEdgeScale, 0, 2, 1, 1);

        label_23 = new QLabel(pgEdge);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_6->addWidget(label_23, 0, 0, 1, 2);

        btnEdgeDetail = new QPushButton(pgEdge);
        btnEdgeDetail->setObjectName(QStringLiteral("btnEdgeDetail"));
        btnEdgeDetail->setMinimumSize(QSize(120, 0));
        btnEdgeDetail->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btnEdgeDetail, 4, 0, 1, 3, Qt::AlignHCenter|Qt::AlignBottom);

        verticalSpacer_15 = new QSpacerItem(20, 196, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_15, 3, 0, 1, 1);

        stackPreprocess->addWidget(pgEdge);

        verticalLayout_7->addWidget(stackPreprocess);

        line_2 = new QFrame(pgPreproc);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setStyleSheet(QLatin1String("border-top:  1px solid rgb(164, 164, 164);\n"
"border-bottom: 1px solid rgb(164,164, 164);\n"
"border-left: 0px;\n"
"border-right: 0px;"));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_7->addWidget(line_2);

        widget_5 = new QWidget(pgPreproc);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_7->addWidget(widget_5);

        widget_9 = new QWidget(pgPreproc);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(widget_9);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy7);
        pushButton_7->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_9->addWidget(pushButton_7);

        btnNextPreproc = new QPushButton(widget_9);
        btnNextPreproc->setObjectName(QStringLiteral("btnNextPreproc"));
        sizePolicy7.setHeightForWidth(btnNextPreproc->sizePolicy().hasHeightForWidth());
        btnNextPreproc->setSizePolicy(sizePolicy7);
        btnNextPreproc->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_9->addWidget(btnNextPreproc);


        verticalLayout_7->addWidget(widget_9);

        stack->addWidget(pgPreproc);
        pgBubbles = new QWidget();
        pgBubbles->setObjectName(QStringLiteral("pgBubbles"));
        verticalLayout_4 = new QVBoxLayout(pgBubbles);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(pgBubbles);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        verticalLayout_4->addWidget(label_6);

        btnAddBubble = new QPushButton(pgBubbles);
        btnAddBubble->setObjectName(QStringLiteral("btnAddBubble"));
        sizePolicy6.setHeightForWidth(btnAddBubble->sizePolicy().hasHeightForWidth());
        btnAddBubble->setSizePolicy(sizePolicy6);

        verticalLayout_4->addWidget(btnAddBubble);

        widget_6 = new QWidget(pgBubbles);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_10 = new QVBoxLayout(widget_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(widget_6);

        label_7 = new QLabel(pgBubbles);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        inBubbleRadius = new QDoubleSliderWithEditor(pgBubbles);
        inBubbleRadius->setObjectName(QStringLiteral("inBubbleRadius"));
        sizePolicy3.setHeightForWidth(inBubbleRadius->sizePolicy().hasHeightForWidth());
        inBubbleRadius->setSizePolicy(sizePolicy3);
        inBubbleRadius->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(inBubbleRadius);

        label_8 = new QLabel(pgBubbles);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        tableBubbleList = new QTableView(pgBubbles);
        tableBubbleList->setObjectName(QStringLiteral("tableBubbleList"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tableBubbleList->sizePolicy().hasHeightForWidth());
        tableBubbleList->setSizePolicy(sizePolicy8);
        tableBubbleList->setMaximumSize(QSize(165, 120));
        tableBubbleList->setFont(font);
        tableBubbleList->setStyleSheet(QLatin1String("font-size: 10px;\n"
""));
        tableBubbleList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBubbleList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableBubbleList->setShowGrid(true);
        tableBubbleList->horizontalHeader()->setDefaultSectionSize(32);
        tableBubbleList->horizontalHeader()->setMinimumSectionSize(32);
        tableBubbleList->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableBubbleList->horizontalHeader()->setStretchLastSection(true);
        tableBubbleList->verticalHeader()->setVisible(false);
        tableBubbleList->verticalHeader()->setCascadingSectionResizes(true);
        tableBubbleList->verticalHeader()->setDefaultSectionSize(18);
        tableBubbleList->verticalHeader()->setMinimumSectionSize(18);

        verticalLayout_4->addWidget(tableBubbleList, 0, Qt::AlignHCenter);

        btnRemoveBubble = new QPushButton(pgBubbles);
        btnRemoveBubble->setObjectName(QStringLiteral("btnRemoveBubble"));
        sizePolicy6.setHeightForWidth(btnRemoveBubble->sizePolicy().hasHeightForWidth());
        btnRemoveBubble->setSizePolicy(sizePolicy6);

        verticalLayout_4->addWidget(btnRemoveBubble);

        line_3 = new QFrame(pgBubbles);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_3);

        label_16 = new QLabel(pgBubbles);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setWordWrap(true);

        verticalLayout_4->addWidget(label_16);

        widget_13 = new QWidget(pgBubbles);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_15 = new QHBoxLayout(widget_13);
        horizontalLayout_15->setSpacing(4);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        btnBubbleBack = new QPushButton(widget_13);
        btnBubbleBack->setObjectName(QStringLiteral("btnBubbleBack"));
        sizePolicy7.setHeightForWidth(btnBubbleBack->sizePolicy().hasHeightForWidth());
        btnBubbleBack->setSizePolicy(sizePolicy7);
        btnBubbleBack->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_15->addWidget(btnBubbleBack);

        btnBubbleNext = new QPushButton(widget_13);
        btnBubbleNext->setObjectName(QStringLiteral("btnBubbleNext"));
        sizePolicy7.setHeightForWidth(btnBubbleNext->sizePolicy().hasHeightForWidth());
        btnBubbleNext->setSizePolicy(sizePolicy7);
        btnBubbleNext->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_15->addWidget(btnBubbleNext);


        verticalLayout_4->addWidget(widget_13);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        widget_11 = new QWidget(pgBubbles);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_8 = new QHBoxLayout(widget_11);
        horizontalLayout_8->setSpacing(12);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(widget_11);

        stack->addWidget(pgBubbles);
        pgEvolution = new QWidget();
        pgEvolution->setObjectName(QStringLiteral("pgEvolution"));
        verticalLayout_5 = new QVBoxLayout(pgEvolution);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_14 = new QWidget(pgEvolution);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_12 = new QHBoxLayout(widget_14);
        horizontalLayout_12->setSpacing(12);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget_14);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16777215, 16777215));
        label_13->setWordWrap(true);

        horizontalLayout_12->addWidget(label_13);


        verticalLayout_5->addWidget(widget_14);

        widget_15 = new QWidget(pgEvolution);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_2 = new QHBoxLayout(widget_15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEvolutionParameters = new QPushButton(widget_15);
        btnEvolutionParameters->setObjectName(QStringLiteral("btnEvolutionParameters"));
        sizePolicy7.setHeightForWidth(btnEvolutionParameters->sizePolicy().hasHeightForWidth());
        btnEvolutionParameters->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(btnEvolutionParameters);


        verticalLayout_5->addWidget(widget_15);

        line_5 = new QFrame(pgEvolution);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_5);

        widget_16 = new QWidget(pgEvolution);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        horizontalLayout_13 = new QHBoxLayout(widget_16);
        horizontalLayout_13->setSpacing(12);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget_16);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setWordWrap(true);

        horizontalLayout_13->addWidget(label_14);


        verticalLayout_5->addWidget(widget_16);

        widget = new QWidget(pgEvolution);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(4, 4, 4, 4);
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnRewind = new QToolButton(widget);
        btnRewind->setObjectName(QStringLiteral("btnRewind"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/media-seek-backward-4.png"), QSize(), QIcon::Normal, QIcon::On);
        btnRewind->setIcon(icon6);
        btnRewind->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(btnRewind);

        btnPlay = new QToolButton(widget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/media-playback-start-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/root/media-playback-pause-4.png"), QSize(), QIcon::Normal, QIcon::On);
        icon7.addFile(QStringLiteral(":/root/media-playback-start-4.png"), QSize(), QIcon::Active, QIcon::Off);
        icon7.addFile(QStringLiteral(":/root/media-playback-pause-4.png"), QSize(), QIcon::Active, QIcon::On);
        icon7.addFile(QStringLiteral(":/root/media-playback-pause-4.png"), QSize(), QIcon::Selected, QIcon::On);
        btnPlay->setIcon(icon7);
        btnPlay->setIconSize(QSize(22, 22));
        btnPlay->setCheckable(true);

        horizontalLayout_6->addWidget(btnPlay);

        btnSingleStep = new QToolButton(widget);
        btnSingleStep->setObjectName(QStringLiteral("btnSingleStep"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/root/media-playback-singlestep.png"), QSize(), QIcon::Normal, QIcon::On);
        btnSingleStep->setIcon(icon8);
        btnSingleStep->setIconSize(QSize(22, 22));

        horizontalLayout_6->addWidget(btnSingleStep);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(widget);

        widget_7 = new QWidget(pgEvolution);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(widget_7);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        outIteration = new QSpinBox(widget_7);
        outIteration->setObjectName(QStringLiteral("outIteration"));
        outIteration->setReadOnly(true);
        outIteration->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outIteration->setMaximum(9999);

        gridLayout->addWidget(outIteration, 1, 1, 1, 1);

        inStepSize = new QSpinBox(widget_7);
        inStepSize->setObjectName(QStringLiteral("inStepSize"));

        gridLayout->addWidget(inStepSize, 1, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        verticalLayout_5->addWidget(widget_7);

        line_4 = new QFrame(pgEvolution);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_4);

        label_17 = new QLabel(pgEvolution);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setWordWrap(true);

        verticalLayout_5->addWidget(label_17);

        widget_18 = new QWidget(pgEvolution);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        horizontalLayout_16 = new QHBoxLayout(widget_18);
        horizontalLayout_16->setSpacing(4);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        btnEvolutionBack = new QPushButton(widget_18);
        btnEvolutionBack->setObjectName(QStringLiteral("btnEvolutionBack"));
        sizePolicy7.setHeightForWidth(btnEvolutionBack->sizePolicy().hasHeightForWidth());
        btnEvolutionBack->setSizePolicy(sizePolicy7);
        btnEvolutionBack->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_16->addWidget(btnEvolutionBack);

        btnEvolutionNext = new QPushButton(widget_18);
        btnEvolutionNext->setObjectName(QStringLiteral("btnEvolutionNext"));
        sizePolicy7.setHeightForWidth(btnEvolutionNext->sizePolicy().hasHeightForWidth());
        btnEvolutionNext->setSizePolicy(sizePolicy7);
        btnEvolutionNext->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_16->addWidget(btnEvolutionNext);


        verticalLayout_5->addWidget(widget_18);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stack->addWidget(pgEvolution);

        verticalLayout_2->addWidget(stack);


        verticalLayout_3->addWidget(grpPreprocActions);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        btnCancel = new QPushButton(SnakeWizardPanel);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        verticalLayout_3->addWidget(btnCancel);


        retranslateUi(SnakeWizardPanel);

        stackStepInfo->setCurrentIndex(0);
        stack->setCurrentIndex(0);
        stackPreprocess->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SnakeWizardPanel);
    } // setupUi

    void retranslateUi(QWidget *SnakeWizardPanel)
    {
        SnakeWizardPanel->setWindowTitle(QApplication::translate("SnakeWizardPanel", "Form", 0));
        actionIncreaseBubbleRadius->setText(QApplication::translate("SnakeWizardPanel", "Increase bubble radius", 0));
        actionIncreaseBubbleRadius->setShortcut(QApplication::translate("SnakeWizardPanel", "+", 0));
        actionDecreaseBubbleRadius->setText(QApplication::translate("SnakeWizardPanel", "Decrease bubble radius", 0));
#ifndef QT_NO_TOOLTIP
        actionDecreaseBubbleRadius->setToolTip(QApplication::translate("SnakeWizardPanel", "Decrease bubble radius", 0));
#endif // QT_NO_TOOLTIP
        actionDecreaseBubbleRadius->setShortcut(QApplication::translate("SnakeWizardPanel", "-", 0));
        boxStepInfo->setTitle(QApplication::translate("SnakeWizardPanel", "Current Stage:", 0));
        label_10->setText(QApplication::translate("SnakeWizardPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:10px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12px;\">Step 1/3</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12px; font-weight:600;\">Presegmentation</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("SnakeWizardPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:10px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12px;\">Step 2/3</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12px; font-weight:600;\">Initialization</span></p></body></html>", 0));
        pgInfoEvolution->setText(QApplication::translate("SnakeWizardPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:10px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12px;\">Step 3/3</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12px; font-weight:600;\">Evolution</span></p></body></html>", 0));
        grpPreprocActions->setTitle(QApplication::translate("SnakeWizardPanel", "Actions:", 0));
        label_2->setText(QApplication::translate("SnakeWizardPanel", "Presegmentation mode:", 0));
        inPreprocessMode->clear();
        inPreprocessMode->insertItems(0, QStringList()
         << QApplication::translate("SnakeWizardPanel", "Thresholding", 0)
         << QApplication::translate("SnakeWizardPanel", "Classification", 0)
         << QApplication::translate("SnakeWizardPanel", "Clustering", 0)
         << QApplication::translate("SnakeWizardPanel", "Edge Attraction", 0)
        );
#ifndef QT_NO_TOOLTIP
        stackPreprocess->setToolTip(QApplication::translate("SnakeWizardPanel", "Lower threshold only", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnThreshUpper->setToolTip(QApplication::translate("SnakeWizardPanel", "Upper and lower thresholds", 0));
#endif // QT_NO_TOOLTIP
        btnThreshUpper->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnThreshLower->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Lower threshold only</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnThreshLower->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnThreshTwoSided->setToolTip(QApplication::translate("SnakeWizardPanel", "Upper threshold only", 0));
#endif // QT_NO_TOOLTIP
        btnThreshTwoSided->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
        label_18->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Upper<br/>threshold:</p></body></html>", 0));
        btnThreshDetail->setText(QApplication::translate("SnakeWizardPanel", "More ...", 0));
        label_15->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Lower<br/>threshold:</p></body></html>", 0));
        label_19->setText(QApplication::translate("SnakeWizardPanel", "Threshold mode:", 0));
        label_5->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p align=\"right\">Foreground<br/>cluster:</p></body></html>", 0));
        btnClusterDetail->setText(QApplication::translate("SnakeWizardPanel", "More ...", 0));
        label_3->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p align=\"right\">Number of<br/>clusters:</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        btnClusterReinitialize->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Reinitialize the clusters</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClusterReinitialize->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnClusterIterate->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Perform one iteration of cluster computation</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClusterIterate->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnClusterIterateMany->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Perform ten iterations of cluster computation</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClusterIterateMany->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
        label_20->setText(QApplication::translate("SnakeWizardPanel", "Clustering iteration:", 0));
#ifndef QT_NO_TOOLTIP
        btnClassifyDetail->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p><span style=\" font-size:12pt;\">Display additional classification parameters</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClassifyDetail->setText(QApplication::translate("SnakeWizardPanel", "More ...", 0));
        label_9->setText(QApplication::translate("SnakeWizardPanel", "Foreground class(es):", 0));
#ifndef QT_NO_TOOLTIP
        btnClassifyClearExamples->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Clear all the examples of the tissue classes painted in the image. This is useful if you want to retrain your classifier using new examples. It is also a good idea to clear examples before pressing 'Next'.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClassifyClearExamples->setText(QApplication::translate("SnakeWizardPanel", "Clear Examples", 0));
        label_12->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Provide examples of two or more tissue classes by selecting the labels below and drawing on the image using the paintbrush tool.</p></body></html>", 0));
        label_25->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Next, train the classifier and select the tissue class that you wish to use for segmentation.</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        btnClassifyTrain->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>This button trains the random forest classifier. The classifier assigns a probability value to each voxel of belonging to the 'foreground' class vs. belonging to all other classes. You must train a classifier before proceeding to the next step.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnClassifyTrain->setText(QApplication::translate("SnakeWizardPanel", "Train Classifier", 0));
#ifndef QT_NO_TOOLTIP
        lstClassifyForeground->setToolTip(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Designate one or more classes as the &quot;foreground&quot; class(es). These are the classes that you want to apply segmentation to. The speed image is computed as the sum of probabilities of all the foreground classes, minus the sum of probabilities of the background classes.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnLoadSpeed->setText(QApplication::translate("SnakeWizardPanel", "Import Speed ...", 0));
        radioButton_2->setText(QApplication::translate("SnakeWizardPanel", "Region\n"
"competition", 0));
        label_22->setText(QApplication::translate("SnakeWizardPanel", "Which version of active contour method is the speed image intended for?", 0));
        label_21->setText(QApplication::translate("SnakeWizardPanel", "Use this mode to perform segmentation using a speed image  computed outside of ITK-SNAP.", 0));
        radioButton->setText(QApplication::translate("SnakeWizardPanel", "Edge attraction", 0));
        label_23->setText(QApplication::translate("SnakeWizardPanel", "<html><head/><body><p>Smoothing<br/>factor:</p></body></html>", 0));
        btnEdgeDetail->setText(QApplication::translate("SnakeWizardPanel", "More ...", 0));
        pushButton_7->setText(QApplication::translate("SnakeWizardPanel", "Back", 0));
        btnNextPreproc->setText(QApplication::translate("SnakeWizardPanel", "Next", 0));
        label_6->setText(QApplication::translate("SnakeWizardPanel", "Place bubbles in the image to intialize the contour", 0));
        btnAddBubble->setText(QApplication::translate("SnakeWizardPanel", "Add Bubble at Cursor", 0));
        btnAddBubble->setShortcut(QApplication::translate("SnakeWizardPanel", "Return", 0));
        label_7->setText(QApplication::translate("SnakeWizardPanel", "Bubble radius:", 0));
        label_8->setText(QApplication::translate("SnakeWizardPanel", "Active bubbles:", 0));
        btnRemoveBubble->setText(QApplication::translate("SnakeWizardPanel", "Delete Active Bubble", 0));
        btnRemoveBubble->setShortcut(QApplication::translate("SnakeWizardPanel", "Backspace", 0));
        label_16->setText(QApplication::translate("SnakeWizardPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:13px;\">Press 'Next&quot; to proceed to the next step.</span></p></body></html>", 0));
        btnBubbleBack->setText(QApplication::translate("SnakeWizardPanel", "Back", 0));
        btnBubbleNext->setText(QApplication::translate("SnakeWizardPanel", "Next", 0));
        label_13->setText(QApplication::translate("SnakeWizardPanel", "Configure the parameters of the contour evolution differential equation", 0));
        btnEvolutionParameters->setText(QApplication::translate("SnakeWizardPanel", "Set Parameters ...", 0));
        label_14->setText(QApplication::translate("SnakeWizardPanel", "Execute and control the evolution", 0));
#ifndef QT_NO_TOOLTIP
        btnRewind->setToolTip(QApplication::translate("SnakeWizardPanel", "Restart evolution", 0));
#endif // QT_NO_TOOLTIP
        btnRewind->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnPlay->setToolTip(QApplication::translate("SnakeWizardPanel", "Run/pause active contour evolution", 0));
#endif // QT_NO_TOOLTIP
        btnPlay->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSingleStep->setToolTip(QApplication::translate("SnakeWizardPanel", "Perform a single evolution iteration", 0));
#endif // QT_NO_TOOLTIP
        btnSingleStep->setText(QApplication::translate("SnakeWizardPanel", "...", 0));
        label->setText(QApplication::translate("SnakeWizardPanel", "Step size:", 0));
        label_4->setText(QApplication::translate("SnakeWizardPanel", "Iteration:", 0));
#ifndef QT_NO_TOOLTIP
        inStepSize->setToolTip(QApplication::translate("SnakeWizardPanel", "Number of evolution steps per iteration.", 0));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("SnakeWizardPanel", "Press 'Finish' to accept the result", 0));
#ifndef QT_NO_TOOLTIP
        btnEvolutionBack->setToolTip(QApplication::translate("SnakeWizardPanel", "Return to bubble placement", 0));
#endif // QT_NO_TOOLTIP
        btnEvolutionBack->setText(QApplication::translate("SnakeWizardPanel", "Back", 0));
#ifndef QT_NO_TOOLTIP
        btnEvolutionNext->setToolTip(QApplication::translate("SnakeWizardPanel", "Accept segmentation and return to the main ITK-SNAP window", 0));
#endif // QT_NO_TOOLTIP
        btnEvolutionNext->setText(QApplication::translate("SnakeWizardPanel", "Finish", 0));
        btnCancel->setText(QApplication::translate("SnakeWizardPanel", "Cancel Segmentation", 0));
    } // retranslateUi

};

namespace Ui {
    class SnakeWizardPanel: public Ui_SnakeWizardPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEWIZARDPANEL_H
