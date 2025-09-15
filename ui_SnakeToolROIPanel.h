/********************************************************************************
** Form generated from reading UI file 'SnakeToolROIPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKETOOLROIPANEL_H
#define UI_SNAKETOOLROIPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnakeToolROIPanel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QSpinBox *inIndexX;
    QSpinBox *inIndexY;
    QLabel *label_3;
    QSpinBox *inIndexZ;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QSpinBox *inSizeX;
    QSpinBox *inSizeY;
    QSpinBox *inSizeZ;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnResetROI;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkResample;
    QCheckBox *chkCarryLabels;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAuto;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SnakeToolROIPanel)
    {
        if (SnakeToolROIPanel->objectName().isEmpty())
            SnakeToolROIPanel->setObjectName(QStringLiteral("SnakeToolROIPanel"));
        SnakeToolROIPanel->resize(172, 439);
        SnakeToolROIPanel->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(SnakeToolROIPanel);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(SnakeToolROIPanel);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        widget_6 = new QWidget(SnakeToolROIPanel);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(3);
        gridLayout_3->setVerticalSpacing(2);
        gridLayout_3->setContentsMargins(12, 0, 0, 0);
        inIndexX = new QSpinBox(widget_6);
        inIndexX->setObjectName(QStringLiteral("inIndexX"));
        inIndexX->setMaximumSize(QSize(64, 16777215));
        inIndexX->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(inIndexX, 2, 0, 1, 1);

        inIndexY = new QSpinBox(widget_6);
        inIndexY->setObjectName(QStringLiteral("inIndexY"));
        inIndexY->setMaximumSize(QSize(64, 16777215));
        inIndexY->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(inIndexY, 2, 1, 1, 1);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 0, 0, 2, 3);

        inIndexZ = new QSpinBox(widget_6);
        inIndexZ->setObjectName(QStringLiteral("inIndexZ"));
        inIndexZ->setMaximumSize(QSize(64, 16777215));
        inIndexZ->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(inIndexZ, 2, 2, 1, 1);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(SnakeToolROIPanel);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(12, 0, 0, 0);
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 0, 2, 3);

        inSizeX = new QSpinBox(widget_7);
        inSizeX->setObjectName(QStringLiteral("inSizeX"));
        inSizeX->setMaximumSize(QSize(64, 16777215));
        inSizeX->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(inSizeX, 2, 0, 1, 1);

        inSizeY = new QSpinBox(widget_7);
        inSizeY->setObjectName(QStringLiteral("inSizeY"));
        inSizeY->setMaximumSize(QSize(64, 16777215));
        inSizeY->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(inSizeY, 2, 1, 1, 1);

        inSizeZ = new QSpinBox(widget_7);
        inSizeZ->setObjectName(QStringLiteral("inSizeZ"));
        inSizeZ->setMaximumSize(QSize(64, 16777215));
        inSizeZ->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(inSizeZ, 2, 2, 1, 1);


        verticalLayout->addWidget(widget_7);

        widget_3 = new QWidget(SnakeToolROIPanel);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnResetROI = new QPushButton(widget_3);
        btnResetROI->setObjectName(QStringLiteral("btnResetROI"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnResetROI->sizePolicy().hasHeightForWidth());
        btnResetROI->setSizePolicy(sizePolicy);
        btnResetROI->setMinimumSize(QSize(120, 0));
        btnResetROI->setFont(font);

        horizontalLayout_3->addWidget(btnResetROI);


        verticalLayout->addWidget(widget_3);

        line = new QFrame(SnakeToolROIPanel);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(SnakeToolROIPanel);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("font-size:12px;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, 0, 0, 0);
        chkResample = new QCheckBox(widget);
        chkResample->setObjectName(QStringLiteral("chkResample"));

        verticalLayout_2->addWidget(chkResample);

        chkCarryLabels = new QCheckBox(widget);
        chkCarryLabels->setObjectName(QStringLiteral("chkCarryLabels"));

        verticalLayout_2->addWidget(chkCarryLabels);


        verticalLayout->addWidget(widget);

        line_3 = new QFrame(SnakeToolROIPanel);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(SnakeToolROIPanel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAuto = new QPushButton(widget_2);
        btnAuto->setObjectName(QStringLiteral("btnAuto"));
        sizePolicy.setHeightForWidth(btnAuto->sizePolicy().hasHeightForWidth());
        btnAuto->setSizePolicy(sizePolicy);
        btnAuto->setMinimumSize(QSize(120, 0));
        btnAuto->setFont(font);

        horizontalLayout_2->addWidget(btnAuto);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SnakeToolROIPanel);

        QMetaObject::connectSlotsByName(SnakeToolROIPanel);
    } // setupUi

    void retranslateUi(QWidget *SnakeToolROIPanel)
    {
        SnakeToolROIPanel->setWindowTitle(QApplication::translate("SnakeToolROIPanel", "Form", 0));
        label_5->setText(QApplication::translate("SnakeToolROIPanel", "ROI for auto-segmentation:", 0));
#ifndef QT_NO_TOOLTIP
        inIndexX->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The position of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inIndexY->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The position of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("SnakeToolROIPanel", "Position (x,y,z):", 0));
#ifndef QT_NO_TOOLTIP
        inIndexZ->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The position of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SnakeToolROIPanel", "Size (x,y,z):", 0));
#ifndef QT_NO_TOOLTIP
        inSizeX->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The size of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inSizeY->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The size of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inSizeZ->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>The size of the 3D region of interest (ROI) for automatic segmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnResetROI->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>Reset the region of interest to be the whole image.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnResetROI->setText(QApplication::translate("SnakeToolROIPanel", "Reset ROI", 0));
#ifndef QT_NO_TOOLTIP
        chkResample->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p><span style=\" font-size:12pt;\">When checked, you will have an option to change the resolution of the region of interest (i.e., subsample or supersample) before running automatic segmentation.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkResample->setText(QApplication::translate("SnakeToolROIPanel", "Resample ROI", 0));
#ifndef QT_NO_TOOLTIP
        chkCarryLabels->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>When checked, the existing segmentation will be carried over to the automatic segmentation mode and used to initialize the active contour. When unchecked, the active contour will be initialized with bubbles.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkCarryLabels->setText(QApplication::translate("SnakeToolROIPanel", "Initialize with current\n"
"segmentation", 0));
#ifndef QT_NO_TOOLTIP
        btnAuto->setToolTip(QApplication::translate("SnakeToolROIPanel", "<html><head/><body><p>Press this button to start semi-automatic segmentation</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAuto->setText(QApplication::translate("SnakeToolROIPanel", "Segment 3D", 0));
    } // retranslateUi

};

namespace Ui {
    class SnakeToolROIPanel: public Ui_SnakeToolROIPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKETOOLROIPANEL_H
