/********************************************************************************
** Form generated from reading UI file 'LabelMiniInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELMINIINSPECTOR_H
#define UI_LABELMINIINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabelMiniInspector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *inForeLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QComboBox *inBackLabel;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *cbInvert;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *inOpacityValue;
    QSlider *inOpacity;
    QToolButton *toolButton;

    void setupUi(QWidget *LabelMiniInspector)
    {
        if (LabelMiniInspector->objectName().isEmpty())
            LabelMiniInspector->setObjectName(QStringLiteral("LabelMiniInspector"));
        LabelMiniInspector->resize(169, 171);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelMiniInspector->sizePolicy().hasHeightForWidth());
        LabelMiniInspector->setSizePolicy(sizePolicy);
        LabelMiniInspector->setMaximumSize(QSize(16777215, 16777215));
        LabelMiniInspector->setStyleSheet(QLatin1String("*  {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QAbstractItemView::item {\n"
"  padding:4px;\n"
"}"));
        verticalLayout = new QVBoxLayout(LabelMiniInspector);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(LabelMiniInspector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        inForeLabel = new QComboBox(LabelMiniInspector);
        inForeLabel->setObjectName(QStringLiteral("inForeLabel"));
        inForeLabel->setStyleSheet(QLatin1String("QAbstractItemView::item {\n"
"spacing:10;\n"
"}"));
        inForeLabel->setEditable(false);
        inForeLabel->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout->addWidget(inForeLabel);

        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(LabelMiniInspector);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_3);

        inBackLabel = new QComboBox(LabelMiniInspector);
        inBackLabel->setObjectName(QStringLiteral("inBackLabel"));

        verticalLayout->addWidget(inBackLabel);

        widget_4 = new QWidget(LabelMiniInspector);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        cbInvert = new QCheckBox(widget_4);
        cbInvert->setObjectName(QStringLiteral("cbInvert"));

        horizontalLayout_5->addWidget(cbInvert);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        widget = new QWidget(LabelMiniInspector);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(label_4);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        inOpacityValue = new QSpinBox(widget_2);
        inOpacityValue->setObjectName(QStringLiteral("inOpacityValue"));
        inOpacityValue->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(inOpacityValue);

        inOpacity = new QSlider(widget_2);
        inOpacity->setObjectName(QStringLiteral("inOpacity"));
        inOpacity->setMinimum(0);
        inOpacity->setMaximum(100);
        inOpacity->setSingleStep(1);
        inOpacity->setPageStep(10);
        inOpacity->setValue(50);
        inOpacity->setOrientation(Qt::Horizontal);
        inOpacity->setTickPosition(QSlider::TicksBelow);
        inOpacity->setTickInterval(25);

        horizontalLayout_2->addWidget(inOpacity);

        toolButton = new QToolButton(widget_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/popup_delete_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/root/popup_ok_16.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton->setIcon(icon);
        toolButton->setCheckable(true);
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout->addWidget(widget);


        retranslateUi(LabelMiniInspector);

        QMetaObject::connectSlotsByName(LabelMiniInspector);
    } // setupUi

    void retranslateUi(QWidget *LabelMiniInspector)
    {
        LabelMiniInspector->setWindowTitle(QApplication::translate("LabelMiniInspector", "Form", 0));
        label->setText(QApplication::translate("LabelMiniInspector", "Foreground label:", 0));
        label_3->setText(QApplication::translate("LabelMiniInspector", "Background label:", 0));
#ifndef QT_NO_TOOLTIP
        cbInvert->setToolTip(QApplication::translate("LabelMiniInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Inverts some segmentation operations, such as polygon drawing, by applying the segmentation to the outside of the drawn region, rather than inside.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbInvert->setText(QApplication::translate("LabelMiniInspector", "Draw inverted", 0));
        label_4->setText(QApplication::translate("LabelMiniInspector", "Overall label opacity:", 0));
        inOpacityValue->setSuffix(QApplication::translate("LabelMiniInspector", "%", 0));
#ifndef QT_NO_TOOLTIP
        inOpacity->setToolTip(QApplication::translate("LabelMiniInspector", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:12px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the overall opacity of segmentation labels.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[A]: Make more transparent</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[D]: Make more opaque</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">[S]: Toggle on/off</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QApplication::translate("LabelMiniInspector", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class LabelMiniInspector: public Ui_LabelMiniInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELMINIINSPECTOR_H
