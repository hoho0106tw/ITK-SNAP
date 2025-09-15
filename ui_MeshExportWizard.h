/********************************************************************************
** Form generated from reading UI file 'MeshExportWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHEXPORTWIZARD_H
#define UI_MESHEXPORTWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWizard>
#include "MeshExportBrowsePage.h"
#include "MeshExportModePage.h"

QT_BEGIN_NAMESPACE

class Ui_MeshExportWizard
{
public:
    MeshExportModePage *pageMode;
    MeshExportBrowsePage *pageBrowse;

    void setupUi(QWizard *MeshExportWizard)
    {
        if (MeshExportWizard->objectName().isEmpty())
            MeshExportWizard->setObjectName(QStringLiteral("MeshExportWizard"));
        MeshExportWizard->resize(400, 300);
        pageMode = new MeshExportModePage();
        pageMode->setObjectName(QStringLiteral("pageMode"));
        MeshExportWizard->addPage(pageMode);
        pageBrowse = new MeshExportBrowsePage();
        pageBrowse->setObjectName(QStringLiteral("pageBrowse"));
        MeshExportWizard->addPage(pageBrowse);

        retranslateUi(MeshExportWizard);

        QMetaObject::connectSlotsByName(MeshExportWizard);
    } // setupUi

    void retranslateUi(QWizard *MeshExportWizard)
    {
        MeshExportWizard->setWindowTitle(QApplication::translate("MeshExportWizard", "Wizard", 0));
        pageMode->setTitle(QApplication::translate("MeshExportWizard", "Which labels will be exported?", 0));
        pageBrowse->setTitle(QApplication::translate("MeshExportWizard", "Export destination", 0));
        pageBrowse->setSubTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MeshExportWizard: public Ui_MeshExportWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHEXPORTWIZARD_H
