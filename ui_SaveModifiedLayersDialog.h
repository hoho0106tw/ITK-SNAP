/********************************************************************************
** Form generated from reading UI file 'SaveModifiedLayersDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEMODIFIEDLAYERSDIALOG_H
#define UI_SAVEMODIFIEDLAYERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveModifiedLayersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableLayers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveModifiedLayersDialog)
    {
        if (SaveModifiedLayersDialog->objectName().isEmpty())
            SaveModifiedLayersDialog->setObjectName(QStringLiteral("SaveModifiedLayersDialog"));
        SaveModifiedLayersDialog->resize(499, 242);
        verticalLayout = new QVBoxLayout(SaveModifiedLayersDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SaveModifiedLayersDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableLayers = new QTableView(SaveModifiedLayersDialog);
        tableLayers->setObjectName(QStringLiteral("tableLayers"));
        tableLayers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableLayers->setAlternatingRowColors(true);
        tableLayers->setSelectionMode(QAbstractItemView::SingleSelection);
        tableLayers->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableLayers->horizontalHeader()->setStretchLastSection(true);
        tableLayers->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableLayers);

        buttonBox = new QDialogButtonBox(SaveModifiedLayersDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Discard|QDialogButtonBox::Save|QDialogButtonBox::SaveAll);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SaveModifiedLayersDialog);

        QMetaObject::connectSlotsByName(SaveModifiedLayersDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveModifiedLayersDialog)
    {
        SaveModifiedLayersDialog->setWindowTitle(QApplication::translate("SaveModifiedLayersDialog", "Save Changes - ITK-SNAP", 0));
        label->setText(QApplication::translate("SaveModifiedLayersDialog", "The following image layers have unsaved changes:", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveModifiedLayersDialog: public Ui_SaveModifiedLayersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEMODIFIEDLAYERSDIALOG_H
