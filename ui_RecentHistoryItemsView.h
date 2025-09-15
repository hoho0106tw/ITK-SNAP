/********************************************************************************
** Form generated from reading UI file 'RecentHistoryItemsView.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTHISTORYITEMSVIEW_H
#define UI_RECENTHISTORYITEMSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecentHistoryItemsView
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *listRecent;

    void setupUi(QWidget *RecentHistoryItemsView)
    {
        if (RecentHistoryItemsView->objectName().isEmpty())
            RecentHistoryItemsView->setObjectName(QStringLiteral("RecentHistoryItemsView"));
        RecentHistoryItemsView->resize(662, 544);
        horizontalLayout = new QHBoxLayout(RecentHistoryItemsView);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listRecent = new QListView(RecentHistoryItemsView);
        listRecent->setObjectName(QStringLiteral("listRecent"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(35, 35, 35, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(53, 53, 53, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(44, 44, 44, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(17, 17, 17, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(23, 23, 23, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        listRecent->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        listRecent->setFont(font);
        listRecent->setMouseTracking(true);
        listRecent->setContextMenuPolicy(Qt::CustomContextMenu);
        listRecent->setStyleSheet(QLatin1String("QListView::item:hover {\n"
"background-color:rgb(88, 88, 88);\n"
"}"));
        listRecent->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listRecent->setAlternatingRowColors(false);
        listRecent->setSelectionMode(QAbstractItemView::NoSelection);
        listRecent->setIconSize(QSize(128, 128));
        listRecent->setMovement(QListView::Static);
        listRecent->setResizeMode(QListView::Adjust);
        listRecent->setLayoutMode(QListView::SinglePass);
        listRecent->setSpacing(24);
        listRecent->setGridSize(QSize(200, 160));
        listRecent->setViewMode(QListView::IconMode);
        listRecent->setUniformItemSizes(false);
        listRecent->setWordWrap(true);
        listRecent->setSelectionRectVisible(false);

        horizontalLayout->addWidget(listRecent);


        retranslateUi(RecentHistoryItemsView);

        QMetaObject::connectSlotsByName(RecentHistoryItemsView);
    } // setupUi

    void retranslateUi(QWidget *RecentHistoryItemsView)
    {
        RecentHistoryItemsView->setWindowTitle(QApplication::translate("RecentHistoryItemsView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class RecentHistoryItemsView: public Ui_RecentHistoryItemsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTHISTORYITEMSVIEW_H
