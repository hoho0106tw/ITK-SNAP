/********************************************************************************
** Form generated from reading UI file 'CollapsableGroupBox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLAPSABLEGROUPBOX_H
#define UI_COLLAPSABLEGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CollapsableGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QWidget *body;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *CollapsableGroupBox)
    {
        if (CollapsableGroupBox->objectName().isEmpty())
            CollapsableGroupBox->setObjectName(QStringLiteral("CollapsableGroupBox"));
        CollapsableGroupBox->resize(214, 309);
        CollapsableGroupBox->setStyleSheet(QLatin1String("QWidget#body\n"
"{\n"
"	border-left: 1px solid gray;\n"
"  	border-right: 1px solid gray;\n"
"    background-color: gray;\n"
"}"));
        verticalLayout = new QVBoxLayout(CollapsableGroupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(CollapsableGroupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"  border-radius:0px;\n"
"  border-top: 1px solid gray;\n"
"  border-bottom: 1px solid gray;\n"
"  background-color: qlineargradient(spread:pad, x1:0.123, y1:0.125, x2:0.108, y2:1, stop:0 rgba(204, 204,   204, 255), stop:1 rgba(255, 255, 255, 255));\n"
"  margin:0px;\n"
"  padding: 0px;\n"
"  text-align:left;\n"
"  font:12px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/triangle_small_down_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/root/triangle_small_right_16.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setCheckable(true);
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        body = new QWidget(CollapsableGroupBox);
        body->setObjectName(QStringLiteral("body"));
        verticalLayout_2 = new QVBoxLayout(body);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout->addWidget(body, 0, Qt::AlignTop);


        retranslateUi(CollapsableGroupBox);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), CollapsableGroupBox, SLOT(collapse(bool)));

        QMetaObject::connectSlotsByName(CollapsableGroupBox);
    } // setupUi

    void retranslateUi(QWidget *CollapsableGroupBox)
    {
        CollapsableGroupBox->setWindowTitle(QApplication::translate("CollapsableGroupBox", "Form", 0));
        pushButton->setText(QApplication::translate("CollapsableGroupBox", "Main Image", 0));
    } // retranslateUi

};

namespace Ui {
    class CollapsableGroupBox: public Ui_CollapsableGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLAPSABLEGROUPBOX_H
