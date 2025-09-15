/********************************************************************************
** Form generated from reading UI file 'AnnotationEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOTATIONEDITDIALOG_H
#define UI_ANNOTATIONEDITDIALOG_H

#include <QColorButtonWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <TagListWidget.h>

QT_BEGIN_NAMESPACE

class Ui_AnnotationEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stkEditor;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inLandmarkText;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QColorButtonWidget *inLandmarkColor;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    TagListWidget *inLandmarkTag;
    QWidget *page_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AnnotationEditDialog)
    {
        if (AnnotationEditDialog->objectName().isEmpty())
            AnnotationEditDialog->setObjectName(QStringLiteral("AnnotationEditDialog"));
        AnnotationEditDialog->resize(366, 187);
        AnnotationEditDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AnnotationEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stkEditor = new QStackedWidget(AnnotationEditDialog);
        stkEditor->setObjectName(QStringLiteral("stkEditor"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inLandmarkText = new QLineEdit(page);
        inLandmarkText->setObjectName(QStringLiteral("inLandmarkText"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inLandmarkText);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        inLandmarkColor = new QColorButtonWidget(widget);
        inLandmarkColor->setObjectName(QStringLiteral("inLandmarkColor"));

        horizontalLayout->addWidget(inLandmarkColor);

        horizontalSpacer = new QSpacerItem(226, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setWidget(1, QFormLayout::FieldRole, widget);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        inLandmarkTag = new TagListWidget(page);
        inLandmarkTag->setObjectName(QStringLiteral("inLandmarkTag"));
        inLandmarkTag->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(2, QFormLayout::FieldRole, inLandmarkTag);

        stkEditor->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stkEditor->addWidget(page_2);

        verticalLayout->addWidget(stkEditor);

        buttonBox = new QDialogButtonBox(AnnotationEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AnnotationEditDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), AnnotationEditDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), AnnotationEditDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AnnotationEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AnnotationEditDialog)
    {
        AnnotationEditDialog->setWindowTitle(QApplication::translate("AnnotationEditDialog", "Edit Annotation", 0));
        label->setText(QApplication::translate("AnnotationEditDialog", "Text:", 0));
        label_3->setText(QApplication::translate("AnnotationEditDialog", "Color:", 0));
        label_2->setText(QApplication::translate("AnnotationEditDialog", "Tags:", 0));
#ifndef QT_NO_TOOLTIP
        inLandmarkTag->setToolTip(QApplication::translate("AnnotationEditDialog", "<html><head/><body><p>One or more textual tags can be assigned to an annotation. Tags are not used directly by ITK-SNAP but may be used to label objects in the ITK-SNAP workspace for other software. Type in words separated by commas to create tags. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AnnotationEditDialog: public Ui_AnnotationEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOTATIONEDITDIALOG_H
