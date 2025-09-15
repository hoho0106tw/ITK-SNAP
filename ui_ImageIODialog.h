/********************************************************************************
** Form generated from reading UI file 'ImageIODialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEIODIALOG_H
#define UI_IMAGEIODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ImageIODialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImageIODialog)
    {
        if (ImageIODialog->objectName().isEmpty())
            ImageIODialog->setObjectName(QStringLiteral("ImageIODialog"));
        ImageIODialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ImageIODialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ImageIODialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImageIODialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImageIODialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImageIODialog);
    } // setupUi

    void retranslateUi(QDialog *ImageIODialog)
    {
        ImageIODialog->setWindowTitle(QApplication::translate("ImageIODialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageIODialog: public Ui_ImageIODialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEIODIALOG_H
