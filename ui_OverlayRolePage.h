/********************************************************************************
** Form generated from reading UI file 'OverlayRolePage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAYROLEPAGE_H
#define UI_OVERLAYROLEPAGE_H

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

QT_BEGIN_NAMESPACE

class Ui_OverlayRolePage
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *wgtMain;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *btnSeparate;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *btnOverlay;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *inOverlayColorMap;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *OverlayRolePage)
    {
        if (OverlayRolePage->objectName().isEmpty())
            OverlayRolePage->setObjectName(QStringLiteral("OverlayRolePage"));
        OverlayRolePage->resize(437, 289);
        OverlayRolePage->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(OverlayRolePage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        wgtMain = new QWidget(OverlayRolePage);
        wgtMain->setObjectName(QStringLiteral("wgtMain"));
        verticalLayout_3 = new QVBoxLayout(wgtMain);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSeparate = new QRadioButton(wgtMain);
        btnSeparate->setObjectName(QStringLiteral("btnSeparate"));

        verticalLayout_3->addWidget(btnSeparate);

        widget_2 = new QWidget(wgtMain);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-size:10px;\n"
"color:rgb(96, 96, 96);"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        verticalLayout_3->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        btnOverlay = new QRadioButton(wgtMain);
        btnOverlay->setObjectName(QStringLiteral("btnOverlay"));

        verticalLayout_3->addWidget(btnOverlay);

        widget_3 = new QWidget(wgtMain);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(20, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font-size:10px;\n"
"color:rgb(96, 96, 96);"));
        label_3->setWordWrap(true);

        verticalLayout_5->addWidget(label_3);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, -1, -1, -1);
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4, 0, Qt::AlignLeft);

        inOverlayColorMap = new QComboBox(widget_5);
        inOverlayColorMap->setObjectName(QStringLiteral("inOverlayColorMap"));
        inOverlayColorMap->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(inOverlayColorMap, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addWidget(widget_5);


        verticalLayout_3->addWidget(widget_3);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget_4 = new QWidget(wgtMain);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);

        verticalLayout_3->addWidget(widget_4);


        verticalLayout_4->addWidget(wgtMain);


        retranslateUi(OverlayRolePage);

        QMetaObject::connectSlotsByName(OverlayRolePage);
    } // setupUi

    void retranslateUi(QWidget *OverlayRolePage)
    {
        OverlayRolePage->setWindowTitle(QApplication::translate("OverlayRolePage", "Form", 0));
        btnSeparate->setText(QApplication::translate("OverlayRolePage", "As a separate image (shown beside other images)", 0));
        label_2->setText(QApplication::translate("OverlayRolePage", "Best setting for viewing multiple anatomical images of the same subject", 0));
        btnOverlay->setText(QApplication::translate("OverlayRolePage", "As a semi-transparent overlay (shown on top of other images)", 0));
        label_3->setText(QApplication::translate("OverlayRolePage", "Best setting for viewing derived data such as statistical maps", 0));
        label_4->setText(QApplication::translate("OverlayRolePage", "Overlay color map:", 0));
    } // retranslateUi

};

namespace Ui {
    class OverlayRolePage: public Ui_OverlayRolePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAYROLEPAGE_H
