/********************************************************************************
** Form generated from reading UI file 'MeshExportBrowsePage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHEXPORTBROWSEPAGE_H
#define UI_MESHEXPORTBROWSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>
#include "FileChooserPanelWithHistory.h"

QT_BEGIN_NAMESPACE

class Ui_MeshExportBrowsePage
{
public:
    QVBoxLayout *verticalLayout;
    FileChooserPanelWithHistory *filePanel;
    QSpacerItem *verticalSpacer;
    QLabel *outMessage;

    void setupUi(QWizardPage *MeshExportBrowsePage)
    {
        if (MeshExportBrowsePage->objectName().isEmpty())
            MeshExportBrowsePage->setObjectName(QStringLiteral("MeshExportBrowsePage"));
        MeshExportBrowsePage->resize(400, 300);
        verticalLayout = new QVBoxLayout(MeshExportBrowsePage);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        filePanel = new FileChooserPanelWithHistory(MeshExportBrowsePage);
        filePanel->setObjectName(QStringLiteral("filePanel"));

        verticalLayout->addWidget(filePanel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        outMessage = new QLabel(MeshExportBrowsePage);
        outMessage->setObjectName(QStringLiteral("outMessage"));
        outMessage->setWordWrap(true);

        verticalLayout->addWidget(outMessage);


        retranslateUi(MeshExportBrowsePage);

        QMetaObject::connectSlotsByName(MeshExportBrowsePage);
    } // setupUi

    void retranslateUi(QWizardPage *MeshExportBrowsePage)
    {
        MeshExportBrowsePage->setWindowTitle(QApplication::translate("MeshExportBrowsePage", "WizardPage", 0));
        outMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MeshExportBrowsePage: public Ui_MeshExportBrowsePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHEXPORTBROWSEPAGE_H
