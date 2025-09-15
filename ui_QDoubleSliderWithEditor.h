/********************************************************************************
** Form generated from reading UI file 'QDoubleSliderWithEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDOUBLESLIDERWITHEDITOR_H
#define UI_QDOUBLESLIDERWITHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDoubleSliderWithEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinbox;
    QSlider *slider;

    void setupUi(QWidget *QDoubleSliderWithEditor)
    {
        if (QDoubleSliderWithEditor->objectName().isEmpty())
            QDoubleSliderWithEditor->setObjectName(QStringLiteral("QDoubleSliderWithEditor"));
        QDoubleSliderWithEditor->resize(210, 32);
        horizontalLayout = new QHBoxLayout(QDoubleSliderWithEditor);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinbox = new QDoubleSpinBox(QDoubleSliderWithEditor);
        spinbox->setObjectName(QStringLiteral("spinbox"));
        spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(spinbox);

        slider = new QSlider(QDoubleSliderWithEditor);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setOrientation(Qt::Horizontal);
        slider->setInvertedControls(false);
        slider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(slider);


        retranslateUi(QDoubleSliderWithEditor);

        QMetaObject::connectSlotsByName(QDoubleSliderWithEditor);
    } // setupUi

    void retranslateUi(QWidget *QDoubleSliderWithEditor)
    {
        QDoubleSliderWithEditor->setWindowTitle(QApplication::translate("QDoubleSliderWithEditor", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class QDoubleSliderWithEditor: public Ui_QDoubleSliderWithEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDOUBLESLIDERWITHEDITOR_H
