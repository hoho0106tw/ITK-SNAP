/********************************************************************************
** Form generated from reading UI file 'DropActionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPACTIONDIALOG_H
#define UI_DROPACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DropActionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *outFilename;
    QFrame *line;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnLoadMain;
    QPushButton *btnLoadOverlay;
    QPushButton *btnLoadSegmentation;
    QPushButton *btnLoadAdditionalSegmentation;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLoadNew;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;

    void setupUi(QDialog *DropActionDialog)
    {
        if (DropActionDialog->objectName().isEmpty())
            DropActionDialog->setObjectName(QStringLiteral("DropActionDialog"));
        DropActionDialog->resize(538, 365);
        verticalLayout = new QVBoxLayout(DropActionDialog);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outFilename = new QLabel(DropActionDialog);
        outFilename->setObjectName(QStringLiteral("outFilename"));
        outFilename->setMaximumSize(QSize(598, 16777215));
        outFilename->setStyleSheet(QStringLiteral("font-weight: bold;"));

        verticalLayout->addWidget(outFilename);

        line = new QFrame(DropActionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(DropActionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(DropActionDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnLoadMain = new QPushButton(groupBox);
        btnLoadMain->setObjectName(QStringLiteral("btnLoadMain"));
        btnLoadMain->setMinimumSize(QSize(224, 0));
        btnLoadMain->setMaximumSize(QSize(192, 16777215));

        gridLayout->addWidget(btnLoadMain, 0, 0, 1, 1);

        btnLoadOverlay = new QPushButton(groupBox);
        btnLoadOverlay->setObjectName(QStringLiteral("btnLoadOverlay"));
        btnLoadOverlay->setMinimumSize(QSize(224, 0));
        btnLoadOverlay->setMaximumSize(QSize(192, 16777215));

        gridLayout->addWidget(btnLoadOverlay, 1, 0, 1, 1);

        btnLoadSegmentation = new QPushButton(groupBox);
        btnLoadSegmentation->setObjectName(QStringLiteral("btnLoadSegmentation"));
        btnLoadSegmentation->setMinimumSize(QSize(224, 0));
        btnLoadSegmentation->setMaximumSize(QSize(192, 16777215));

        gridLayout->addWidget(btnLoadSegmentation, 0, 1, 1, 1);

        btnLoadAdditionalSegmentation = new QPushButton(groupBox);
        btnLoadAdditionalSegmentation->setObjectName(QStringLiteral("btnLoadAdditionalSegmentation"));
        btnLoadAdditionalSegmentation->setMinimumSize(QSize(224, 0));
        btnLoadAdditionalSegmentation->setMaximumSize(QSize(192, 16777215));

        gridLayout->addWidget(btnLoadAdditionalSegmentation, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        groupBox_2 = new QGroupBox(DropActionDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnLoadNew = new QPushButton(groupBox_2);
        btnLoadNew->setObjectName(QStringLiteral("btnLoadNew"));
        btnLoadNew->setMinimumSize(QSize(192, 0));
        btnLoadNew->setMaximumSize(QSize(192, 16777215));

        horizontalLayout_3->addWidget(btnLoadNew);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(DropActionDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout->addWidget(widget);


        retranslateUi(DropActionDialog);
        QObject::connect(pushButton_5, SIGNAL(clicked()), DropActionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DropActionDialog);
    } // setupUi

    void retranslateUi(QDialog *DropActionDialog)
    {
        DropActionDialog->setWindowTitle(QApplication::translate("DropActionDialog", "Open Document - ITK-SNAP", 0));
        outFilename->setText(QApplication::translate("DropActionDialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("DropActionDialog", "What should ITK-SNAP do with this image?", 0));
        groupBox->setTitle(QApplication::translate("DropActionDialog", "Open it in the current window", 0));
#ifndef QT_NO_TOOLTIP
        btnLoadMain->setToolTip(QApplication::translate("DropActionDialog", "This will close all images currently open in this ITK-SNAP window and load the new image as the main image.", 0));
#endif // QT_NO_TOOLTIP
        btnLoadMain->setText(QApplication::translate("DropActionDialog", "Load as Main Image", 0));
#ifndef QT_NO_TOOLTIP
        btnLoadOverlay->setToolTip(QApplication::translate("DropActionDialog", "This will load the dropped image alongside the images currently open in this ITK-SNAP window ", 0));
#endif // QT_NO_TOOLTIP
        btnLoadOverlay->setText(QApplication::translate("DropActionDialog", "Load as Additional Image", 0));
#ifndef QT_NO_TOOLTIP
        btnLoadSegmentation->setToolTip(QApplication::translate("DropActionDialog", "This will replace the current segmentation image with the dropped image.", 0));
#endif // QT_NO_TOOLTIP
        btnLoadSegmentation->setText(QApplication::translate("DropActionDialog", "Load as Segmentation", 0));
#ifndef QT_NO_TOOLTIP
        btnLoadAdditionalSegmentation->setToolTip(QApplication::translate("DropActionDialog", "This will replace the current segmentation image with the dropped image.", 0));
#endif // QT_NO_TOOLTIP
        btnLoadAdditionalSegmentation->setText(QApplication::translate("DropActionDialog", "Load as Additional Segmentation", 0));
        groupBox_2->setTitle(QApplication::translate("DropActionDialog", "Open it in a new ITK-SNAP window", 0));
#ifndef QT_NO_TOOLTIP
        btnLoadNew->setToolTip(QApplication::translate("DropActionDialog", "This will open a new ITK-SNAP window and open the dropped image as the main image", 0));
#endif // QT_NO_TOOLTIP
        btnLoadNew->setText(QApplication::translate("DropActionDialog", "Open in New ITK-SNAP", 0));
        pushButton_5->setText(QApplication::translate("DropActionDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DropActionDialog: public Ui_DropActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPACTIONDIALOG_H
