/********************************************************************************
** Form generated from reading UI file 'ResampleDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESAMPLEDIALOG_H
#define UI_RESAMPLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResampleDialog
{
public:
    QAction *actionSuper2;
    QAction *actionSub2;
    QAction *actionSuperIso;
    QAction *actionSubIso;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *outInputZvox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *inOutVoxelYvox;
    QLabel *label_10;
    QLabel *label;
    QDoubleSpinBox *outInputYvox;
    QLabel *label_12;
    QDoubleSpinBox *inOutVoxelXvox;
    QLabel *label_11;
    QDoubleSpinBox *inOutVoxelZvox;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QCheckBox *chkAspect;
    QSpinBox *outInputXsize;
    QSpinBox *outInputYsize;
    QDoubleSpinBox *outInputXvox;
    QSpinBox *inOutVoxelZsize;
    QSpinBox *inOutVoxelYsize;
    QSpinBox *inOutVoxelXsize;
    QSpinBox *outInputZsize;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_18;
    QComboBox *inInterpolationMode;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPreset;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ResampleDialog)
    {
        if (ResampleDialog->objectName().isEmpty())
            ResampleDialog->setObjectName(QStringLiteral("ResampleDialog"));
        ResampleDialog->resize(451, 314);
        actionSuper2 = new QAction(ResampleDialog);
        actionSuper2->setObjectName(QStringLiteral("actionSuper2"));
        actionSub2 = new QAction(ResampleDialog);
        actionSub2->setObjectName(QStringLiteral("actionSub2"));
        actionSuperIso = new QAction(ResampleDialog);
        actionSuperIso->setObjectName(QStringLiteral("actionSuperIso"));
        actionSubIso = new QAction(ResampleDialog);
        actionSubIso->setObjectName(QStringLiteral("actionSubIso"));
        verticalLayout = new QVBoxLayout(ResampleDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ResampleDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(8);
        outInputZvox = new QDoubleSpinBox(widget);
        outInputZvox->setObjectName(QStringLiteral("outInputZvox"));
        outInputZvox->setFocusPolicy(Qt::NoFocus);
        outInputZvox->setReadOnly(true);
        outInputZvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputZvox->setDecimals(4);

        gridLayout->addWidget(outInputZvox, 4, 3, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        inOutVoxelYvox = new QDoubleSpinBox(widget);
        inOutVoxelYvox->setObjectName(QStringLiteral("inOutVoxelYvox"));
        inOutVoxelYvox->setFocusPolicy(Qt::WheelFocus);
        inOutVoxelYvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelYvox->setKeyboardTracking(false);
        inOutVoxelYvox->setDecimals(4);

        gridLayout->addWidget(inOutVoxelYvox, 3, 7, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 5, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/root/media-playback-start-4.png")));

        gridLayout->addWidget(label, 3, 4, 1, 1, Qt::AlignHCenter);

        outInputYvox = new QDoubleSpinBox(widget);
        outInputYvox->setObjectName(QStringLiteral("outInputYvox"));
        outInputYvox->setFocusPolicy(Qt::NoFocus);
        outInputYvox->setReadOnly(true);
        outInputYvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputYvox->setDecimals(4);

        gridLayout->addWidget(outInputYvox, 3, 3, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 0, 1, 1, 3, Qt::AlignHCenter);

        inOutVoxelXvox = new QDoubleSpinBox(widget);
        inOutVoxelXvox->setObjectName(QStringLiteral("inOutVoxelXvox"));
        inOutVoxelXvox->setFocusPolicy(Qt::WheelFocus);
        inOutVoxelXvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelXvox->setKeyboardTracking(false);
        inOutVoxelXvox->setDecimals(4);

        gridLayout->addWidget(inOutVoxelXvox, 2, 7, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 1, 7, 1, 1);

        inOutVoxelZvox = new QDoubleSpinBox(widget);
        inOutVoxelZvox->setObjectName(QStringLiteral("inOutVoxelZvox"));
        inOutVoxelZvox->setFocusPolicy(Qt::WheelFocus);
        inOutVoxelZvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelZvox->setKeyboardTracking(false);
        inOutVoxelZvox->setDecimals(4);

        gridLayout->addWidget(inOutVoxelZvox, 4, 7, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 3, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 5, 1, 3, Qt::AlignHCenter);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 6, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 3, 2, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 4, 2, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 3, 6, 1, 1);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 4, 6, 1, 1);

        chkAspect = new QCheckBox(widget);
        chkAspect->setObjectName(QStringLiteral("chkAspect"));

        gridLayout->addWidget(chkAspect, 5, 5, 1, 3);

        outInputXsize = new QSpinBox(widget);
        outInputXsize->setObjectName(QStringLiteral("outInputXsize"));
        outInputXsize->setFocusPolicy(Qt::NoFocus);
        outInputXsize->setReadOnly(true);
        outInputXsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputXsize->setMaximum(99999);

        gridLayout->addWidget(outInputXsize, 2, 1, 1, 1);

        outInputYsize = new QSpinBox(widget);
        outInputYsize->setObjectName(QStringLiteral("outInputYsize"));
        outInputYsize->setFocusPolicy(Qt::NoFocus);
        outInputYsize->setReadOnly(true);
        outInputYsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputYsize->setMaximum(99999);

        gridLayout->addWidget(outInputYsize, 3, 1, 1, 1);

        outInputXvox = new QDoubleSpinBox(widget);
        outInputXvox->setObjectName(QStringLiteral("outInputXvox"));
        outInputXvox->setFocusPolicy(Qt::NoFocus);
        outInputXvox->setReadOnly(true);
        outInputXvox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputXvox->setDecimals(4);

        gridLayout->addWidget(outInputXvox, 2, 3, 1, 1);

        inOutVoxelZsize = new QSpinBox(widget);
        inOutVoxelZsize->setObjectName(QStringLiteral("inOutVoxelZsize"));
        inOutVoxelZsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelZsize->setKeyboardTracking(false);

        gridLayout->addWidget(inOutVoxelZsize, 4, 5, 1, 1);

        inOutVoxelYsize = new QSpinBox(widget);
        inOutVoxelYsize->setObjectName(QStringLiteral("inOutVoxelYsize"));
        inOutVoxelYsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelYsize->setKeyboardTracking(false);

        gridLayout->addWidget(inOutVoxelYsize, 3, 5, 1, 1);

        inOutVoxelXsize = new QSpinBox(widget);
        inOutVoxelXsize->setObjectName(QStringLiteral("inOutVoxelXsize"));
        inOutVoxelXsize->setFocusPolicy(Qt::WheelFocus);
        inOutVoxelXsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOutVoxelXsize->setKeyboardTracking(false);

        gridLayout->addWidget(inOutVoxelXsize, 2, 5, 1, 1);

        outInputZsize = new QSpinBox(widget);
        outInputZsize->setObjectName(QStringLiteral("outInputZsize"));
        outInputZsize->setFocusPolicy(Qt::NoFocus);
        outInputZsize->setReadOnly(true);
        outInputZsize->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outInputZsize->setMaximum(99999);

        gridLayout->addWidget(outInputZsize, 4, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(7, 1);

        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_3 = new QWidget(ResampleDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_2->addWidget(label_18);

        inInterpolationMode = new QComboBox(widget_3);
        inInterpolationMode->setObjectName(QStringLiteral("inInterpolationMode"));

        horizontalLayout_2->addWidget(inInterpolationMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnPreset = new QPushButton(widget_3);
        btnPreset->setObjectName(QStringLiteral("btnPreset"));

        horizontalLayout_2->addWidget(btnPreset);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget_2 = new QWidget(ResampleDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(inOutVoxelXsize, inOutVoxelXvox);
        QWidget::setTabOrder(inOutVoxelXvox, inOutVoxelYsize);
        QWidget::setTabOrder(inOutVoxelYsize, inOutVoxelYvox);
        QWidget::setTabOrder(inOutVoxelYvox, inOutVoxelZsize);
        QWidget::setTabOrder(inOutVoxelZsize, inOutVoxelZvox);
        QWidget::setTabOrder(inOutVoxelZvox, chkAspect);
        QWidget::setTabOrder(chkAspect, buttonBox);

        retranslateUi(ResampleDialog);

        QMetaObject::connectSlotsByName(ResampleDialog);
    } // setupUi

    void retranslateUi(QDialog *ResampleDialog)
    {
        ResampleDialog->setWindowTitle(QApplication::translate("ResampleDialog", "Resample ROI - ITK-SNAP", 0));
        actionSuper2->setText(QApplication::translate("ResampleDialog", "Supersample by 2", 0));
        actionSub2->setText(QApplication::translate("ResampleDialog", "Subsample by 2", 0));
        actionSuperIso->setText(QApplication::translate("ResampleDialog", "Supersample to Isotropic", 0));
        actionSubIso->setText(QApplication::translate("ResampleDialog", "Subsample to Isotropic", 0));
        groupBox->setTitle(QApplication::translate("ResampleDialog", "Segmentation ROI Resolution:", 0));
        label_4->setText(QApplication::translate("ResampleDialog", "x:", 0));
        label_5->setText(QApplication::translate("ResampleDialog", "y:", 0));
        label_6->setText(QApplication::translate("ResampleDialog", "z:", 0));
        label_10->setText(QApplication::translate("ResampleDialog", "voxels", 0));
        label->setText(QString());
        label_12->setText(QApplication::translate("ResampleDialog", "Input ROI", 0));
        label_11->setText(QApplication::translate("ResampleDialog", "mm/voxel", 0));
        label_2->setText(QApplication::translate("ResampleDialog", "*", 0));
        label_9->setText(QApplication::translate("ResampleDialog", "mm/voxel", 0));
        label_8->setText(QApplication::translate("ResampleDialog", "voxels", 0));
        label_13->setText(QApplication::translate("ResampleDialog", "Resampled ROI", 0));
        label_3->setText(QApplication::translate("ResampleDialog", "*", 0));
        label_14->setText(QApplication::translate("ResampleDialog", "*", 0));
        label_15->setText(QApplication::translate("ResampleDialog", "*", 0));
        label_16->setText(QApplication::translate("ResampleDialog", "*", 0));
        label_17->setText(QApplication::translate("ResampleDialog", "*", 0));
        chkAspect->setText(QApplication::translate("ResampleDialog", "Fixed voxel aspect ratio", 0));
        label_18->setText(QApplication::translate("ResampleDialog", "Interpolation:", 0));
        btnPreset->setText(QApplication::translate("ResampleDialog", "Presets", 0));
    } // retranslateUi

};

namespace Ui {
    class ResampleDialog: public Ui_ResampleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESAMPLEDIALOG_H
