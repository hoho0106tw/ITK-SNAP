/********************************************************************************
** Form generated from reading UI file 'LabelEditorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELEDITORDIALOG_H
#define UI_LABELEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorWheel.h"
#include "QColorButtonWidget.h"

QT_BEGIN_NAMESPACE

class Ui_LabelEditorDialog
{
public:
    QAction *actionResetLabels;
    QAction *actionHide_all_labels;
    QAction *actionHide_all_labels_in_3D_window;
    QAction *actionShow_all_labels;
    QAction *actionShow_all_labels_in_3D_window;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNew;
    QPushButton *btnDuplicate;
    QPushButton *btnDelete;
    QPushButton *btnActions;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;
    QGroupBox *grpSelectedLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *inLabelDescription;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QColorButtonWidget *btnLabelColor;
    QSpinBox *inRed;
    QLabel *label_8;
    QLabel *label_6;
    QSpinBox *inBlue;
    ColorWheel *inColorWheel;
    QLabel *label_7;
    QSpinBox *inGreen;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *inLabelOpacitySpinner;
    QSlider *inLabelOpacitySlider;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *inVisible3D;
    QCheckBox *inVisibleAll;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpinBox *inLabelId;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTableView *lvLabels;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *inLabelFilter;
    QToolButton *btnForeground;
    QToolButton *btnBackground;

    void setupUi(QDialog *LabelEditorDialog)
    {
        if (LabelEditorDialog->objectName().isEmpty())
            LabelEditorDialog->setObjectName(QStringLiteral("LabelEditorDialog"));
        LabelEditorDialog->resize(548, 537);
        LabelEditorDialog->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  color: rgb(30,30,160);\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 4px;\n"
"  border: 1px solid rgb(130,130,130);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        actionResetLabels = new QAction(LabelEditorDialog);
        actionResetLabels->setObjectName(QStringLiteral("actionResetLabels"));
        actionHide_all_labels = new QAction(LabelEditorDialog);
        actionHide_all_labels->setObjectName(QStringLiteral("actionHide_all_labels"));
        actionHide_all_labels_in_3D_window = new QAction(LabelEditorDialog);
        actionHide_all_labels_in_3D_window->setObjectName(QStringLiteral("actionHide_all_labels_in_3D_window"));
        actionShow_all_labels = new QAction(LabelEditorDialog);
        actionShow_all_labels->setObjectName(QStringLiteral("actionShow_all_labels"));
        actionShow_all_labels_in_3D_window = new QAction(LabelEditorDialog);
        actionShow_all_labels_in_3D_window->setObjectName(QStringLiteral("actionShow_all_labels_in_3D_window"));
        gridLayout = new QGridLayout(LabelEditorDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(16);
        gridLayout->setContentsMargins(6, 24, 6, 6);
        widget = new QWidget(LabelEditorDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnNew = new QPushButton(widget);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setAutoDefault(false);

        horizontalLayout->addWidget(btnNew);

        btnDuplicate = new QPushButton(widget);
        btnDuplicate->setObjectName(QStringLiteral("btnDuplicate"));
        btnDuplicate->setAutoDefault(false);

        horizontalLayout->addWidget(btnDuplicate);

        btnDelete = new QPushButton(widget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setAutoDefault(false);

        horizontalLayout->addWidget(btnDelete);

        btnActions = new QPushButton(widget);
        btnActions->setObjectName(QStringLiteral("btnActions"));
        btnActions->setAutoDefault(false);

        horizontalLayout->addWidget(btnActions);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setAutoDefault(false);

        horizontalLayout->addWidget(btnClose);


        gridLayout->addWidget(widget, 1, 0, 1, 3);

        grpSelectedLabel = new QGroupBox(LabelEditorDialog);
        grpSelectedLabel->setObjectName(QStringLiteral("grpSelectedLabel"));
        grpSelectedLabel->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(grpSelectedLabel);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(grpSelectedLabel);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        inLabelDescription = new QLineEdit(grpSelectedLabel);
        inLabelDescription->setObjectName(QStringLiteral("inLabelDescription"));

        verticalLayout_2->addWidget(inLabelDescription);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_2 = new QWidget(grpSelectedLabel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        widget_6 = new QWidget(grpSelectedLabel);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(0, 100));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btnLabelColor = new QColorButtonWidget(widget_6);
        btnLabelColor->setObjectName(QStringLiteral("btnLabelColor"));
        btnLabelColor->setMinimumSize(QSize(60, 20));

        gridLayout_3->addWidget(btnLabelColor, 3, 2, 1, 2);

        inRed = new QSpinBox(widget_6);
        inRed->setObjectName(QStringLiteral("inRed"));
        inRed->setMaximumSize(QSize(56, 16777215));
        inRed->setMaximum(255);

        gridLayout_3->addWidget(inRed, 0, 3, 1, 2);

        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 2, 2, 1, 1);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        inBlue = new QSpinBox(widget_6);
        inBlue->setObjectName(QStringLiteral("inBlue"));
        inBlue->setMaximumSize(QSize(56, 16777215));
        inBlue->setMaximum(255);

        gridLayout_3->addWidget(inBlue, 2, 3, 1, 1);

        inColorWheel = new ColorWheel(widget_6);
        inColorWheel->setObjectName(QStringLiteral("inColorWheel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inColorWheel->sizePolicy().hasHeightForWidth());
        inColorWheel->setSizePolicy(sizePolicy);
        inColorWheel->setMinimumSize(QSize(120, 120));
        inColorWheel->setMaximumSize(QSize(120, 120));

        gridLayout_3->addWidget(inColorWheel, 0, 0, 5, 1);

        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 2, 1, 1);

        inGreen = new QSpinBox(widget_6);
        inGreen->setObjectName(QStringLiteral("inGreen"));
        inGreen->setMaximumSize(QSize(56, 16777215));
        inGreen->setMaximum(255);

        gridLayout_3->addWidget(inGreen, 1, 3, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(widget_6);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_3 = new QLabel(grpSelectedLabel);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        widget_3 = new QWidget(grpSelectedLabel);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        inLabelOpacitySpinner = new QSpinBox(widget_3);
        inLabelOpacitySpinner->setObjectName(QStringLiteral("inLabelOpacitySpinner"));
        inLabelOpacitySpinner->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inLabelOpacitySpinner->setMaximum(255);

        horizontalLayout_3->addWidget(inLabelOpacitySpinner);

        inLabelOpacitySlider = new QSlider(widget_3);
        inLabelOpacitySlider->setObjectName(QStringLiteral("inLabelOpacitySlider"));
        inLabelOpacitySlider->setMaximum(255);
        inLabelOpacitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(inLabelOpacitySlider);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(grpSelectedLabel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: normal;\n"
"  color: black;\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 0px;\n"
"  border-top: 1px solid rgb(130,130,130);\n"
"  border-left: none;\n"
"  border-right:none;\n"
"  border-bottom:none;\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        inVisible3D = new QCheckBox(groupBox);
        inVisible3D->setObjectName(QStringLiteral("inVisible3D"));

        verticalLayout_3->addWidget(inVisible3D);

        inVisibleAll = new QCheckBox(groupBox);
        inVisibleAll->setObjectName(QStringLiteral("inVisibleAll"));

        verticalLayout_3->addWidget(inVisibleAll);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        groupBox_2 = new QGroupBox(grpSelectedLabel);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: normal;\n"
"  color: black;\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 0px;\n"
"  border-top: 1px solid rgb(130,130,130);\n"
"  border-left: none;\n"
"  border-right:none;\n"
"  border-bottom:none;\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        inLabelId = new QSpinBox(widget_4);
        inLabelId->setObjectName(QStringLiteral("inLabelId"));
        inLabelId->setMinimumSize(QSize(64, 0));
        inLabelId->setReadOnly(false);
        inLabelId->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_4->addWidget(inLabelId);


        verticalLayout_6->addWidget(widget_4);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addWidget(grpSelectedLabel, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(LabelEditorDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 3, 4);
        lvLabels = new QTableView(groupBox_3);
        lvLabels->setObjectName(QStringLiteral("lvLabels"));
        lvLabels->setStyleSheet(QStringLiteral("font-size:12px;"));
        lvLabels->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvLabels->setDragDropMode(QAbstractItemView::NoDragDrop);
        lvLabels->setSelectionMode(QAbstractItemView::SingleSelection);
        lvLabels->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvLabels->horizontalHeader()->setVisible(false);
        lvLabels->horizontalHeader()->setDefaultSectionSize(60);
        lvLabels->horizontalHeader()->setStretchLastSection(true);
        lvLabels->verticalHeader()->setVisible(false);
        lvLabels->verticalHeader()->setDefaultSectionSize(22);

        verticalLayout->addWidget(lvLabels);

        widget_5 = new QWidget(groupBox_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        inLabelFilter = new QLineEdit(widget_5);
        inLabelFilter->setObjectName(QStringLiteral("inLabelFilter"));

        horizontalLayout_5->addWidget(inLabelFilter);

        btnForeground = new QToolButton(widget_5);
        btnForeground->setObjectName(QStringLiteral("btnForeground"));
        btnForeground->setCheckable(true);

        horizontalLayout_5->addWidget(btnForeground);

        btnBackground = new QToolButton(widget_5);
        btnBackground->setObjectName(QStringLiteral("btnBackground"));
        btnBackground->setCheckable(true);

        horizontalLayout_5->addWidget(btnBackground);


        verticalLayout->addWidget(widget_5);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        QWidget::setTabOrder(lvLabels, inLabelFilter);
        QWidget::setTabOrder(inLabelFilter, btnForeground);
        QWidget::setTabOrder(btnForeground, btnBackground);
        QWidget::setTabOrder(btnBackground, inLabelDescription);
        QWidget::setTabOrder(inLabelDescription, inRed);
        QWidget::setTabOrder(inRed, inGreen);
        QWidget::setTabOrder(inGreen, inBlue);
        QWidget::setTabOrder(inBlue, inLabelOpacitySpinner);
        QWidget::setTabOrder(inLabelOpacitySpinner, inLabelOpacitySlider);
        QWidget::setTabOrder(inLabelOpacitySlider, inVisible3D);
        QWidget::setTabOrder(inVisible3D, inVisibleAll);
        QWidget::setTabOrder(inVisibleAll, inLabelId);
        QWidget::setTabOrder(inLabelId, btnNew);
        QWidget::setTabOrder(btnNew, btnDuplicate);
        QWidget::setTabOrder(btnDuplicate, btnDelete);
        QWidget::setTabOrder(btnDelete, btnActions);
        QWidget::setTabOrder(btnActions, btnClose);

        retranslateUi(LabelEditorDialog);

        QMetaObject::connectSlotsByName(LabelEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelEditorDialog)
    {
        LabelEditorDialog->setWindowTitle(QApplication::translate("LabelEditorDialog", "Segmentation Label Editor - ITK-SNAP", 0));
        actionResetLabels->setText(QApplication::translate("LabelEditorDialog", "Reset Label Descriptions", 0));
#ifndef QT_NO_TOOLTIP
        actionResetLabels->setToolTip(QApplication::translate("LabelEditorDialog", "Restores label descriptions to the default values.", 0));
#endif // QT_NO_TOOLTIP
        actionHide_all_labels->setText(QApplication::translate("LabelEditorDialog", "Hide all labels", 0));
        actionHide_all_labels_in_3D_window->setText(QApplication::translate("LabelEditorDialog", "Hide all labels in 3D window", 0));
        actionShow_all_labels->setText(QApplication::translate("LabelEditorDialog", "Show all labels", 0));
        actionShow_all_labels_in_3D_window->setText(QApplication::translate("LabelEditorDialog", "Show all labels in 3D window", 0));
        btnNew->setText(QApplication::translate("LabelEditorDialog", "New", 0));
        btnDuplicate->setText(QApplication::translate("LabelEditorDialog", "Duplicate", 0));
        btnDelete->setText(QApplication::translate("LabelEditorDialog", "Delete", 0));
        btnActions->setText(QApplication::translate("LabelEditorDialog", "Actions...", 0));
        btnClose->setText(QApplication::translate("LabelEditorDialog", "Close", 0));
        grpSelectedLabel->setTitle(QApplication::translate("LabelEditorDialog", "Selected Label", 0));
        label->setText(QApplication::translate("LabelEditorDialog", "Description:", 0));
        label_2->setText(QApplication::translate("LabelEditorDialog", "Color:", 0));
        label_8->setText(QApplication::translate("LabelEditorDialog", "B:", 0));
        label_6->setText(QApplication::translate("LabelEditorDialog", "R:", 0));
        label_7->setText(QApplication::translate("LabelEditorDialog", "G:", 0));
        label_3->setText(QApplication::translate("LabelEditorDialog", "Opacity:", 0));
        groupBox->setTitle(QApplication::translate("LabelEditorDialog", "Visibility:", 0));
#ifndef QT_NO_TOOLTIP
        inVisible3D->setToolTip(QApplication::translate("LabelEditorDialog", "When selected, the label is not rendered in the 3D view", 0));
#endif // QT_NO_TOOLTIP
        inVisible3D->setText(QApplication::translate("LabelEditorDialog", "Hide label in 3D window", 0));
#ifndef QT_NO_TOOLTIP
        inVisibleAll->setToolTip(QApplication::translate("LabelEditorDialog", "When selected, the label is not visible in any views.", 0));
#endif // QT_NO_TOOLTIP
        inVisibleAll->setText(QApplication::translate("LabelEditorDialog", "Hide label in all windows", 0));
        groupBox_2->setTitle(QApplication::translate("LabelEditorDialog", "Advanced Options:", 0));
        label_4->setText(QApplication::translate("LabelEditorDialog", "Numeric value:", 0));
#ifndef QT_NO_TOOLTIP
        inLabelId->setToolTip(QApplication::translate("LabelEditorDialog", "The value that this label has in the segmentation image. If you change this value, voxels that have this value in the segmentation image will be changed to the new value.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("LabelEditorDialog", "Available Labels:", 0));
        label_5->setText(QApplication::translate("LabelEditorDialog", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        btnForeground->setToolTip(QApplication::translate("LabelEditorDialog", "Press to set the selected label as the foreground label", 0));
#endif // QT_NO_TOOLTIP
        btnForeground->setText(QApplication::translate("LabelEditorDialog", "F", 0));
#ifndef QT_NO_TOOLTIP
        btnBackground->setToolTip(QApplication::translate("LabelEditorDialog", "Press to set the selected label as the background label", 0));
#endif // QT_NO_TOOLTIP
        btnBackground->setText(QApplication::translate("LabelEditorDialog", "B", 0));
    } // retranslateUi

};

namespace Ui {
    class LabelEditorDialog: public Ui_LabelEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELEDITORDIALOG_H
