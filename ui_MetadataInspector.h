/********************************************************************************
** Form generated from reading UI file 'MetadataInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATAINSPECTOR_H
#define UI_METADATAINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MetadataInspector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tblMetaData;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *inFilter;

    void setupUi(QWidget *MetadataInspector)
    {
        if (MetadataInspector->objectName().isEmpty())
            MetadataInspector->setObjectName(QStringLiteral("MetadataInspector"));
        MetadataInspector->resize(410, 444);
        verticalLayout = new QVBoxLayout(MetadataInspector);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 18, 6, 6);
        label = new QLabel(MetadataInspector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tblMetaData = new QTableView(MetadataInspector);
        tblMetaData->setObjectName(QStringLiteral("tblMetaData"));
        tblMetaData->setAlternatingRowColors(true);
        tblMetaData->setSortingEnabled(false);
        tblMetaData->horizontalHeader()->setDefaultSectionSize(180);
        tblMetaData->horizontalHeader()->setStretchLastSection(true);
        tblMetaData->verticalHeader()->setVisible(false);
        tblMetaData->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tblMetaData);

        widget = new QWidget(MetadataInspector);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inFilter = new QLineEdit(widget);
        inFilter->setObjectName(QStringLiteral("inFilter"));

        horizontalLayout->addWidget(inFilter);


        verticalLayout->addWidget(widget);


        retranslateUi(MetadataInspector);

        QMetaObject::connectSlotsByName(MetadataInspector);
    } // setupUi

    void retranslateUi(QWidget *MetadataInspector)
    {
        MetadataInspector->setWindowTitle(QApplication::translate("MetadataInspector", "Form", 0));
        label->setText(QApplication::translate("MetadataInspector", "Image Metadata:", 0));
        label_2->setText(QApplication::translate("MetadataInspector", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class MetadataInspector: public Ui_MetadataInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATAINSPECTOR_H
