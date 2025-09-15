/********************************************************************************
** Form generated from reading UI file 'LabelInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELINSPECTOR_H
#define UI_LABELINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabelInspector
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *inForeLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QComboBox *inBackLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *inOpacityValue;
    QSlider *inOpacity;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;

    void setupUi(QWidget *LabelInspector)
    {
        if (LabelInspector->objectName().isEmpty())
            LabelInspector->setObjectName(QStringLiteral("LabelInspector"));
        LabelInspector->resize(164, 136);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelInspector->sizePolicy().hasHeightForWidth());
        LabelInspector->setSizePolicy(sizePolicy);
        LabelInspector->setMaximumSize(QSize(16777215, 16777215));
        LabelInspector->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(LabelInspector);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(LabelInspector);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("QLabel  {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QComboBox {\n"
"  font-size:12px;\n"
"  padding: 0px 0px 0px 5px;\n"
"}\n"
"\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_5);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label);

        inForeLabel = new QComboBox(widget_5);
        inForeLabel->setObjectName(QStringLiteral("inForeLabel"));
        inForeLabel->setStyleSheet(QLatin1String("QAbstractItemView::item {\n"
"spacing:10;\n"
"}"));
        inForeLabel->setEditable(false);
        inForeLabel->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_2->addWidget(inForeLabel);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_2);

        inBackLabel = new QComboBox(widget_5);
        inBackLabel->setObjectName(QStringLiteral("inBackLabel"));

        verticalLayout_2->addWidget(inBackLabel);

        widget = new QWidget(widget_5);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(label_6);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        inOpacityValue = new QSpinBox(widget_2);
        inOpacityValue->setObjectName(QStringLiteral("inOpacityValue"));
        inOpacityValue->setFrame(true);
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
        inOpacity->setTickPosition(QSlider::NoTicks);
        inOpacity->setTickInterval(25);

        horizontalLayout_2->addWidget(inOpacity);


        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(widget_3);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(widget_5);


        retranslateUi(LabelInspector);

        QMetaObject::connectSlotsByName(LabelInspector);
    } // setupUi

    void retranslateUi(QWidget *LabelInspector)
    {
        LabelInspector->setWindowTitle(QApplication::translate("LabelInspector", "Form", 0));
        label->setText(QApplication::translate("LabelInspector", "Active label:", 0));
        inForeLabel->clear();
        inForeLabel->insertItems(0, QStringList()
         << QApplication::translate("LabelInspector", "Hello", 0)
        );
#ifndef QT_NO_TOOLTIP
        inForeLabel->setToolTip(QApplication::translate("LabelInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Active Segmentation Label (&lt;,&gt;)</span></p><p>Select the label used for segmentation operations, including manual and automatic tools. When segmentations are generated, they will be assigned the active segmentation label. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("LabelInspector", "Paint over:", 0));
#ifndef QT_NO_TOOLTIP
        inBackLabel->setToolTip(QApplication::translate("LabelInspector", "<html><head/><body><p><span style=\" font-weight:600;\">&quot;Paint Over&quot; Mask</span></p><p>Determines how segmentation operations such as drawing polygons affect voxels in the segmentation image.<br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td><p><span style=\" text-decoration: underline;\">Paint over mask</span></p></td><td><p><span style=\" text-decoration: underline;\">Which voxels are affected:</span></p></td></tr><tr><td><p>All labels</p></td><td><p>All voxels</p></td></tr><tr><td><p>All visible labels  &nbsp;&nbsp; </p></td><td><p>All voxels except those labeled with a hidden label</p></td></tr><tr><td><p>Clear label</p></td><td><p>Voxels that have not been assigned a label already</p></td></tr><tr><td><p>Specific label</p></td><td><p>Voxels that have the specific label </p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("LabelInspector", "Overall label opacity:", 0));
#ifndef QT_NO_TOOLTIP
        inOpacityValue->setToolTip(QApplication::translate("LabelInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Label Opacity (A,S,D keys)</span></p><p>Change the overall opacity of segmentation labels.<br></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>A,D</p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Make labels less/more opaque</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>S</p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Toggle label visibility on and off</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inOpacity->setToolTip(QApplication::translate("LabelInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Label Opacity (A,S,D keys)</span></p><p>Change the overall opacity of segmentation labels.<br></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>A,D</p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Make labels less/more opaque</p></td></tr><tr><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>S</p></td><td style=\" padding-left:5; padding-right:5; padding-top:0; padding-bottom:0;\"><p>Toggle label visibility on and off</p></td></tr></table></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class LabelInspector: public Ui_LabelInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELINSPECTOR_H
