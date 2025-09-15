/********************************************************************************
** Form generated from reading UI file 'FileChooserPanelWithHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECHOOSERPANELWITHHISTORY_H
#define UI_FILECHOOSERPANELWITHHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileChooserPanelWithHistory
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *outError;
    QLineEdit *inFilename;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *outSavePath;
    QSpacerItem *verticalSpacer_2;
    QWidget *wButtonPanel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBrowse;
    QPushButton *btnHistory;
    QWidget *panelFormat;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFormat;
    QComboBox *inFormat;

    void setupUi(QWidget *FileChooserPanelWithHistory)
    {
        if (FileChooserPanelWithHistory->objectName().isEmpty())
            FileChooserPanelWithHistory->setObjectName(QStringLiteral("FileChooserPanelWithHistory"));
        FileChooserPanelWithHistory->resize(444, 155);
        FileChooserPanelWithHistory->setStyleSheet(QLatin1String("QMenu {\n"
"font-size:12px;\n"
"}"));
        verticalLayout = new QVBoxLayout(FileChooserPanelWithHistory);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(FileChooserPanelWithHistory);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        outError = new QLabel(widget_2);
        outError->setObjectName(QStringLiteral("outError"));
        outError->setStyleSheet(QStringLiteral("font-size:10px; color: #7f0000;	"));
        outError->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outError->setWordWrap(false);

        horizontalLayout_2->addWidget(outError, 0, Qt::AlignRight|Qt::AlignBottom);


        verticalLayout->addWidget(widget_2);

        inFilename = new QLineEdit(FileChooserPanelWithHistory);
        inFilename->setObjectName(QStringLiteral("inFilename"));

        verticalLayout->addWidget(inFilename);

        widget = new QWidget(FileChooserPanelWithHistory);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        outSavePath = new QLabel(widget);
        outSavePath->setObjectName(QStringLiteral("outSavePath"));
        outSavePath->setStyleSheet(QStringLiteral("font-size:10px; color: rgb(91, 91, 91);"));
        outSavePath->setWordWrap(true);

        horizontalLayout_3->addWidget(outSavePath, 0, Qt::AlignTop);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addWidget(widget);

        wButtonPanel = new QWidget(FileChooserPanelWithHistory);
        wButtonPanel->setObjectName(QStringLiteral("wButtonPanel"));
        horizontalLayout = new QHBoxLayout(wButtonPanel);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnBrowse = new QPushButton(wButtonPanel);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));

        horizontalLayout->addWidget(btnBrowse);

        btnHistory = new QPushButton(wButtonPanel);
        btnHistory->setObjectName(QStringLiteral("btnHistory"));

        horizontalLayout->addWidget(btnHistory);


        verticalLayout->addWidget(wButtonPanel);

        panelFormat = new QWidget(FileChooserPanelWithHistory);
        panelFormat->setObjectName(QStringLiteral("panelFormat"));
        verticalLayout_2 = new QVBoxLayout(panelFormat);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelFormat = new QLabel(panelFormat);
        labelFormat->setObjectName(QStringLiteral("labelFormat"));

        verticalLayout_2->addWidget(labelFormat);

        inFormat = new QComboBox(panelFormat);
        inFormat->setObjectName(QStringLiteral("inFormat"));
        inFormat->setMinimumSize(QSize(160, 0));

        verticalLayout_2->addWidget(inFormat, 0, Qt::AlignLeft);


        verticalLayout->addWidget(panelFormat);

        QWidget::setTabOrder(inFilename, btnBrowse);
        QWidget::setTabOrder(btnBrowse, btnHistory);
        QWidget::setTabOrder(btnHistory, inFormat);

        retranslateUi(FileChooserPanelWithHistory);

        QMetaObject::connectSlotsByName(FileChooserPanelWithHistory);
    } // setupUi

    void retranslateUi(QWidget *FileChooserPanelWithHistory)
    {
        FileChooserPanelWithHistory->setWindowTitle(QApplication::translate("FileChooserPanelWithHistory", "Form", 0));
        label->setText(QApplication::translate("FileChooserPanelWithHistory", "TextLabel", 0));
        outError->setText(QApplication::translate("FileChooserPanelWithHistory", "TextLabel", 0));
        outSavePath->setText(QApplication::translate("FileChooserPanelWithHistory", "TextLabel", 0));
        btnBrowse->setText(QApplication::translate("FileChooserPanelWithHistory", "Browse...", 0));
        btnHistory->setText(QApplication::translate("FileChooserPanelWithHistory", "History", 0));
        labelFormat->setText(QApplication::translate("FileChooserPanelWithHistory", "File Format:", 0));
    } // retranslateUi

};

namespace Ui {
    class FileChooserPanelWithHistory: public Ui_FileChooserPanelWithHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECHOOSERPANELWITHHISTORY_H
