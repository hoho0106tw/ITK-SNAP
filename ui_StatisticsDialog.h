/********************************************************************************
** Form generated from reading UI file 'StatisticsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSDIALOG_H
#define UI_STATISTICSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tvVolumes;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnUpdate;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCopy;
    QPushButton *btnExport;
    QPushButton *btnCLose;

    void setupUi(QDialog *StatisticsDialog)
    {
        if (StatisticsDialog->objectName().isEmpty())
            StatisticsDialog->setObjectName(QStringLiteral("StatisticsDialog"));
        StatisticsDialog->resize(801, 433);
        verticalLayout = new QVBoxLayout(StatisticsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvVolumes = new QTableView(StatisticsDialog);
        tvVolumes->setObjectName(QStringLiteral("tvVolumes"));
        tvVolumes->setStyleSheet(QStringLiteral("font-size:11px;"));
        tvVolumes->setGridStyle(Qt::DotLine);
        tvVolumes->horizontalHeader()->setStretchLastSection(false);
        tvVolumes->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tvVolumes);

        widget = new QWidget(StatisticsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnUpdate = new QPushButton(widget);
        btnUpdate->setObjectName(QStringLiteral("btnUpdate"));
        btnUpdate->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(btnUpdate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCopy = new QPushButton(widget);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));
        btnCopy->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(btnCopy);

        btnExport = new QPushButton(widget);
        btnExport->setObjectName(QStringLiteral("btnExport"));
        btnExport->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(btnExport);

        btnCLose = new QPushButton(widget);
        btnCLose->setObjectName(QStringLiteral("btnCLose"));
        btnCLose->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(btnCLose);


        verticalLayout->addWidget(widget);


        retranslateUi(StatisticsDialog);
        QObject::connect(btnCLose, SIGNAL(clicked()), StatisticsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(StatisticsDialog);
    } // setupUi

    void retranslateUi(QDialog *StatisticsDialog)
    {
        StatisticsDialog->setWindowTitle(QApplication::translate("StatisticsDialog", "Volumes and Statistics - ITK-SNAP", 0));
        btnUpdate->setText(QApplication::translate("StatisticsDialog", "Update", 0));
        btnCopy->setText(QApplication::translate("StatisticsDialog", "Copy", 0));
        btnExport->setText(QApplication::translate("StatisticsDialog", "Export...", 0));
        btnCLose->setText(QApplication::translate("StatisticsDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class StatisticsDialog: public Ui_StatisticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSDIALOG_H
