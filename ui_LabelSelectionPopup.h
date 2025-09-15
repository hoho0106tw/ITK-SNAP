/********************************************************************************
** Form generated from reading UI file 'LabelSelectionPopup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELSELECTIONPOPUP_H
#define UI_LABELSELECTIONPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabelSelectionPopup
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QWidget *tbForeground;
    QHBoxLayout *horizontalLayout;
    QComboBox *inForeground;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *tbBackground;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *inBackground;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LabelSelectionPopup)
    {
        if (LabelSelectionPopup->objectName().isEmpty())
            LabelSelectionPopup->setObjectName(QStringLiteral("LabelSelectionPopup"));
        LabelSelectionPopup->resize(236, 133);
        LabelSelectionPopup->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  color: rgba(210,210,210,210);\n"
"  background-color: rgba(80,80,80,210);\n"
"  padding: 5px;\n"
"  border-radius: 4px;\n"
"  border: 1px solid rgba(30,30,30,210);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}\n"
"QComboBox {\n"
"  background-color: rgba(120,120,120,210);\n"
"}\n"
"LabelSelectionPopup {\n"
"  background-color: rgba(80,80,80,210);\n"
"}"));
        verticalLayout = new QVBoxLayout(LabelSelectionPopup);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(LabelSelectionPopup);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tbForeground = new QWidget(groupBox);
        tbForeground->setObjectName(QStringLiteral("tbForeground"));
        horizontalLayout = new QHBoxLayout(tbForeground);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_3->addWidget(tbForeground);

        inForeground = new QComboBox(groupBox);
        inForeground->setObjectName(QStringLiteral("inForeground"));

        verticalLayout_3->addWidget(inForeground);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tbBackground = new QWidget(groupBox_2);
        tbBackground->setObjectName(QStringLiteral("tbBackground"));
        horizontalLayout_2 = new QHBoxLayout(tbBackground);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_4->addWidget(tbBackground);

        inBackground = new QComboBox(groupBox_2);
        inBackground->setObjectName(QStringLiteral("inBackground"));

        verticalLayout_4->addWidget(inBackground);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(LabelSelectionPopup);

        QMetaObject::connectSlotsByName(LabelSelectionPopup);
    } // setupUi

    void retranslateUi(QWidget *LabelSelectionPopup)
    {
        LabelSelectionPopup->setWindowTitle(QApplication::translate("LabelSelectionPopup", "Form", 0));
        groupBox->setTitle(QApplication::translate("LabelSelectionPopup", "Foreground Label:", 0));
        groupBox_2->setTitle(QApplication::translate("LabelSelectionPopup", "Background Label:", 0));
    } // retranslateUi

};

namespace Ui {
    class LabelSelectionPopup: public Ui_LabelSelectionPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELSELECTIONPOPUP_H
