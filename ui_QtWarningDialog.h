/********************************************************************************
** Form generated from reading UI file 'QtWarningDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWARNINGDIALOG_H
#define UI_QTWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtWarningDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *QtWarningDialog)
    {
        if (QtWarningDialog->objectName().isEmpty())
            QtWarningDialog->setObjectName(QStringLiteral("QtWarningDialog"));
        QtWarningDialog->resize(384, 179);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtWarningDialog->sizePolicy().hasHeightForWidth());
        QtWarningDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QtWarningDialog);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QtWarningDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(360, 80));
        label->setMaximumSize(QSize(400, 16777215));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        checkBox = new QCheckBox(QtWarningDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(QtWarningDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QtWarningDialog);

        QMetaObject::connectSlotsByName(QtWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *QtWarningDialog)
    {
        QtWarningDialog->setWindowTitle(QApplication::translate("QtWarningDialog", "ITK-SNAP - Warnings Generated", 0));
        label->setText(QApplication::translate("QtWarningDialog", "Warning: blah blah blah blah!", 0));
        checkBox->setText(QApplication::translate("QtWarningDialog", "Do not show this warning again", 0));
        pushButton->setText(QApplication::translate("QtWarningDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class QtWarningDialog: public Ui_QtWarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWARNINGDIALOG_H
