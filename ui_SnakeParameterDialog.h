/********************************************************************************
** Form generated from reading UI file 'SnakeParameterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEPARAMETERDIALOG_H
#define UI_SNAKEPARAMETERDIALOG_H

#include <QDoubleSlider.h>
#include <QtCore/QVariant>
#include <QtSimpleOpenGLBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnakeParameterDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_10;
    QLabel *lblForceAlpha;
    QLabel *lblForceBeta;
    QLabel *label_9;
    QLabel *label_11;
    QFrame *frame;
    QVBoxLayout *verticalLayout_9;
    QtSimpleOpenGLBox *boxForceAlpha;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QtSimpleOpenGLBox *boxForceBeta;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_11;
    QtSimpleOpenGLBox *boxForceGamma;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_12;
    QtSimpleOpenGLBox *boxForceTotal;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkAnimate;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackIntuitive;
    QWidget *pageZhu;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QDoubleSpinBox *inZhuAlphaSimple;
    QDoubleSlider *inZhuAlphaSimpleSlider;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *inZhuBetaSimple;
    QDoubleSlider *inZhuBetaSimpleSlider;
    QSpacerItem *verticalSpacer;
    QWidget *pageCaselles;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *inCasellesAlphaSimple;
    QDoubleSlider *inCasellesAlphaSimpleSlider;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *inCasellesBetaSimple;
    QDoubleSlider *inCasellesBetaSimpleSlider;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *inCasellesGammaSimple;
    QDoubleSlider *inCasellesGammaSimpleSlider;
    QWidget *tabMath;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QCheckBox *chkAdvanced;
    QStackedWidget *stackEqn;
    QWidget *pageEqnZhu;
    QVBoxLayout *verticalLayout;
    QLabel *outFormula_2;
    QWidget *pageEqnCaselles;
    QVBoxLayout *verticalLayout_2;
    QLabel *outFormula;
    QWidget *pageEqnAdvanced;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_6;
    QLabel *outFormula_3;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QDoubleSlider *inBetaMathSlider;
    QLabel *lblBetaExp;
    QDoubleSpinBox *inAlphaMath;
    QDoubleSlider *inAlphaMathSlider;
    QLabel *label_10;
    QDoubleSpinBox *inBetaMath;
    QLabel *label_6;
    QLabel *lblAlphaExp;
    QDoubleSpinBox *inGammaMath;
    QDoubleSlider *inGammaMathSlider;
    QLabel *lblGammaExp;
    QLabel *lblGammaMath;
    QSpinBox *inAlphaExp;
    QSpinBox *inBetaExp;
    QSpinBox *inGammaExp;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QDoubleSpinBox *inSpeedup;
    QDoubleSlider *inSpeedupSlider;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRestore;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *SnakeParameterDialog)
    {
        if (SnakeParameterDialog->objectName().isEmpty())
            SnakeParameterDialog->setObjectName(QStringLiteral("SnakeParameterDialog"));
        SnakeParameterDialog->resize(717, 451);
        gridLayout = new QGridLayout(SnakeParameterDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, -1, -1, 8);
        groupBox = new QGroupBox(SnakeParameterDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(320, 0));
        groupBox->setStyleSheet(QStringLiteral("font-size:11px;"));
        gridLayout_10 = new QGridLayout(groupBox);
        gridLayout_10->setSpacing(4);
        gridLayout_10->setContentsMargins(4, 4, 4, 4);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        lblForceAlpha = new QLabel(groupBox);
        lblForceAlpha->setObjectName(QStringLiteral("lblForceAlpha"));

        gridLayout_10->addWidget(lblForceAlpha, 0, 0, 1, 1, Qt::AlignHCenter);

        lblForceBeta = new QLabel(groupBox);
        lblForceBeta->setObjectName(QStringLiteral("lblForceBeta"));

        gridLayout_10->addWidget(lblForceBeta, 0, 1, 1, 1, Qt::AlignHCenter);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_10->addWidget(label_9, 3, 0, 1, 1, Qt::AlignHCenter);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_10->addWidget(label_11, 3, 1, 1, 1, Qt::AlignHCenter);

        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_9 = new QVBoxLayout(frame);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        boxForceAlpha = new QtSimpleOpenGLBox(frame);
        boxForceAlpha->setObjectName(QStringLiteral("boxForceAlpha"));
        boxForceAlpha->setStyleSheet(QStringLiteral("border:1px black solid;"));

        verticalLayout_9->addWidget(boxForceAlpha);


        gridLayout_10->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        boxForceBeta = new QtSimpleOpenGLBox(frame_2);
        boxForceBeta->setObjectName(QStringLiteral("boxForceBeta"));
        boxForceBeta->setStyleSheet(QStringLiteral("border:1px black solid;"));

        verticalLayout_10->addWidget(boxForceBeta);


        gridLayout_10->addWidget(frame_2, 1, 1, 1, 1);

        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        verticalLayout_11 = new QVBoxLayout(frame_3);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        boxForceGamma = new QtSimpleOpenGLBox(frame_3);
        boxForceGamma->setObjectName(QStringLiteral("boxForceGamma"));
        boxForceGamma->setStyleSheet(QStringLiteral("border:1px black solid;"));

        verticalLayout_11->addWidget(boxForceGamma);


        gridLayout_10->addWidget(frame_3, 4, 0, 1, 1);

        frame_4 = new QFrame(groupBox);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        verticalLayout_12 = new QVBoxLayout(frame_4);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        boxForceTotal = new QtSimpleOpenGLBox(frame_4);
        boxForceTotal->setObjectName(QStringLiteral("boxForceTotal"));
        boxForceTotal->setStyleSheet(QStringLiteral("border:1px black solid;"));

        verticalLayout_12->addWidget(boxForceTotal);


        gridLayout_10->addWidget(frame_4, 4, 1, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        chkAnimate = new QCheckBox(widget);
        chkAnimate->setObjectName(QStringLiteral("chkAnimate"));

        horizontalLayout->addWidget(chkAnimate);


        gridLayout_10->addWidget(widget, 5, 0, 1, 2, Qt::AlignRight);

        gridLayout_10->setRowStretch(1, 1);
        gridLayout_10->setRowStretch(4, 1);

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        tabWidget = new QTabWidget(SnakeParameterDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMaximumSize(QSize(357, 16777215));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 12, 4, 4);
        stackIntuitive = new QStackedWidget(tab);
        stackIntuitive->setObjectName(QStringLiteral("stackIntuitive"));
        pageZhu = new QWidget();
        pageZhu->setObjectName(QStringLiteral("pageZhu"));
        verticalLayout_6 = new QVBoxLayout(pageZhu);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_2 = new QGroupBox(pageZhu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 6, 4, 4);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-size:11px;"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        inZhuAlphaSimple = new QDoubleSpinBox(groupBox_2);
        inZhuAlphaSimple->setObjectName(QStringLiteral("inZhuAlphaSimple"));

        gridLayout_2->addWidget(inZhuAlphaSimple, 1, 0, 1, 1);

        inZhuAlphaSimpleSlider = new QDoubleSlider(groupBox_2);
        inZhuAlphaSimpleSlider->setObjectName(QStringLiteral("inZhuAlphaSimpleSlider"));
        inZhuAlphaSimpleSlider->setMaximum(100);
        inZhuAlphaSimpleSlider->setOrientation(Qt::Horizontal);
        inZhuAlphaSimpleSlider->setTickPosition(QSlider::TicksBelow);
        inZhuAlphaSimpleSlider->setTickInterval(25);

        gridLayout_2->addWidget(inZhuAlphaSimpleSlider, 1, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(pageZhu);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 6, 4, 4);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size:11px;"));
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);

        inZhuBetaSimple = new QDoubleSpinBox(groupBox_3);
        inZhuBetaSimple->setObjectName(QStringLiteral("inZhuBetaSimple"));

        gridLayout_3->addWidget(inZhuBetaSimple, 1, 0, 1, 1);

        inZhuBetaSimpleSlider = new QDoubleSlider(groupBox_3);
        inZhuBetaSimpleSlider->setObjectName(QStringLiteral("inZhuBetaSimpleSlider"));
        inZhuBetaSimpleSlider->setMaximum(100);
        inZhuBetaSimpleSlider->setOrientation(Qt::Horizontal);
        inZhuBetaSimpleSlider->setTickPosition(QSlider::TicksBelow);
        inZhuBetaSimpleSlider->setTickInterval(25);

        gridLayout_3->addWidget(inZhuBetaSimpleSlider, 1, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        stackIntuitive->addWidget(pageZhu);
        pageCaselles = new QWidget();
        pageCaselles->setObjectName(QStringLiteral("pageCaselles"));
        verticalLayout_7 = new QVBoxLayout(pageCaselles);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_5 = new QGroupBox(pageCaselles);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(4, 6, 4, 4);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font-size:11px;"));
        label_3->setWordWrap(true);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 2);

        inCasellesAlphaSimple = new QDoubleSpinBox(groupBox_5);
        inCasellesAlphaSimple->setObjectName(QStringLiteral("inCasellesAlphaSimple"));

        gridLayout_4->addWidget(inCasellesAlphaSimple, 1, 0, 1, 1);

        inCasellesAlphaSimpleSlider = new QDoubleSlider(groupBox_5);
        inCasellesAlphaSimpleSlider->setObjectName(QStringLiteral("inCasellesAlphaSimpleSlider"));
        inCasellesAlphaSimpleSlider->setMaximum(100);
        inCasellesAlphaSimpleSlider->setOrientation(Qt::Horizontal);
        inCasellesAlphaSimpleSlider->setTickPosition(QSlider::TicksBelow);
        inCasellesAlphaSimpleSlider->setTickInterval(25);

        gridLayout_4->addWidget(inCasellesAlphaSimpleSlider, 1, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(pageCaselles);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 6, 4, 4);
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font-size:11px;"));
        label_4->setWordWrap(true);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 2);

        inCasellesBetaSimple = new QDoubleSpinBox(groupBox_6);
        inCasellesBetaSimple->setObjectName(QStringLiteral("inCasellesBetaSimple"));

        gridLayout_5->addWidget(inCasellesBetaSimple, 1, 0, 1, 1);

        inCasellesBetaSimpleSlider = new QDoubleSlider(groupBox_6);
        inCasellesBetaSimpleSlider->setObjectName(QStringLiteral("inCasellesBetaSimpleSlider"));
        inCasellesBetaSimpleSlider->setMaximum(100);
        inCasellesBetaSimpleSlider->setOrientation(Qt::Horizontal);
        inCasellesBetaSimpleSlider->setTickPosition(QSlider::TicksBelow);
        inCasellesBetaSimpleSlider->setTickInterval(25);

        gridLayout_5->addWidget(inCasellesBetaSimpleSlider, 1, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(pageCaselles);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_6 = new QGridLayout(groupBox_7);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, 6, 4, 4);
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font-size:11px;"));
        label_5->setWordWrap(true);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 2);

        inCasellesGammaSimple = new QDoubleSpinBox(groupBox_7);
        inCasellesGammaSimple->setObjectName(QStringLiteral("inCasellesGammaSimple"));

        gridLayout_6->addWidget(inCasellesGammaSimple, 1, 0, 1, 1);

        inCasellesGammaSimpleSlider = new QDoubleSlider(groupBox_7);
        inCasellesGammaSimpleSlider->setObjectName(QStringLiteral("inCasellesGammaSimpleSlider"));
        inCasellesGammaSimpleSlider->setMaximum(100);
        inCasellesGammaSimpleSlider->setOrientation(Qt::Horizontal);
        inCasellesGammaSimpleSlider->setTickPosition(QSlider::TicksBelow);
        inCasellesGammaSimpleSlider->setTickInterval(10);

        gridLayout_6->addWidget(inCasellesGammaSimpleSlider, 1, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_7);

        stackIntuitive->addWidget(pageCaselles);

        verticalLayout_4->addWidget(stackIntuitive);

        tabWidget->addTab(tab, QString());
        tabMath = new QWidget();
        tabMath->setObjectName(QStringLiteral("tabMath"));
        verticalLayout_3 = new QVBoxLayout(tabMath);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 12, 4, 4);
        groupBox_8 = new QGroupBox(tabMath);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 6, 2, 8);
        chkAdvanced = new QCheckBox(groupBox_8);
        chkAdvanced->setObjectName(QStringLiteral("chkAdvanced"));

        gridLayout_8->addWidget(chkAdvanced, 2, 1, 1, 1, Qt::AlignRight);

        stackEqn = new QStackedWidget(groupBox_8);
        stackEqn->setObjectName(QStringLiteral("stackEqn"));
        pageEqnZhu = new QWidget();
        pageEqnZhu->setObjectName(QStringLiteral("pageEqnZhu"));
        verticalLayout = new QVBoxLayout(pageEqnZhu);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outFormula_2 = new QLabel(pageEqnZhu);
        outFormula_2->setObjectName(QStringLiteral("outFormula_2"));
        outFormula_2->setPixmap(QPixmap(QString::fromUtf8(":/root/formula02.gif")));
        outFormula_2->setScaledContents(false);

        verticalLayout->addWidget(outFormula_2, 0, Qt::AlignHCenter);

        stackEqn->addWidget(pageEqnZhu);
        pageEqnCaselles = new QWidget();
        pageEqnCaselles->setObjectName(QStringLiteral("pageEqnCaselles"));
        verticalLayout_2 = new QVBoxLayout(pageEqnCaselles);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        outFormula = new QLabel(pageEqnCaselles);
        outFormula->setObjectName(QStringLiteral("outFormula"));
        outFormula->setPixmap(QPixmap(QString::fromUtf8(":/root/formula01.gif")));
        outFormula->setScaledContents(false);

        verticalLayout_2->addWidget(outFormula, 0, Qt::AlignHCenter);

        stackEqn->addWidget(pageEqnCaselles);
        pageEqnAdvanced = new QWidget();
        pageEqnAdvanced->setObjectName(QStringLiteral("pageEqnAdvanced"));
        verticalLayout_8 = new QVBoxLayout(pageEqnAdvanced);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_6 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        outFormula_3 = new QLabel(pageEqnAdvanced);
        outFormula_3->setObjectName(QStringLiteral("outFormula_3"));
        outFormula_3->setPixmap(QPixmap(QString::fromUtf8(":/root/formula03.gif")));
        outFormula_3->setScaledContents(true);

        verticalLayout_8->addWidget(outFormula_3);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        stackEqn->addWidget(pageEqnAdvanced);

        gridLayout_8->addWidget(stackEqn, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_8);

        groupBox_4 = new QGroupBox(tabMath);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(16);
        gridLayout_7->setContentsMargins(4, 6, 4, 4);
        inBetaMathSlider = new QDoubleSlider(groupBox_4);
        inBetaMathSlider->setObjectName(QStringLiteral("inBetaMathSlider"));
        inBetaMathSlider->setMaximum(100);
        inBetaMathSlider->setOrientation(Qt::Horizontal);
        inBetaMathSlider->setTickPosition(QSlider::TicksBelow);
        inBetaMathSlider->setTickInterval(25);

        gridLayout_7->addWidget(inBetaMathSlider, 1, 2, 1, 1);

        lblBetaExp = new QLabel(groupBox_4);
        lblBetaExp->setObjectName(QStringLiteral("lblBetaExp"));

        gridLayout_7->addWidget(lblBetaExp, 1, 3, 1, 1);

        inAlphaMath = new QDoubleSpinBox(groupBox_4);
        inAlphaMath->setObjectName(QStringLiteral("inAlphaMath"));

        gridLayout_7->addWidget(inAlphaMath, 0, 1, 1, 1);

        inAlphaMathSlider = new QDoubleSlider(groupBox_4);
        inAlphaMathSlider->setObjectName(QStringLiteral("inAlphaMathSlider"));
        inAlphaMathSlider->setMaximum(100);
        inAlphaMathSlider->setOrientation(Qt::Horizontal);
        inAlphaMathSlider->setTickPosition(QSlider::TicksBelow);
        inAlphaMathSlider->setTickInterval(25);

        gridLayout_7->addWidget(inAlphaMathSlider, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_7->addWidget(label_10, 1, 0, 1, 1);

        inBetaMath = new QDoubleSpinBox(groupBox_4);
        inBetaMath->setObjectName(QStringLiteral("inBetaMath"));

        gridLayout_7->addWidget(inBetaMath, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        lblAlphaExp = new QLabel(groupBox_4);
        lblAlphaExp->setObjectName(QStringLiteral("lblAlphaExp"));

        gridLayout_7->addWidget(lblAlphaExp, 0, 3, 1, 1);

        inGammaMath = new QDoubleSpinBox(groupBox_4);
        inGammaMath->setObjectName(QStringLiteral("inGammaMath"));

        gridLayout_7->addWidget(inGammaMath, 2, 1, 1, 1);

        inGammaMathSlider = new QDoubleSlider(groupBox_4);
        inGammaMathSlider->setObjectName(QStringLiteral("inGammaMathSlider"));
        inGammaMathSlider->setMaximum(100);
        inGammaMathSlider->setOrientation(Qt::Horizontal);
        inGammaMathSlider->setTickPosition(QSlider::TicksBelow);
        inGammaMathSlider->setTickInterval(25);

        gridLayout_7->addWidget(inGammaMathSlider, 2, 2, 1, 1);

        lblGammaExp = new QLabel(groupBox_4);
        lblGammaExp->setObjectName(QStringLiteral("lblGammaExp"));

        gridLayout_7->addWidget(lblGammaExp, 2, 3, 1, 1);

        lblGammaMath = new QLabel(groupBox_4);
        lblGammaMath->setObjectName(QStringLiteral("lblGammaMath"));

        gridLayout_7->addWidget(lblGammaMath, 2, 0, 1, 1);

        inAlphaExp = new QSpinBox(groupBox_4);
        inAlphaExp->setObjectName(QStringLiteral("inAlphaExp"));

        gridLayout_7->addWidget(inAlphaExp, 0, 4, 1, 1);

        inBetaExp = new QSpinBox(groupBox_4);
        inBetaExp->setObjectName(QStringLiteral("inBetaExp"));

        gridLayout_7->addWidget(inBetaExp, 1, 4, 1, 1);

        inGammaExp = new QSpinBox(groupBox_4);
        inGammaExp->setObjectName(QStringLiteral("inGammaExp"));

        gridLayout_7->addWidget(inGammaExp, 2, 4, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_3->setStretch(2, 1);
        tabWidget->addTab(tabMath, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QStringLiteral("tabAdvanced"));
        verticalLayout_5 = new QVBoxLayout(tabAdvanced);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(4, 12, 4, 4);
        groupBox_9 = new QGroupBox(tabAdvanced);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(4, 6, 4, 4);
        inSpeedup = new QDoubleSpinBox(groupBox_9);
        inSpeedup->setObjectName(QStringLiteral("inSpeedup"));

        gridLayout_9->addWidget(inSpeedup, 1, 0, 1, 1);

        inSpeedupSlider = new QDoubleSlider(groupBox_9);
        inSpeedupSlider->setObjectName(QStringLiteral("inSpeedupSlider"));
        inSpeedupSlider->setMaximum(100);
        inSpeedupSlider->setOrientation(Qt::Horizontal);
        inSpeedupSlider->setTickPosition(QSlider::TicksBelow);
        inSpeedupSlider->setTickInterval(25);

        gridLayout_9->addWidget(inSpeedupSlider, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font-size:11px;"));
        label_13->setWordWrap(true);

        gridLayout_9->addWidget(label_13, 0, 0, 1, 2);


        verticalLayout_5->addWidget(groupBox_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        tabWidget->addTab(tabAdvanced, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        widget_2 = new QWidget(SnakeParameterDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 20));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(6);
#endif
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnRestore = new QPushButton(widget_2);
        btnRestore->setObjectName(QStringLiteral("btnRestore"));

        horizontalLayout_2->addWidget(btnRestore);

        btnOpen = new QPushButton(widget_2);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_2->addWidget(btnOpen);

        btnSave = new QPushButton(widget_2);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout_2->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget_2);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        gridLayout->addWidget(widget_2, 1, 0, 1, 2);

        QWidget::setTabOrder(tabWidget, inZhuAlphaSimple);
        QWidget::setTabOrder(inZhuAlphaSimple, inZhuAlphaSimpleSlider);
        QWidget::setTabOrder(inZhuAlphaSimpleSlider, inZhuBetaSimple);
        QWidget::setTabOrder(inZhuBetaSimple, inZhuBetaSimpleSlider);
        QWidget::setTabOrder(inZhuBetaSimpleSlider, inCasellesAlphaSimple);
        QWidget::setTabOrder(inCasellesAlphaSimple, inCasellesAlphaSimpleSlider);
        QWidget::setTabOrder(inCasellesAlphaSimpleSlider, inCasellesBetaSimple);
        QWidget::setTabOrder(inCasellesBetaSimple, inCasellesBetaSimpleSlider);
        QWidget::setTabOrder(inCasellesBetaSimpleSlider, inCasellesGammaSimple);
        QWidget::setTabOrder(inCasellesGammaSimple, inCasellesGammaSimpleSlider);
        QWidget::setTabOrder(inCasellesGammaSimpleSlider, chkAdvanced);
        QWidget::setTabOrder(chkAdvanced, inAlphaMath);
        QWidget::setTabOrder(inAlphaMath, inAlphaMathSlider);
        QWidget::setTabOrder(inAlphaMathSlider, inAlphaExp);
        QWidget::setTabOrder(inAlphaExp, inBetaMath);
        QWidget::setTabOrder(inBetaMath, inBetaMathSlider);
        QWidget::setTabOrder(inBetaMathSlider, inBetaExp);
        QWidget::setTabOrder(inBetaExp, inGammaMath);
        QWidget::setTabOrder(inGammaMath, inGammaMathSlider);
        QWidget::setTabOrder(inGammaMathSlider, inGammaExp);
        QWidget::setTabOrder(inGammaExp, inSpeedup);
        QWidget::setTabOrder(inSpeedup, inSpeedupSlider);
        QWidget::setTabOrder(inSpeedupSlider, chkAnimate);

        retranslateUi(SnakeParameterDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), SnakeParameterDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);
        stackIntuitive->setCurrentIndex(0);
        stackEqn->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SnakeParameterDialog);
    } // setupUi

    void retranslateUi(QDialog *SnakeParameterDialog)
    {
        SnakeParameterDialog->setWindowTitle(QApplication::translate("SnakeParameterDialog", "Active Contour Evolution Parameters - ITK-SNAP", 0));
        groupBox->setTitle(QApplication::translate("SnakeParameterDialog", "Conceptual Illustration of Forces in 2D", 0));
        lblForceAlpha->setText(QApplication::translate("SnakeParameterDialog", "Region Competition", 0));
        lblForceBeta->setText(QApplication::translate("SnakeParameterDialog", "Smoothing", 0));
        label_9->setText(QApplication::translate("SnakeParameterDialog", "Edge Attraction", 0));
        label_11->setText(QApplication::translate("SnakeParameterDialog", "Combined Force", 0));
        chkAnimate->setText(QApplication::translate("SnakeParameterDialog", "Animate", 0));
        groupBox_2->setTitle(QApplication::translate("SnakeParameterDialog", "Region competition force:", 0));
        label->setText(QApplication::translate("SnakeParameterDialog", "Pushes the contour inwards or outwards, modulated by the sign and value of the speed image.", 0));
        groupBox_3->setTitle(QApplication::translate("SnakeParameterDialog", "Smoothing (curvature) force:", 0));
        label_2->setText(QApplication::translate("SnakeParameterDialog", "Makes the contour boundary smoother and can prevent the contour from leaking into narrow objects such as vessels.", 0));
        groupBox_5->setTitle(QApplication::translate("SnakeParameterDialog", "Expansion (baloon) force", 0));
        label_3->setText(QApplication::translate("SnakeParameterDialog", "A force pushing outwards (or inwards if the weight below is negative) on the contour boundary proportionally to the speed image.", 0));
        groupBox_6->setTitle(QApplication::translate("SnakeParameterDialog", "Smoothing (curvature) force:", 0));
        label_4->setText(QApplication::translate("SnakeParameterDialog", "Makes the contour boundary smoother and can prevent the contour from leaking into narrow objects such as vessels.", 0));
        groupBox_7->setTitle(QApplication::translate("SnakeParameterDialog", "Edge attraction (advection) force:", 0));
        label_5->setText(QApplication::translate("SnakeParameterDialog", "Attracts the boundary of the contour to nearby edges and can prevent the contour from leaking past edges.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SnakeParameterDialog", "Intuitive Mode", 0));
        groupBox_8->setTitle(QApplication::translate("SnakeParameterDialog", "Contour evolution equation:", 0));
#ifndef QT_NO_TOOLTIP
        chkAdvanced->setToolTip(QApplication::translate("SnakeParameterDialog", "The advanced expression provides additional flexibility by allowing the exponent of the speed image to be changed in each of the terms.", 0));
#endif // QT_NO_TOOLTIP
        chkAdvanced->setText(QApplication::translate("SnakeParameterDialog", "Use advanced expression", 0));
        outFormula_2->setText(QString());
        outFormula->setText(QString());
        outFormula_3->setText(QString());
        groupBox_4->setTitle(QApplication::translate("SnakeParameterDialog", "Parameters:", 0));
        lblBetaExp->setText(QApplication::translate("SnakeParameterDialog", "<html><head/><body><p>r<span style=\" vertical-align:sub;\">\316\262</span>:</p></body></html>", 0));
        label_10->setText(QApplication::translate("SnakeParameterDialog", "\316\262:", 0));
        label_6->setText(QApplication::translate("SnakeParameterDialog", "\316\261:", 0));
        lblAlphaExp->setText(QApplication::translate("SnakeParameterDialog", "<html><head/><body><p>r<span style=\" vertical-align:sub;\">\316\261</span>:</p></body></html>", 0));
        lblGammaExp->setText(QApplication::translate("SnakeParameterDialog", "<html><head/><body><p>r<span style=\" vertical-align:sub;\">\316\263</span>:</p></body></html>", 0));
        lblGammaMath->setText(QApplication::translate("SnakeParameterDialog", "\316\263:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabMath), QApplication::translate("SnakeParameterDialog", "Math Mode", 0));
        groupBox_9->setTitle(QApplication::translate("SnakeParameterDialog", "Speed-up factor", 0));
        label_13->setText(QApplication::translate("SnakeParameterDialog", "It is possible to speed up active contour evolution by increasing the step size over the theoretically optimal value. However, this can result in numerical instability.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QApplication::translate("SnakeParameterDialog", "Advanced", 0));
        btnRestore->setText(QApplication::translate("SnakeParameterDialog", "Restore Defaults", 0));
        btnOpen->setText(QApplication::translate("SnakeParameterDialog", "Open...", 0));
        btnSave->setText(QApplication::translate("SnakeParameterDialog", "Save...", 0));
        btnClose->setText(QApplication::translate("SnakeParameterDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SnakeParameterDialog: public Ui_SnakeParameterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEPARAMETERDIALOG_H
