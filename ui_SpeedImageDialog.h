/********************************************************************************
** Form generated from reading UI file 'SpeedImageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDIMAGEDIALOG_H
#define UI_SPEEDIMAGEDIALOG_H

#include <QDoubleSlider.h>
#include <QDoubleSliderWithEditor.h>
#include <QtCore/QVariant>
#include <QtSimpleOpenGLBox.h>
#include <QtVTKRenderWindowBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpeedImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabMode;
    QWidget *tabThreshold;
    QGridLayout *gridLayout;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QWidget *grpThresholdMode;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *btnTwoSidedThreshold;
    QRadioButton *btnLowerThreshold;
    QRadioButton *btnUpperThreshold;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QDoubleSlider *inLowerThreshold;
    QDoubleSlider *inThresholdSmoothness;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QDoubleSlider *inUpperThreshold;
    QLabel *label;
    QDoubleSpinBox *inLowerThresholdSpinner;
    QLabel *label_2;
    QDoubleSpinBox *inUpperThresholdSpinner;
    QLabel *label_3;
    QDoubleSpinBox *inThresholdSmoothnessSpinner;
    QWidget *grpThresholdComponent;
    QGridLayout *gridLayout_2;
    QLabel *label_16;
    QComboBox *inThresholdImage;
    QLabel *label_17;
    QComboBox *inThresholdComponent;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QtVTKRenderWindowBox *viewThreshold;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabClassify;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *inClassifyUseCoordinates;
    QLabel *label_22;
    QSpinBox *inClassifierPatchSizeZ;
    QLabel *label_26;
    QLabel *label_21;
    QSpinBox *inClassifierPatchSizeX;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *inClassifyUsePatch;
    QSpinBox *inClassifierPatchSizeY;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_27;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_9;
    QGridLayout *gridLayout_6;
    QLabel *label_25;
    QLabel *label_18;
    QDoubleSliderWithEditor *inClassifyBias;
    QSpinBox *inClassifierTreeDepth;
    QLabel *label_23;
    QSpinBox *inClassifierTreeNumber;
    QLabel *label_24;
    QLabel *label_19;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_16;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnClassifyLoad;
    QPushButton *btnClassifySave;
    QWidget *tabCluster;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QSpinBox *inNumClusters;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QSpinBox *inNumSamples;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_11;
    QTableView *tblClusters;
    QSpacerItem *verticalSpacer_14;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnReinitialize;
    QPushButton *btnIterate;
    QPushButton *btnIterateTen;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_15;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QtVTKRenderWindowBox *viewClustering;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_13;
    QComboBox *inClusterXComponent;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_14;
    QComboBox *inClusterYComponent;
    QWidget *tabEdgeAttraction;
    QGridLayout *gridLayout_5;
    QtSimpleOpenGLBox *viewEdgeMapping;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_8;
    QLabel *label_6;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *inEdgeSmoothing;
    QDoubleSlider *inEdgeSmoothingSlider;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *inEdgeExponent;
    QDoubleSlider *inEdgeExponentSlider;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *inEdgeKappa;
    QDoubleSlider *inEdgeKappaSlider;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkPreview;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnSpeedBlue;
    QToolButton *btnSpeedOverlay;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *SpeedImageDialog)
    {
        if (SpeedImageDialog->objectName().isEmpty())
            SpeedImageDialog->setObjectName(QStringLiteral("SpeedImageDialog"));
        SpeedImageDialog->resize(512, 560);
        SpeedImageDialog->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  font-family: helvetica;\n"
"  color: rgb(30,30,160);\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 4px;\n"
"  border: 1px solid rgb(130,130,130);\n"
"}\n"
"QGroupBox:!enabled {\n"
"  color: rgb(108,108,108);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        verticalLayout = new QVBoxLayout(SpeedImageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabMode = new QTabWidget(SpeedImageDialog);
        tabMode->setObjectName(QStringLiteral("tabMode"));
        tabThreshold = new QWidget();
        tabThreshold->setObjectName(QStringLiteral("tabThreshold"));
        gridLayout = new QGridLayout(tabThreshold);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(32);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(12, 4, 12, 4);
        widget_8 = new QWidget(tabThreshold);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        verticalLayout_10 = new QVBoxLayout(widget_8);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_8);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_10->addWidget(label_4);

        grpThresholdMode = new QWidget(widget_8);
        grpThresholdMode->setObjectName(QStringLiteral("grpThresholdMode"));
        grpThresholdMode->setMinimumSize(QSize(0, 100));
        verticalLayout_2 = new QVBoxLayout(grpThresholdMode);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(16, 6, 6, 8);
        btnTwoSidedThreshold = new QRadioButton(grpThresholdMode);
        btnTwoSidedThreshold->setObjectName(QStringLiteral("btnTwoSidedThreshold"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/thresh_both.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTwoSidedThreshold->setIcon(icon);
        btnTwoSidedThreshold->setIconSize(QSize(22, 22));

        verticalLayout_2->addWidget(btnTwoSidedThreshold);

        btnLowerThreshold = new QRadioButton(grpThresholdMode);
        btnLowerThreshold->setObjectName(QStringLiteral("btnLowerThreshold"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/thresh_lower.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLowerThreshold->setIcon(icon1);
        btnLowerThreshold->setIconSize(QSize(22, 22));

        verticalLayout_2->addWidget(btnLowerThreshold);

        btnUpperThreshold = new QRadioButton(grpThresholdMode);
        btnUpperThreshold->setObjectName(QStringLiteral("btnUpperThreshold"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/thresh_upper.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUpperThreshold->setIcon(icon2);
        btnUpperThreshold->setIconSize(QSize(22, 22));

        verticalLayout_2->addWidget(btnUpperThreshold);

        verticalSpacer_15 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_15);


        verticalLayout_10->addWidget(grpThresholdMode);

        verticalLayout_10->setStretch(1, 1);

        gridLayout->addWidget(widget_8, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 2);

        widget_7 = new QWidget(tabThreshold);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(8);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        inLowerThreshold = new QDoubleSlider(widget_7);
        inLowerThreshold->setObjectName(QStringLiteral("inLowerThreshold"));
        inLowerThreshold->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inLowerThreshold, 1, 1, 1, 1);

        inThresholdSmoothness = new QDoubleSlider(widget_7);
        inThresholdSmoothness->setObjectName(QStringLiteral("inThresholdSmoothness"));
        inThresholdSmoothness->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inThresholdSmoothness, 7, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 5, 1, 1, 1);

        inUpperThreshold = new QDoubleSlider(widget_7);
        inUpperThreshold->setObjectName(QStringLiteral("inUpperThreshold"));
        inUpperThreshold->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inUpperThreshold, 4, 1, 1, 1);

        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 2);

        inLowerThresholdSpinner = new QDoubleSpinBox(widget_7);
        inLowerThresholdSpinner->setObjectName(QStringLiteral("inLowerThresholdSpinner"));
        inLowerThresholdSpinner->setKeyboardTracking(false);

        gridLayout_4->addWidget(inLowerThresholdSpinner, 1, 0, 1, 1);

        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 3, 0, 1, 2);

        inUpperThresholdSpinner = new QDoubleSpinBox(widget_7);
        inUpperThresholdSpinner->setObjectName(QStringLiteral("inUpperThresholdSpinner"));
        inUpperThresholdSpinner->setKeyboardTracking(false);

        gridLayout_4->addWidget(inUpperThresholdSpinner, 4, 0, 1, 1);

        label_3 = new QLabel(widget_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 6, 0, 1, 2);

        inThresholdSmoothnessSpinner = new QDoubleSpinBox(widget_7);
        inThresholdSmoothnessSpinner->setObjectName(QStringLiteral("inThresholdSmoothnessSpinner"));
        inThresholdSmoothnessSpinner->setKeyboardTracking(false);

        gridLayout_4->addWidget(inThresholdSmoothnessSpinner, 7, 0, 1, 1);


        gridLayout->addWidget(widget_7, 6, 0, 1, 1);

        grpThresholdComponent = new QWidget(tabThreshold);
        grpThresholdComponent->setObjectName(QStringLiteral("grpThresholdComponent"));
        gridLayout_2 = new QGridLayout(grpThresholdComponent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(12);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(grpThresholdComponent);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);

        inThresholdImage = new QComboBox(grpThresholdComponent);
        inThresholdImage->setObjectName(QStringLiteral("inThresholdImage"));

        gridLayout_2->addWidget(inThresholdImage, 1, 0, 1, 1);

        label_17 = new QLabel(grpThresholdComponent);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 0, 1, 1, 1);

        inThresholdComponent = new QComboBox(grpThresholdComponent);
        inThresholdComponent->setObjectName(QStringLiteral("inThresholdComponent"));

        gridLayout_2->addWidget(inThresholdComponent, 1, 1, 1, 1);


        gridLayout->addWidget(grpThresholdComponent, 1, 0, 1, 2);

        frame = new QFrame(tabThreshold);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        viewThreshold = new QtVTKRenderWindowBox(frame);
        viewThreshold->setObjectName(QStringLiteral("viewThreshold"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewThreshold->sizePolicy().hasHeightForWidth());
        viewThreshold->setSizePolicy(sizePolicy);
        viewThreshold->setMinimumSize(QSize(0, 160));
        viewThreshold->setStyleSheet(QStringLiteral("background-color:white;"));

        verticalLayout_4->addWidget(viewThreshold);


        gridLayout->addWidget(frame, 4, 0, 1, 2);

        label_5 = new QLabel(tabThreshold);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_11, 2, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 2);

        tabMode->addTab(tabThreshold, QString());
        tabClassify = new QWidget();
        tabClassify->setObjectName(QStringLiteral("tabClassify"));
        verticalLayout_9 = new QVBoxLayout(tabClassify);
        verticalLayout_9->setSpacing(16);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox = new QGroupBox(tabClassify);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(groupBox);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        gridLayout_3 = new QGridLayout(widget_10);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 4, 0, 4);
        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 2, 7, 1, 1);

        inClassifyUseCoordinates = new QCheckBox(widget_10);
        inClassifyUseCoordinates->setObjectName(QStringLiteral("inClassifyUseCoordinates"));

        gridLayout_3->addWidget(inClassifyUseCoordinates, 3, 0, 1, 8);

        label_22 = new QLabel(widget_10);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64);"));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_22->setWordWrap(true);

        gridLayout_3->addWidget(label_22, 4, 1, 1, 7);

        inClassifierPatchSizeZ = new QSpinBox(widget_10);
        inClassifierPatchSizeZ->setObjectName(QStringLiteral("inClassifierPatchSizeZ"));
        inClassifierPatchSizeZ->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(inClassifierPatchSizeZ, 2, 5, 1, 1);

        label_26 = new QLabel(widget_10);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 2, 2, 1, 1);

        label_21 = new QLabel(widget_10);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64);"));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_21->setWordWrap(true);

        gridLayout_3->addWidget(label_21, 1, 1, 1, 7);

        inClassifierPatchSizeX = new QSpinBox(widget_10);
        inClassifierPatchSizeX->setObjectName(QStringLiteral("inClassifierPatchSizeX"));
        inClassifierPatchSizeX->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(inClassifierPatchSizeX, 2, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        inClassifyUsePatch = new QCheckBox(widget_10);
        inClassifyUsePatch->setObjectName(QStringLiteral("inClassifyUsePatch"));

        gridLayout_3->addWidget(inClassifyUsePatch, 0, 0, 1, 8);

        inClassifierPatchSizeY = new QSpinBox(widget_10);
        inClassifierPatchSizeY->setObjectName(QStringLiteral("inClassifierPatchSizeY"));
        inClassifierPatchSizeY->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(inClassifierPatchSizeY, 2, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 2, 1, 1, 1);

        label_27 = new QLabel(widget_10);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/root/icons8_info_16.png")));

        gridLayout_3->addWidget(label_27, 2, 6, 1, 1);


        verticalLayout_6->addWidget(widget_10);


        verticalLayout_9->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabClassify);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(groupBox_2);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        gridLayout_6 = new QGridLayout(widget_9);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 4, 0, 4);
        label_25 = new QLabel(widget_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(190, 26));
        label_25->setMaximumSize(QSize(190, 26));
        label_25->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64);"));
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_25->setWordWrap(true);

        gridLayout_6->addWidget(label_25, 2, 2, 1, 1, Qt::AlignVCenter);

        label_18 = new QLabel(widget_9);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_6->addWidget(label_18, 0, 0, 1, 1, Qt::AlignRight);

        inClassifyBias = new QDoubleSliderWithEditor(widget_9);
        inClassifyBias->setObjectName(QStringLiteral("inClassifyBias"));
        inClassifyBias->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(inClassifyBias, 2, 1, 1, 1);

        inClassifierTreeDepth = new QSpinBox(widget_9);
        inClassifierTreeDepth->setObjectName(QStringLiteral("inClassifierTreeDepth"));
        inClassifierTreeDepth->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(inClassifierTreeDepth, 1, 1, 1, 1);

        label_23 = new QLabel(widget_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(190, 26));
        label_23->setMaximumSize(QSize(190, 26));
        label_23->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64);"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_23->setWordWrap(true);

        gridLayout_6->addWidget(label_23, 0, 2, 1, 1);

        inClassifierTreeNumber = new QSpinBox(widget_9);
        inClassifierTreeNumber->setObjectName(QStringLiteral("inClassifierTreeNumber"));
        inClassifierTreeNumber->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(inClassifierTreeNumber, 0, 1, 1, 1);

        label_24 = new QLabel(widget_9);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_6->addWidget(label_24, 2, 0, 1, 1, Qt::AlignRight);

        label_19 = new QLabel(widget_9);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_6->addWidget(label_19, 1, 0, 1, 1, Qt::AlignRight);

        label_20 = new QLabel(widget_9);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(190, 26));
        label_20->setMaximumSize(QSize(190, 26));
        label_20->setStyleSheet(QLatin1String("font-size:10px;\n"
"color: rgb(64, 64, 64);"));
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_20->setWordWrap(true);

        gridLayout_6->addWidget(label_20, 1, 2, 1, 1);


        verticalLayout_7->addWidget(widget_9);


        verticalLayout_9->addWidget(groupBox_2);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_16);

        widget_11 = new QWidget(tabClassify);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_4 = new QHBoxLayout(widget_11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        btnClassifyLoad = new QPushButton(widget_11);
        btnClassifyLoad->setObjectName(QStringLiteral("btnClassifyLoad"));

        horizontalLayout_4->addWidget(btnClassifyLoad);

        btnClassifySave = new QPushButton(widget_11);
        btnClassifySave->setObjectName(QStringLiteral("btnClassifySave"));

        horizontalLayout_4->addWidget(btnClassifySave);


        verticalLayout_9->addWidget(widget_11);

        tabMode->addTab(tabClassify, QString());
        tabCluster = new QWidget();
        tabCluster->setObjectName(QStringLiteral("tabCluster"));
        verticalLayout_8 = new QVBoxLayout(tabCluster);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(12, 4, 12, 4);
        widget_6 = new QWidget(tabCluster);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        inNumClusters = new QSpinBox(widget_6);
        inNumClusters->setObjectName(QStringLiteral("inNumClusters"));
        inNumClusters->setMinimumSize(QSize(80, 0));
        inNumClusters->setMaximumSize(QSize(80, 16777215));
        inNumClusters->setKeyboardTracking(false);

        horizontalLayout_6->addWidget(inNumClusters);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_6->addWidget(label_12);

        inNumSamples = new QSpinBox(widget_6);
        inNumSamples->setObjectName(QStringLiteral("inNumSamples"));
        inNumSamples->setMinimumSize(QSize(80, 0));
        inNumSamples->setMaximumSize(QSize(80, 16777215));
        inNumSamples->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        inNumSamples->setKeyboardTracking(false);

        horizontalLayout_6->addWidget(inNumSamples);


        verticalLayout_8->addWidget(widget_6);

        verticalSpacer_12 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_12);

        label_11 = new QLabel(tabCluster);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_8->addWidget(label_11);

        tblClusters = new QTableView(tabCluster);
        tblClusters->setObjectName(QStringLiteral("tblClusters"));
        tblClusters->setMaximumSize(QSize(16777215, 140));
        tblClusters->setStyleSheet(QStringLiteral("font-size:11px;"));
        tblClusters->setSelectionMode(QAbstractItemView::SingleSelection);
        tblClusters->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblClusters->horizontalHeader()->setDefaultSectionSize(75);
        tblClusters->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_8->addWidget(tblClusters);

        verticalSpacer_14 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_14);

        widget_2 = new QWidget(tabCluster);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnReinitialize = new QPushButton(widget_2);
        btnReinitialize->setObjectName(QStringLiteral("btnReinitialize"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/view-refresh-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReinitialize->setIcon(icon3);

        horizontalLayout_3->addWidget(btnReinitialize);

        btnIterate = new QPushButton(widget_2);
        btnIterate->setObjectName(QStringLiteral("btnIterate"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/media-playback-start-1x-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIterate->setIcon(icon4);

        horizontalLayout_3->addWidget(btnIterate);

        btnIterateTen = new QPushButton(widget_2);
        btnIterateTen->setObjectName(QStringLiteral("btnIterateTen"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/media-playback-start-10x-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIterateTen->setIcon(icon5);

        horizontalLayout_3->addWidget(btnIterateTen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_8->addWidget(widget_2);

        verticalSpacer_13 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_13);

        label_15 = new QLabel(tabCluster);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_8->addWidget(label_15);

        frame_2 = new QFrame(tabCluster);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        viewClustering = new QtVTKRenderWindowBox(frame_2);
        viewClustering->setObjectName(QStringLiteral("viewClustering"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(viewClustering->sizePolicy().hasHeightForWidth());
        viewClustering->setSizePolicy(sizePolicy2);
        viewClustering->setMinimumSize(QSize(40, 120));
        viewClustering->setStyleSheet(QStringLiteral("background-color:white;"));

        verticalLayout_5->addWidget(viewClustering);


        verticalLayout_8->addWidget(frame_2);

        widget_5 = new QWidget(tabCluster);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral("font-size:10px;"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(8);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_13 = new QLabel(widget_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_5->addWidget(label_13);

        inClusterXComponent = new QComboBox(widget_5);
        inClusterXComponent->setObjectName(QStringLiteral("inClusterXComponent"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inClusterXComponent->sizePolicy().hasHeightForWidth());
        inClusterXComponent->setSizePolicy(sizePolicy3);
        inClusterXComponent->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(inClusterXComponent);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_14 = new QLabel(widget_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(false);

        horizontalLayout_5->addWidget(label_14);

        inClusterYComponent = new QComboBox(widget_5);
        inClusterYComponent->setObjectName(QStringLiteral("inClusterYComponent"));
        inClusterYComponent->setEnabled(false);
        sizePolicy3.setHeightForWidth(inClusterYComponent->sizePolicy().hasHeightForWidth());
        inClusterYComponent->setSizePolicy(sizePolicy3);
        inClusterYComponent->setMaximumSize(QSize(150, 16777215));
        inClusterYComponent->setBaseSize(QSize(0, 0));

        horizontalLayout_5->addWidget(inClusterYComponent);


        verticalLayout_8->addWidget(widget_5);

        tabMode->addTab(tabCluster, QString());
        tabEdgeAttraction = new QWidget();
        tabEdgeAttraction->setObjectName(QStringLiteral("tabEdgeAttraction"));
        gridLayout_5 = new QGridLayout(tabEdgeAttraction);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(32);
        gridLayout_5->setVerticalSpacing(2);
        gridLayout_5->setContentsMargins(-1, 12, -1, 20);
        viewEdgeMapping = new QtSimpleOpenGLBox(tabEdgeAttraction);
        viewEdgeMapping->setObjectName(QStringLiteral("viewEdgeMapping"));
        sizePolicy.setHeightForWidth(viewEdgeMapping->sizePolicy().hasHeightForWidth());
        viewEdgeMapping->setSizePolicy(sizePolicy);
        viewEdgeMapping->setMinimumSize(QSize(0, 160));
        viewEdgeMapping->setStyleSheet(QStringLiteral("background-color:white;"));

        gridLayout_5->addWidget(viewEdgeMapping, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(427, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_8, 2, 0, 1, 1);

        label_9 = new QLabel(tabEdgeAttraction);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 9, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(427, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_10, 8, 0, 1, 1);

        label_7 = new QLabel(tabEdgeAttraction);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 3, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(427, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 11, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_9, 5, 0, 1, 1);

        label_8 = new QLabel(tabEdgeAttraction);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 6, 0, 1, 1);

        label_6 = new QLabel(tabEdgeAttraction);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        widget_12 = new QWidget(tabEdgeAttraction);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        horizontalLayout_7 = new QHBoxLayout(widget_12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        inEdgeSmoothing = new QDoubleSpinBox(widget_12);
        inEdgeSmoothing->setObjectName(QStringLiteral("inEdgeSmoothing"));
        inEdgeSmoothing->setDecimals(4);

        horizontalLayout_7->addWidget(inEdgeSmoothing);

        inEdgeSmoothingSlider = new QDoubleSlider(widget_12);
        inEdgeSmoothingSlider->setObjectName(QStringLiteral("inEdgeSmoothingSlider"));
        inEdgeSmoothingSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(inEdgeSmoothingSlider);


        gridLayout_5->addWidget(widget_12, 4, 0, 1, 1);

        widget_14 = new QWidget(tabEdgeAttraction);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        horizontalLayout_9 = new QHBoxLayout(widget_14);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        inEdgeExponent = new QDoubleSpinBox(widget_14);
        inEdgeExponent->setObjectName(QStringLiteral("inEdgeExponent"));
        inEdgeExponent->setDecimals(4);

        horizontalLayout_9->addWidget(inEdgeExponent);

        inEdgeExponentSlider = new QDoubleSlider(widget_14);
        inEdgeExponentSlider->setObjectName(QStringLiteral("inEdgeExponentSlider"));
        inEdgeExponentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(inEdgeExponentSlider);


        gridLayout_5->addWidget(widget_14, 10, 0, 1, 1);

        widget_13 = new QWidget(tabEdgeAttraction);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_8 = new QHBoxLayout(widget_13);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        inEdgeKappa = new QDoubleSpinBox(widget_13);
        inEdgeKappa->setObjectName(QStringLiteral("inEdgeKappa"));
        inEdgeKappa->setDecimals(4);

        horizontalLayout_8->addWidget(inEdgeKappa);

        inEdgeKappaSlider = new QDoubleSlider(widget_13);
        inEdgeKappaSlider->setObjectName(QStringLiteral("inEdgeKappaSlider"));
        inEdgeKappaSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(inEdgeKappaSlider);


        gridLayout_5->addWidget(widget_13, 7, 0, 1, 1);

        tabMode->addTab(tabEdgeAttraction, QString());

        verticalLayout->addWidget(tabMode);

        widget_3 = new QWidget(SpeedImageDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(18, 6, 6, 6);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        chkPreview = new QCheckBox(widget_4);
        chkPreview->setObjectName(QStringLiteral("chkPreview"));

        verticalLayout_3->addWidget(chkPreview);


        horizontalLayout->addWidget(widget_4);

        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnSpeedBlue = new QToolButton(widget);
        btnSpeedBlue->setObjectName(QStringLiteral("btnSpeedBlue"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/speed_bluegray.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSpeedBlue->setIcon(icon6);
        btnSpeedBlue->setIconSize(QSize(16, 16));
        btnSpeedBlue->setCheckable(true);

        horizontalLayout_2->addWidget(btnSpeedBlue);

        btnSpeedOverlay = new QToolButton(widget);
        btnSpeedOverlay->setObjectName(QStringLiteral("btnSpeedOverlay"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/speed_redoverlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSpeedOverlay->setIcon(icon7);
        btnSpeedOverlay->setIconSize(QSize(16, 16));
        btnSpeedOverlay->setCheckable(true);
        btnSpeedOverlay->setChecked(false);

        horizontalLayout_2->addWidget(btnSpeedOverlay);


        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget_3);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setMinimumSize(QSize(64, 0));
        btnClose->setMaximumSize(QSize(64, 16777215));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(widget_3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(inLowerThreshold);
        label_2->setBuddy(inUpperThreshold);
        label_3->setBuddy(inThresholdSmoothness);
        label_5->setBuddy(inLowerThreshold);
#endif // QT_NO_SHORTCUT

        retranslateUi(SpeedImageDialog);

        tabMode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SpeedImageDialog);
    } // setupUi

    void retranslateUi(QDialog *SpeedImageDialog)
    {
        SpeedImageDialog->setWindowTitle(QApplication::translate("SpeedImageDialog", "Speed Image Generation - ITK-SNAP", 0));
        label_4->setText(QApplication::translate("SpeedImageDialog", "Threshold direction:", 0));
        btnTwoSidedThreshold->setText(QApplication::translate("SpeedImageDialog", "Two-sided", 0));
        btnLowerThreshold->setText(QApplication::translate("SpeedImageDialog", "Lower only", 0));
        btnUpperThreshold->setText(QApplication::translate("SpeedImageDialog", "Upper only", 0));
        label->setText(QApplication::translate("SpeedImageDialog", "&Lower threshold:", 0));
        label_2->setText(QApplication::translate("SpeedImageDialog", "&Upper threshold:", 0));
        label_3->setText(QApplication::translate("SpeedImageDialog", "&Smoothness:", 0));
        label_16->setText(QApplication::translate("SpeedImageDialog", "Image to threshold:", 0));
        label_17->setText(QApplication::translate("SpeedImageDialog", "Component:", 0));
        label_5->setText(QApplication::translate("SpeedImageDialog", "Thresholding function:", 0));
        tabMode->setTabText(tabMode->indexOf(tabThreshold), QApplication::translate("SpeedImageDialog", "Thresholding", 0));
        groupBox->setTitle(QApplication::translate("SpeedImageDialog", "Additional features:", 0));
        inClassifyUseCoordinates->setText(QApplication::translate("SpeedImageDialog", "Inculde the voxels' coordinates as features", 0));
        label_22->setText(QApplication::translate("SpeedImageDialog", "Allows you to provide geometrical hints to the segmentation, for example avoiding leaking into a certain region", 0));
#ifndef QT_NO_TOOLTIP
        inClassifierPatchSizeZ->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>The radius of the neighborhood used to produce additional features. When set to 1, the neighborhood size is 3x3x3 voxels. When set to 2, the neighborhood is 5x5x5 voxels, and so on.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_26->setText(QApplication::translate("SpeedImageDialog", "Patch radius:", 0));
        label_21->setText(QApplication::translate("SpeedImageDialog", "Neighboring intensity values around each voxel are included as additional features. Can help you segment images with rich texture or complex patterns, but classification will be slower", 0));
#ifndef QT_NO_TOOLTIP
        inClassifierPatchSizeX->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>The radius of the neighborhood used to produce additional features. When set to 1, the neighborhood size is 3x3x3 voxels. When set to 2, the neighborhood is 5x5x5 voxels, and so on.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        inClassifyUsePatch->setText(QApplication::translate("SpeedImageDialog", "Use patches for classification", 0));
#ifndef QT_NO_TOOLTIP
        inClassifierPatchSizeY->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>The radius of the neighborhood used to produce additional features. When set to 1, the neighborhood size is 3x3x3 voxels. When set to 2, the neighborhood is 5x5x5 voxels, and so on.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_27->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>Use these controls to set the size of the patch. Patches are symmetrical around a voxel and have dimensions that are odd, e.g., 1x1x1, 5x5x5, 3x3x1. The size of the patch is equal to one plus twice the patch radius. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_27->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SpeedImageDialog", "Random forest classifier settings:", 0));
        label_25->setText(QApplication::translate("SpeedImageDialog", "Boost the contribution of the foreground class to the speed image", 0));
        label_18->setText(QApplication::translate("SpeedImageDialog", "Number of trees:", 0));
        label_23->setText(QApplication::translate("SpeedImageDialog", "More trees produce more accurate classification at the cost of more time.", 0));
        label_24->setText(QApplication::translate("SpeedImageDialog", "Classifier bias:", 0));
        label_19->setText(QApplication::translate("SpeedImageDialog", "Tree depth:", 0));
        label_20->setText(QApplication::translate("SpeedImageDialog", "Increase when there are many features and complex patterns to be learned", 0));
        btnClassifyLoad->setText(QApplication::translate("SpeedImageDialog", "Load samples ...", 0));
        btnClassifySave->setText(QApplication::translate("SpeedImageDialog", "Save samples ...", 0));
        tabMode->setTabText(tabMode->indexOf(tabClassify), QApplication::translate("SpeedImageDialog", "Classification", 0));
        label_10->setText(QApplication::translate("SpeedImageDialog", "Number of clusters:", 0));
        label_12->setText(QApplication::translate("SpeedImageDialog", "Samples:", 0));
        label_11->setText(QApplication::translate("SpeedImageDialog", "Table of clusters:", 0));
        btnReinitialize->setText(QApplication::translate("SpeedImageDialog", "Reinitialize", 0));
        btnIterate->setText(QApplication::translate("SpeedImageDialog", "Iterate x1", 0));
        btnIterateTen->setText(QApplication::translate("SpeedImageDialog", "Iterate x10", 0));
        label_15->setText(QApplication::translate("SpeedImageDialog", "Cluster probability density plot:", 0));
        label_13->setText(QApplication::translate("SpeedImageDialog", "X axis:", 0));
        label_14->setText(QApplication::translate("SpeedImageDialog", "Y axis:", 0));
        tabMode->setTabText(tabMode->indexOf(tabCluster), QApplication::translate("SpeedImageDialog", "Clustering", 0));
        label_9->setText(QApplication::translate("SpeedImageDialog", "Edge transformation exponent:", 0));
        label_7->setText(QApplication::translate("SpeedImageDialog", "Scale of Gaussian blurring:", 0));
        label_8->setText(QApplication::translate("SpeedImageDialog", "Edge transformation contrast:", 0));
        label_6->setText(QApplication::translate("SpeedImageDialog", "Transformation from edge strength to speed value", 0));
        tabMode->setTabText(tabMode->indexOf(tabEdgeAttraction), QApplication::translate("SpeedImageDialog", "Edge Attraction", 0));
#ifndef QT_NO_TOOLTIP
        chkPreview->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>When selected, the speed image is computed on the fly</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkPreview->setText(QApplication::translate("SpeedImageDialog", "Live Preview", 0));
#ifndef QT_NO_TOOLTIP
        btnSpeedBlue->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>Display the speed image as a non-transparent image with negative values in blue and positive values in white.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSpeedBlue->setText(QApplication::translate("SpeedImageDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSpeedOverlay->setToolTip(QApplication::translate("SpeedImageDialog", "<html><head/><body><p>Display the speed image as a semi-transparent overlay, with positive values in red, negative values transparent.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSpeedOverlay->setText(QApplication::translate("SpeedImageDialog", "...", 0));
        btnClose->setText(QApplication::translate("SpeedImageDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SpeedImageDialog: public Ui_SpeedImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDIMAGEDIALOG_H
