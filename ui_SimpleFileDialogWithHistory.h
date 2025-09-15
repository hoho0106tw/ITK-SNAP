/********************************************************************************
** Form generated from reading UI file 'SimpleFileDialogWithHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEFILEDIALOGWITHHISTORY_H
#define UI_SIMPLEFILEDIALOGWITHHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "FileChooserPanelWithHistory.h"

QT_BEGIN_NAMESPACE

class Ui_SimpleFileDialogWithHistory
{
public:
    QVBoxLayout *verticalLayout;
    FileChooserPanelWithHistory *filePanel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SimpleFileDialogWithHistory)
    {
        if (SimpleFileDialogWithHistory->objectName().isEmpty())
            SimpleFileDialogWithHistory->setObjectName(QStringLiteral("SimpleFileDialogWithHistory"));
        SimpleFileDialogWithHistory->resize(400, 208);
        SimpleFileDialogWithHistory->setStyleSheet(QLatin1String("QMenu {\n"
"font-size:12px;\n"
"}"));
        verticalLayout = new QVBoxLayout(SimpleFileDialogWithHistory);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        filePanel = new FileChooserPanelWithHistory(SimpleFileDialogWithHistory);
        filePanel->setObjectName(QStringLiteral("filePanel"));

        verticalLayout->addWidget(filePanel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SimpleFileDialogWithHistory);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SimpleFileDialogWithHistory);
        QObject::connect(buttonBox, SIGNAL(accepted()), SimpleFileDialogWithHistory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SimpleFileDialogWithHistory, SLOT(reject()));

        QMetaObject::connectSlotsByName(SimpleFileDialogWithHistory);
    } // setupUi

    void retranslateUi(QDialog *SimpleFileDialogWithHistory)
    {
        SimpleFileDialogWithHistory->setWindowTitle(QApplication::translate("SimpleFileDialogWithHistory", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class SimpleFileDialogWithHistory: public Ui_SimpleFileDialogWithHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEFILEDIALOGWITHHISTORY_H
