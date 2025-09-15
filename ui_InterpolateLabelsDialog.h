/********************************************************************************
** Form generated from reading UI file 'InterpolateLabelsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERPOLATELABELSDIALOG_H
#define UI_INTERPOLATELABELSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterpolateLabelsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QRadioButton *btnInterpolateAll;
    QRadioButton *btnInterpolateOne;
    QLabel *label_3;
    QComboBox *inLabelToInterpolate;
    QLabel *label_4;
    QComboBox *inActiveLabel;
    QComboBox *inDrawOverFilter;
    QLabel *label_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkMorphologyUseDistance;
    QCheckBox *chkMorphologyUseOptimalAlignment;
    QCheckBox *chkMorphologyInterpolateOneAxis;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *morphologyInterpolationAxis;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnInterpolate;
    QPushButton *btnClose;

    void setupUi(QDialog *InterpolateLabelsDialog)
    {
        if (InterpolateLabelsDialog->objectName().isEmpty())
            InterpolateLabelsDialog->setObjectName(QStringLiteral("InterpolateLabelsDialog"));
        InterpolateLabelsDialog->resize(368, 615);
        verticalLayout = new QVBoxLayout(InterpolateLabelsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InterpolateLabelsDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font-size:16px;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(InterpolateLabelsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-size:12px;\n"
"color: gray;"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        widget_2 = new QWidget(InterpolateLabelsDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        btnInterpolateAll = new QRadioButton(widget_2);
        btnInterpolateAll->setObjectName(QStringLiteral("btnInterpolateAll"));

        formLayout->setWidget(0, QFormLayout::FieldRole, btnInterpolateAll);

        btnInterpolateOne = new QRadioButton(widget_2);
        btnInterpolateOne->setObjectName(QStringLiteral("btnInterpolateOne"));
        btnInterpolateOne->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, btnInterpolateOne);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        inLabelToInterpolate = new QComboBox(widget_2);
        inLabelToInterpolate->setObjectName(QStringLiteral("inLabelToInterpolate"));
        inLabelToInterpolate->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(2, QFormLayout::FieldRole, inLabelToInterpolate);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        inActiveLabel = new QComboBox(widget_2);
        inActiveLabel->setObjectName(QStringLiteral("inActiveLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, inActiveLabel);

        inDrawOverFilter = new QComboBox(widget_2);
        inDrawOverFilter->setObjectName(QStringLiteral("inDrawOverFilter"));

        formLayout->setWidget(4, QFormLayout::FieldRole, inDrawOverFilter);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);


        verticalLayout->addWidget(widget_2);

        groupBox = new QGroupBox(InterpolateLabelsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chkMorphologyUseDistance = new QCheckBox(groupBox);
        chkMorphologyUseDistance->setObjectName(QStringLiteral("chkMorphologyUseDistance"));

        verticalLayout_2->addWidget(chkMorphologyUseDistance);

        chkMorphologyUseOptimalAlignment = new QCheckBox(groupBox);
        chkMorphologyUseOptimalAlignment->setObjectName(QStringLiteral("chkMorphologyUseOptimalAlignment"));

        verticalLayout_2->addWidget(chkMorphologyUseOptimalAlignment);

        chkMorphologyInterpolateOneAxis = new QCheckBox(groupBox);
        chkMorphologyInterpolateOneAxis->setObjectName(QStringLiteral("chkMorphologyInterpolateOneAxis"));

        verticalLayout_2->addWidget(chkMorphologyInterpolateOneAxis);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(80, 0, 0, 0);
        morphologyInterpolationAxis = new QComboBox(widget_4);
        morphologyInterpolationAxis->setObjectName(QStringLiteral("morphologyInterpolationAxis"));
        morphologyInterpolationAxis->setEnabled(false);

        horizontalLayout_3->addWidget(morphologyInterpolationAxis);


        verticalLayout_2->addWidget(widget_4);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_3 = new QWidget(InterpolateLabelsDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnInterpolate = new QPushButton(widget_3);
        btnInterpolate->setObjectName(QStringLiteral("btnInterpolate"));

        horizontalLayout_2->addWidget(btnInterpolate);

        btnClose = new QPushButton(widget_3);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addWidget(widget_3);


        retranslateUi(InterpolateLabelsDialog);
        QObject::connect(btnInterpolateAll, SIGNAL(toggled(bool)), inLabelToInterpolate, SLOT(setDisabled(bool)));
        QObject::connect(btnInterpolateAll, SIGNAL(toggled(bool)), inActiveLabel, SLOT(setDisabled(bool)));
        QObject::connect(chkMorphologyInterpolateOneAxis, SIGNAL(toggled(bool)), morphologyInterpolationAxis, SLOT(setEnabled(bool)));

        btnInterpolate->setDefault(true);


        QMetaObject::connectSlotsByName(InterpolateLabelsDialog);
    } // setupUi

    void retranslateUi(QDialog *InterpolateLabelsDialog)
    {
        InterpolateLabelsDialog->setWindowTitle(QApplication::translate("InterpolateLabelsDialog", "Interpolate Labels - ITK-SNAP", 0));
        label->setText(QApplication::translate("InterpolateLabelsDialog", "Morphological Interpolation", 0));
        label_2->setText(QApplication::translate("InterpolateLabelsDialog", "Use this tool to fill in sparsely drawn segmentations. For example, you can label a structure on every fifth slice and fill in the gaps using this tool. You can also create three-dimensional scaffolds and fill in the space in between.", 0));
#ifndef QT_NO_TOOLTIP
        btnInterpolateAll->setToolTip(QApplication::translate("InterpolateLabelsDialog", "All labels in the segmentation will be interpolated at the same time", 0));
#endif // QT_NO_TOOLTIP
        btnInterpolateAll->setText(QApplication::translate("InterpolateLabelsDialog", "Interpolate all labels", 0));
#ifndef QT_NO_TOOLTIP
        btnInterpolateOne->setToolTip(QApplication::translate("InterpolateLabelsDialog", "A single label in the segmentation will be interpolated.", 0));
#endif // QT_NO_TOOLTIP
        btnInterpolateOne->setText(QApplication::translate("InterpolateLabelsDialog", "Interpolate a single label", 0));
        label_3->setText(QApplication::translate("InterpolateLabelsDialog", "Label to interpolate:", 0));
#ifndef QT_NO_TOOLTIP
        inLabelToInterpolate->setToolTip(QApplication::translate("InterpolateLabelsDialog", "Select the label which will be interpolated. Your segmentation should have two or more slices painted with that label.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("InterpolateLabelsDialog", "Paint with label:", 0));
#ifndef QT_NO_TOOLTIP
        inActiveLabel->setToolTip(QApplication::translate("InterpolateLabelsDialog", "Select the label which will be used to fill in the interpolated voxels. Normally this is the same label as the \"label to interpolate\" but you have the option of using a different label.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inDrawOverFilter->setToolTip(QApplication::translate("InterpolateLabelsDialog", "<html><head/><body><p>Select which label of set of labels will be painted over during interpolation. You can paint over all labels, clear voxels, or a specific label.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("InterpolateLabelsDialog", "Paint over label(s):", 0));
        groupBox->setTitle(QApplication::translate("InterpolateLabelsDialog", "Advanced Options:", 0));
#ifndef QT_NO_TOOLTIP
        chkMorphologyUseDistance->setToolTip(QApplication::translate("InterpolateLabelsDialog", "Use an alternative signed distance function-based method.  Slightly faster, but can fail for twisted shapes.", 0));
#endif // QT_NO_TOOLTIP
        chkMorphologyUseDistance->setText(QApplication::translate("InterpolateLabelsDialog", "Use signed distance function", 0));
#ifndef QT_NO_TOOLTIP
        chkMorphologyUseOptimalAlignment->setToolTip(QApplication::translate("InterpolateLabelsDialog", "Use optimal slice alignment instead of the default heuristic.  This can take a long time.", 0));
#endif // QT_NO_TOOLTIP
        chkMorphologyUseOptimalAlignment->setText(QApplication::translate("InterpolateLabelsDialog", "Use optimal slice alignment", 0));
#ifndef QT_NO_TOOLTIP
        chkMorphologyInterpolateOneAxis->setToolTip(QApplication::translate("InterpolateLabelsDialog", "Interpolate slices along a single axis. By default, interpolation is applied along all three axes in the image.", 0));
#endif // QT_NO_TOOLTIP
        chkMorphologyInterpolateOneAxis->setText(QApplication::translate("InterpolateLabelsDialog", "Interpolate along a single axis", 0));
        morphologyInterpolationAxis->clear();
        morphologyInterpolationAxis->insertItems(0, QStringList()
         << QApplication::translate("InterpolateLabelsDialog", "Axial", 0)
         << QApplication::translate("InterpolateLabelsDialog", "Sagittal", 0)
         << QApplication::translate("InterpolateLabelsDialog", "Coronal", 0)
        );
        btnInterpolate->setText(QApplication::translate("InterpolateLabelsDialog", "Interpolate", 0));
        btnClose->setText(QApplication::translate("InterpolateLabelsDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class InterpolateLabelsDialog: public Ui_InterpolateLabelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATELABELSDIALOG_H
