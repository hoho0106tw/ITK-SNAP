/********************************************************************************
** Form generated from reading UI file 'DownloadTicketDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADTICKETDIALOG_H
#define UI_DOWNLOADTICKETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "FileChooserPanelWithHistory.h"

QT_BEGIN_NAMESPACE

class Ui_DownloadTicketDialog
{
public:
    QGridLayout *gridLayout;
    FileChooserPanelWithHistory *filePanel;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QComboBox *inOpenMode;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DownloadTicketDialog)
    {
        if (DownloadTicketDialog->objectName().isEmpty())
            DownloadTicketDialog->setObjectName(QStringLiteral("DownloadTicketDialog"));
        DownloadTicketDialog->resize(516, 220);
        gridLayout = new QGridLayout(DownloadTicketDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filePanel = new FileChooserPanelWithHistory(DownloadTicketDialog);
        filePanel->setObjectName(QStringLiteral("filePanel"));

        gridLayout->addWidget(filePanel, 0, 0, 1, 2);

        label = new QLabel(DownloadTicketDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DownloadTicketDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        inOpenMode = new QComboBox(DownloadTicketDialog);
        inOpenMode->setObjectName(QStringLiteral("inOpenMode"));

        gridLayout->addWidget(inOpenMode, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);


        retranslateUi(DownloadTicketDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DownloadTicketDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DownloadTicketDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DownloadTicketDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadTicketDialog)
    {
        DownloadTicketDialog->setWindowTitle(QApplication::translate("DownloadTicketDialog", "Download Ticket Results", 0));
        label->setText(QApplication::translate("DownloadTicketDialog", "After downloading:", 0));
        inOpenMode->clear();
        inOpenMode->insertItems(0, QStringList()
         << QApplication::translate("DownloadTicketDialog", "Open workspace in the current ITK-SNAP window", 0)
         << QApplication::translate("DownloadTicketDialog", "Open workspace in a new ITK-SNAP window ", 0)
         << QApplication::translate("DownloadTicketDialog", "Do not open workspace", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class DownloadTicketDialog: public Ui_DownloadTicketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADTICKETDIALOG_H
