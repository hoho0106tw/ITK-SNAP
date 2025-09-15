/********************************************************************************
** Form generated from reading UI file 'SplashPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHPANEL_H
#define UI_SPLASHPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplashPanel
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *outVersion;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;

    void setupUi(QWidget *SplashPanel)
    {
        if (SplashPanel->objectName().isEmpty())
            SplashPanel->setObjectName(QStringLiteral("SplashPanel"));
        SplashPanel->resize(184, 581);
        verticalLayout = new QVBoxLayout(SplashPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 6, 6);
        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(SplashPanel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-size:24px;\n"
""));

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        outVersion = new QLabel(SplashPanel);
        outVersion->setObjectName(QStringLiteral("outVersion"));
        outVersion->setStyleSheet(QLatin1String("font-size:11px;\n"
"color:rgb(109, 109, 109);"));
        outVersion->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(outVersion, 0, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_4 = new QLabel(SplashPanel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font-size:11px;\n"
"color:rgb(109, 109, 109);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(SplashPanel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font-size:10px;\n"
"color:rgb(109, 109, 109);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout->addWidget(label_5);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(6, 12);

        retranslateUi(SplashPanel);

        QMetaObject::connectSlotsByName(SplashPanel);
    } // setupUi

    void retranslateUi(QWidget *SplashPanel)
    {
        SplashPanel->setWindowTitle(QApplication::translate("SplashPanel", "Form", 0));
        label_2->setText(QApplication::translate("SplashPanel", "ITK-SNAP", 0));
        outVersion->setText(QApplication::translate("SplashPanel", "Version X.X.X\n"
"Jan 12, 2013", 0));
        label_4->setText(QApplication::translate("SplashPanel", "Copyright (C) 1998-2019\n"
"Paul A. Yushkevich \n"
"Guido Gerig", 0));
        label_5->setText(QApplication::translate("SplashPanel", "Supported by grants R01 EB014346, R01 EB017255, R03 EB008200, and PO 467-MZ-202446-1 from the \n"
"US National Insitutes of Health", 0));
    } // retranslateUi

};

namespace Ui {
    class SplashPanel: public Ui_SplashPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHPANEL_H
