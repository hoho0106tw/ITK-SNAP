/********************************************************************************
** Form generated from reading UI file 'RegistrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDIALOG_H
#define UI_REGISTRATIONDIALOG_H

#include <QDoubleSlider.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QAction *actionImage_Centers;
    QAction *actionCenters_of_Mass;
    QAction *actionMoments_of_Inertia;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QComboBox *inMovingLayer;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *pgAuto;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *inTransformation;
    QLabel *label_3;
    QComboBox *inSimilarityMetric;
    QCheckBox *inUseMask;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *inCoarseLevel;
    QComboBox *inFineLevel;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnRunRegistration;
    QSpacerItem *verticalSpacer_6;
    QScrollArea *scrollPlots;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *grpPlots;
    QVBoxLayout *verticalLayout_3;
    QWidget *pgManual;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpRotation;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *inRotX;
    QDoubleSlider *inRotXSlider;
    QLabel *label_5;
    QDoubleSpinBox *inRotY;
    QDoubleSlider *inRotYSlider;
    QLabel *label_6;
    QDoubleSpinBox *inRotZ;
    QDoubleSlider *inRotZSlider;
    QGroupBox *grpTranslation;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QDoubleSpinBox *inTranX;
    QDoubleSlider *inTranXSlider;
    QLabel *label_8;
    QDoubleSpinBox *inTranY;
    QDoubleSlider *inTranYSlider;
    QLabel *label_9;
    QDoubleSpinBox *inTranZ;
    QDoubleSlider *inTranZSlider;
    QGroupBox *grpScaling;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QDoubleSlider *inScaleXSlider;
    QDoubleSpinBox *inScaleY;
    QLabel *label_11;
    QDoubleSpinBox *inScaleZ;
    QLabel *label_10;
    QDoubleSpinBox *inScaleX;
    QDoubleSlider *inScaleYSlider;
    QDoubleSlider *inScaleZSlider;
    QToolButton *btnFlipX;
    QToolButton *btnFlipY;
    QToolButton *btnFlipZ;
    QPushButton *btnInteractiveTool;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *btnMatchCenters;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnLoad;
    QToolButton *btnSave;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnReslice;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QStringLiteral("RegistrationDialog"));
        RegistrationDialog->resize(192, 762);
        RegistrationDialog->setMaximumSize(QSize(192, 16777215));
        RegistrationDialog->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}\n"
"QDoubleSpinBox {\n"
"font-size: 11px;\n"
"}\n"
"\n"
"\n"
"QToolButton::checked {\n"
"  background-color:rgb(210, 210, 210);\n"
"}\n"
"\n"
"QToolButton::pressed {\n"
"  background-color:rgb(210, 210, 210);\n"
"}\n"
""));
        actionImage_Centers = new QAction(RegistrationDialog);
        actionImage_Centers->setObjectName(QStringLiteral("actionImage_Centers"));
        actionCenters_of_Mass = new QAction(RegistrationDialog);
        actionCenters_of_Mass->setObjectName(QStringLiteral("actionCenters_of_Mass"));
        actionMoments_of_Inertia = new QAction(RegistrationDialog);
        actionMoments_of_Inertia->setObjectName(QStringLiteral("actionMoments_of_Inertia"));
        verticalLayout_4 = new QVBoxLayout(RegistrationDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(RegistrationDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        inMovingLayer = new QComboBox(RegistrationDialog);
        inMovingLayer->setObjectName(QStringLiteral("inMovingLayer"));

        verticalLayout_4->addWidget(inMovingLayer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget = new QTabWidget(RegistrationDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QDoubleSpinBox {\n"
"  font-size: 10px;\n"
"}\n"
""));
        pgAuto = new QWidget();
        pgAuto->setObjectName(QStringLiteral("pgAuto"));
        verticalLayout = new QVBoxLayout(pgAuto);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, -1, 4, 4);
        label_2 = new QLabel(pgAuto);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        inTransformation = new QComboBox(pgAuto);
        inTransformation->setObjectName(QStringLiteral("inTransformation"));

        verticalLayout->addWidget(inTransformation);

        label_3 = new QLabel(pgAuto);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        inSimilarityMetric = new QComboBox(pgAuto);
        inSimilarityMetric->setObjectName(QStringLiteral("inSimilarityMetric"));

        verticalLayout->addWidget(inSimilarityMetric);

        inUseMask = new QCheckBox(pgAuto);
        inUseMask->setObjectName(QStringLiteral("inUseMask"));
        inUseMask->setStyleSheet(QStringLiteral("font-size:11px;"));

        verticalLayout->addWidget(inUseMask);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(pgAuto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QLabel {\n"
"  font-size:11px;\n"
"}\n"
"\n"
"QComboBox {\n"
"  font-size:11px;\n"
"}"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(20, 2, 2, 2);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        inCoarseLevel = new QComboBox(groupBox);
        inCoarseLevel->setObjectName(QStringLiteral("inCoarseLevel"));
        inCoarseLevel->setMaximumSize(QSize(48, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, inCoarseLevel);

        inFineLevel = new QComboBox(groupBox);
        inFineLevel->setObjectName(QStringLiteral("inFineLevel"));
        inFineLevel->setMaximumSize(QSize(48, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, inFineLevel);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        btnRunRegistration = new QPushButton(pgAuto);
        btnRunRegistration->setObjectName(QStringLiteral("btnRunRegistration"));

        verticalLayout->addWidget(btnRunRegistration);

        verticalSpacer_6 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        scrollPlots = new QScrollArea(pgAuto);
        scrollPlots->setObjectName(QStringLiteral("scrollPlots"));
        scrollPlots->setStyleSheet(QStringLiteral("background-color: transparent;"));
        scrollPlots->setFrameShape(QFrame::Box);
        scrollPlots->setFrameShadow(QFrame::Plain);
        scrollPlots->setLineWidth(0);
        scrollPlots->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollPlots->setWidgetResizable(true);
        scrollPlots->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 242));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        grpPlots = new QWidget(scrollAreaWidgetContents);
        grpPlots->setObjectName(QStringLiteral("grpPlots"));
        grpPlots->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(grpPlots);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(grpPlots);

        scrollPlots->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollPlots);

        verticalLayout->setStretch(10, 1);
        tabWidget->addTab(pgAuto, QString());
        pgManual = new QWidget();
        pgManual->setObjectName(QStringLiteral("pgManual"));
        verticalLayout_2 = new QVBoxLayout(pgManual);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, -1, 4, 4);
        grpRotation = new QGroupBox(pgManual);
        grpRotation->setObjectName(QStringLiteral("grpRotation"));
        grpRotation->setStyleSheet(QLatin1String("QLabel {\n"
"  font-size: 11px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(grpRotation);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        widget_2 = new QWidget(grpRotation);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        inRotX = new QDoubleSpinBox(widget_2);
        inRotX->setObjectName(QStringLiteral("inRotX"));
        inRotX->setMaximumSize(QSize(72, 16777215));

        gridLayout_2->addWidget(inRotX, 0, 1, 1, 1);

        inRotXSlider = new QDoubleSlider(widget_2);
        inRotXSlider->setObjectName(QStringLiteral("inRotXSlider"));
        inRotXSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(inRotXSlider, 0, 2, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        inRotY = new QDoubleSpinBox(widget_2);
        inRotY->setObjectName(QStringLiteral("inRotY"));
        inRotY->setMaximumSize(QSize(72, 16777215));

        gridLayout_2->addWidget(inRotY, 1, 1, 1, 1);

        inRotYSlider = new QDoubleSlider(widget_2);
        inRotYSlider->setObjectName(QStringLiteral("inRotYSlider"));
        inRotYSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(inRotYSlider, 1, 2, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        inRotZ = new QDoubleSpinBox(widget_2);
        inRotZ->setObjectName(QStringLiteral("inRotZ"));
        inRotZ->setMaximumSize(QSize(72, 16777215));

        gridLayout_2->addWidget(inRotZ, 2, 1, 1, 1);

        inRotZSlider = new QDoubleSlider(widget_2);
        inRotZSlider->setObjectName(QStringLiteral("inRotZSlider"));
        inRotZSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(inRotZSlider, 2, 2, 1, 1);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout_2->addWidget(grpRotation);

        grpTranslation = new QGroupBox(pgManual);
        grpTranslation->setObjectName(QStringLiteral("grpTranslation"));
        grpTranslation->setStyleSheet(QLatin1String("QLabel {\n"
"  font-size: 11px;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(grpTranslation);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        widget_3 = new QWidget(grpTranslation);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(2);
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        inTranX = new QDoubleSpinBox(widget_3);
        inTranX->setObjectName(QStringLiteral("inTranX"));
        inTranX->setMaximumSize(QSize(72, 16777215));

        gridLayout_3->addWidget(inTranX, 0, 1, 1, 1);

        inTranXSlider = new QDoubleSlider(widget_3);
        inTranXSlider->setObjectName(QStringLiteral("inTranXSlider"));
        inTranXSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(inTranXSlider, 0, 2, 1, 1);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        inTranY = new QDoubleSpinBox(widget_3);
        inTranY->setObjectName(QStringLiteral("inTranY"));
        inTranY->setMaximumSize(QSize(72, 16777215));

        gridLayout_3->addWidget(inTranY, 1, 1, 1, 1);

        inTranYSlider = new QDoubleSlider(widget_3);
        inTranYSlider->setObjectName(QStringLiteral("inTranYSlider"));
        inTranYSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(inTranYSlider, 1, 2, 1, 1);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        inTranZ = new QDoubleSpinBox(widget_3);
        inTranZ->setObjectName(QStringLiteral("inTranZ"));
        inTranZ->setMaximumSize(QSize(72, 16777215));

        gridLayout_3->addWidget(inTranZ, 2, 1, 1, 1);

        inTranZSlider = new QDoubleSlider(widget_3);
        inTranZSlider->setObjectName(QStringLiteral("inTranZSlider"));
        inTranZSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(inTranZSlider, 2, 2, 1, 1);


        horizontalLayout_3->addWidget(widget_3);


        verticalLayout_2->addWidget(grpTranslation);

        grpScaling = new QGroupBox(pgManual);
        grpScaling->setObjectName(QStringLiteral("grpScaling"));
        grpScaling->setStyleSheet(QLatin1String("QLabel {\n"
"  font-size: 11px;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(grpScaling);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        widget_4 = new QWidget(grpScaling);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(2);
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        inScaleXSlider = new QDoubleSlider(widget_4);
        inScaleXSlider->setObjectName(QStringLiteral("inScaleXSlider"));
        inScaleXSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inScaleXSlider, 0, 2, 1, 1);

        inScaleY = new QDoubleSpinBox(widget_4);
        inScaleY->setObjectName(QStringLiteral("inScaleY"));
        inScaleY->setMaximumSize(QSize(72, 16777215));

        gridLayout_4->addWidget(inScaleY, 1, 1, 1, 1);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        inScaleZ = new QDoubleSpinBox(widget_4);
        inScaleZ->setObjectName(QStringLiteral("inScaleZ"));
        inScaleZ->setMaximumSize(QSize(72, 16777215));

        gridLayout_4->addWidget(inScaleZ, 2, 1, 1, 1);

        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        inScaleX = new QDoubleSpinBox(widget_4);
        inScaleX->setObjectName(QStringLiteral("inScaleX"));
        inScaleX->setMaximumSize(QSize(72, 16777215));

        gridLayout_4->addWidget(inScaleX, 0, 1, 1, 1);

        inScaleYSlider = new QDoubleSlider(widget_4);
        inScaleYSlider->setObjectName(QStringLiteral("inScaleYSlider"));
        inScaleYSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inScaleYSlider, 1, 2, 1, 1);

        inScaleZSlider = new QDoubleSlider(widget_4);
        inScaleZSlider->setObjectName(QStringLiteral("inScaleZSlider"));
        inScaleZSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(inScaleZSlider, 2, 2, 1, 1);

        btnFlipX = new QToolButton(widget_4);
        btnFlipX->setObjectName(QStringLiteral("btnFlipX"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/icons8_flip_vertical_16@2x.png"), QSize(), QIcon::Normal, QIcon::On);
        btnFlipX->setIcon(icon);
        btnFlipX->setCheckable(true);
        btnFlipX->setAutoRaise(true);

        gridLayout_4->addWidget(btnFlipX, 0, 3, 1, 1);

        btnFlipY = new QToolButton(widget_4);
        btnFlipY->setObjectName(QStringLiteral("btnFlipY"));
        btnFlipY->setIcon(icon);
        btnFlipY->setCheckable(true);
        btnFlipY->setAutoRaise(true);

        gridLayout_4->addWidget(btnFlipY, 1, 3, 1, 1);

        btnFlipZ = new QToolButton(widget_4);
        btnFlipZ->setObjectName(QStringLiteral("btnFlipZ"));
        btnFlipZ->setIcon(icon);
        btnFlipZ->setCheckable(true);
        btnFlipZ->setAutoRaise(true);

        gridLayout_4->addWidget(btnFlipZ, 2, 3, 1, 1);


        horizontalLayout_4->addWidget(widget_4);


        verticalLayout_2->addWidget(grpScaling);

        btnInteractiveTool = new QPushButton(pgManual);
        btnInteractiveTool->setObjectName(QStringLiteral("btnInteractiveTool"));
        btnInteractiveTool->setCheckable(true);
        btnInteractiveTool->setChecked(true);

        verticalLayout_2->addWidget(btnInteractiveTool);

        pushButton_2 = new QPushButton(pgManual);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(pgManual);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        btnMatchCenters = new QPushButton(pgManual);
        btnMatchCenters->setObjectName(QStringLiteral("btnMatchCenters"));

        verticalLayout_2->addWidget(btnMatchCenters);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(pgManual, QString());

        verticalLayout_4->addWidget(tabWidget);

        widget = new QWidget(RegistrationDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        btnLoad = new QToolButton(widget);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/open_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLoad->setIcon(icon1);

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QToolButton(widget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/save_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon2);

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer_2 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnReslice = new QToolButton(widget);
        btnReslice->setObjectName(QStringLiteral("btnReslice"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/reslice_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReslice->setIcon(icon3);

        horizontalLayout->addWidget(btnReslice);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(widget);

        buttonBox = new QDialogButtonBox(RegistrationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(RegistrationDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QWidget *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QApplication::translate("RegistrationDialog", "Dialog", 0));
        actionImage_Centers->setText(QApplication::translate("RegistrationDialog", "Image Centers", 0));
#ifndef QT_NO_TOOLTIP
        actionImage_Centers->setToolTip(QApplication::translate("RegistrationDialog", "Aligns the center voxel of the moving image with the center voxel of the fixed image", 0));
#endif // QT_NO_TOOLTIP
        actionCenters_of_Mass->setText(QApplication::translate("RegistrationDialog", "Centers of Mass", 0));
#ifndef QT_NO_TOOLTIP
        actionCenters_of_Mass->setToolTip(QApplication::translate("RegistrationDialog", "Aligns the center of mass of the moving image with the center of mass of the fixed image", 0));
#endif // QT_NO_TOOLTIP
        actionMoments_of_Inertia->setText(QApplication::translate("RegistrationDialog", "Moments of Inertia", 0));
#ifndef QT_NO_TOOLTIP
        actionMoments_of_Inertia->setToolTip(QApplication::translate("RegistrationDialog", "Aligns the centers of mass and the second moments of inertia tensors between fixed and moving images. This involves rotation, translation and flipping.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("RegistrationDialog", "Moving image layer:", 0));
        label_2->setText(QApplication::translate("RegistrationDialog", "Transformation model:", 0));
        label_3->setText(QApplication::translate("RegistrationDialog", "Image similarity metric:", 0));
#ifndef QT_NO_TOOLTIP
        inUseMask->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>When this is checked, the current segmentation in ITK-SNAP will be used as a mask  for the registration. This means that the similarity between the main image and the moving image layer will only be computed at the voxels assigned a segmentation label.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        inUseMask->setText(QApplication::translate("RegistrationDialog", "Use segmentation as mask", 0));
        groupBox->setTitle(QApplication::translate("RegistrationDialog", "Multi-resolution schedule:", 0));
        label_13->setText(QApplication::translate("RegistrationDialog", "Coarsest level:", 0));
        label_14->setText(QApplication::translate("RegistrationDialog", "Finest level:", 0));
#ifndef QT_NO_TOOLTIP
        inCoarseLevel->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Set the zoom factor used for the <span style=\" font-weight:600;\">first</span> stage of automatic segmentation. We recommend <span style=\" font-weight:600;\">8x</span> for images on the scale of 256x256x256. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inFineLevel->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Set the zoom factor used for the <span style=\" font-weight:600;\">last</span> stage of automatic segmentation. We recommend <span style=\" font-weight:600;\">4x</span> for images on the scale of 256x256x256. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRunRegistration->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Run automatic registration</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnRunRegistration->setText(QApplication::translate("RegistrationDialog", "Run Registration", 0));
        tabWidget->setTabText(tabWidget->indexOf(pgAuto), QApplication::translate("RegistrationDialog", "Automatic", 0));
        grpRotation->setTitle(QApplication::translate("RegistrationDialog", "Rotation (Euler angles):", 0));
        label_4->setText(QApplication::translate("RegistrationDialog", "x:", 0));
        label_5->setText(QApplication::translate("RegistrationDialog", "y:", 0));
        label_6->setText(QApplication::translate("RegistrationDialog", "z:", 0));
        grpTranslation->setTitle(QApplication::translate("RegistrationDialog", "Translation (mm):", 0));
        label_7->setText(QApplication::translate("RegistrationDialog", "x:", 0));
        label_8->setText(QApplication::translate("RegistrationDialog", "y:", 0));
        label_9->setText(QApplication::translate("RegistrationDialog", "z:", 0));
        grpScaling->setTitle(QApplication::translate("RegistrationDialog", "Scaling:", 0));
        label_12->setText(QApplication::translate("RegistrationDialog", "z:", 0));
        label_11->setText(QApplication::translate("RegistrationDialog", "y:", 0));
        label_10->setText(QApplication::translate("RegistrationDialog", "x:", 0));
#ifndef QT_NO_TOOLTIP
        btnFlipX->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Flip across x-axis</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnFlipX->setText(QApplication::translate("RegistrationDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnFlipY->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Flip across y-axis</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnFlipY->setText(QApplication::translate("RegistrationDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnFlipZ->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Flip across z-axis</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnFlipZ->setText(QApplication::translate("RegistrationDialog", "...", 0));
        btnInteractiveTool->setText(QApplication::translate("RegistrationDialog", "Interactive Tool", 0));
        pushButton_2->setText(QApplication::translate("RegistrationDialog", "Reset to Identity", 0));
        pushButton->setText(QApplication::translate("RegistrationDialog", "Set Center of Rotation", 0));
        btnMatchCenters->setText(QApplication::translate("RegistrationDialog", "Match by ...", 0));
        tabWidget->setTabText(tabWidget->indexOf(pgManual), QApplication::translate("RegistrationDialog", "Manual", 0));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Load transformation from file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("RegistrationDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Save transformation to file</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("RegistrationDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnReslice->setToolTip(QApplication::translate("RegistrationDialog", "<html><head/><body><p>Reslice the moving image into the space of the main image</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDIALOG_H
