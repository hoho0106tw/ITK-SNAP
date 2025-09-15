/********************************************************************************
** Form generated from reading UI file 'MeshExportModePage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHEXPORTMODEPAGE_H
#define UI_MESHEXPORTMODEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_MeshExportModePage
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *btnExportOne;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QComboBox *inLabel;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *btnExportMultipleFiles;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *btnExportScene;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWizardPage *MeshExportModePage)
    {
        if (MeshExportModePage->objectName().isEmpty())
            MeshExportModePage->setObjectName(QStringLiteral("MeshExportModePage"));
        MeshExportModePage->resize(400, 300);
        verticalLayout = new QVBoxLayout(MeshExportModePage);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnExportOne = new QRadioButton(MeshExportModePage);
        btnExportOne->setObjectName(QStringLiteral("btnExportOne"));

        verticalLayout->addWidget(btnExportOne);

        widget = new QWidget(MeshExportModePage);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(24, 6, 6, 6);
        inLabel = new QComboBox(widget);
        inLabel->setObjectName(QStringLiteral("inLabel"));

        verticalLayout_3->addWidget(inLabel);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        btnExportMultipleFiles = new QRadioButton(MeshExportModePage);
        btnExportMultipleFiles->setObjectName(QStringLiteral("btnExportMultipleFiles"));

        verticalLayout->addWidget(btnExportMultipleFiles);

        widget_2 = new QWidget(MeshExportModePage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, 6, 6, 6);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font-size:11px;\n"
"color:rgb(128, 128, 128);"));

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        btnExportScene = new QRadioButton(MeshExportModePage);
        btnExportScene->setObjectName(QStringLiteral("btnExportScene"));

        verticalLayout->addWidget(btnExportScene);

        widget_3 = new QWidget(MeshExportModePage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(24, 6, 6, 6);

        verticalLayout->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MeshExportModePage);

        QMetaObject::connectSlotsByName(MeshExportModePage);
    } // setupUi

    void retranslateUi(QWizardPage *MeshExportModePage)
    {
        MeshExportModePage->setWindowTitle(QApplication::translate("MeshExportModePage", "WizardPage", 0));
        btnExportOne->setText(QApplication::translate("MeshExportModePage", "Export a mesh for a single label", 0));
        btnExportMultipleFiles->setText(QApplication::translate("MeshExportModePage", "Export meshes for all labels as separate files", 0));
        label->setText(QApplication::translate("MeshExportModePage", "Filenames will include label number (e.g., 001, 002)", 0));
        btnExportScene->setText(QApplication::translate("MeshExportModePage", "Export meshes for all labels as a single scene", 0));
    } // retranslateUi

};

namespace Ui {
    class MeshExportModePage: public Ui_MeshExportModePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHEXPORTMODEPAGE_H
