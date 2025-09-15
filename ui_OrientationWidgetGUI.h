/********************************************************************************
** Form generated from reading UI file 'OrientationWidgetGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIENTATIONWIDGETGUI_H
#define UI_ORIENTATIONWIDGETGUI_H

#include <QtCore/QVariant>
#include <QtSimpleOpenGLBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *m_pTableWidget;
    QLabel *label_3;
    QFrame *frame_3;
    QDoubleSpinBox *m_pDoubleSpinBoxTX;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *m_pDoubleSpinBoxTY;
    QDoubleSpinBox *m_pDoubleSpinBoxTZ;
    QFrame *frame_4;
    QDoubleSpinBox *m_pDoubleSpinBoxSX;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *m_pDoubleSpinBoxSY;
    QDoubleSpinBox *m_pDoubleSpinBoxSX_2;
    QFrame *frame_5;
    QDoubleSpinBox *m_pDoubleSpinBoxRotPhi;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QDoubleSpinBox *m_pDoubleSpinBoxRotTheta;
    QDoubleSpinBox *m_pDoubleSpinBoxRotPsi;
    QLabel *label_7;
    QRadioButton *m_pRadioButtonInterpretNegativeOrientation3x3;
    QtSimpleOpenGLBox *m_pQtSimpleOpenGLBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(826, 533);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(410, 10, 380, 440));
        frame_2->setMinimumSize(QSize(380, 440));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 71, 16));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 71, 16));
        m_pTableWidget = new QTableWidget(frame_2);
        if (m_pTableWidget->columnCount() < 4)
            m_pTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_pTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_pTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_pTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_pTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (m_pTableWidget->rowCount() < 4)
            m_pTableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_pTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        m_pTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        m_pTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        m_pTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        m_pTableWidget->setObjectName(QStringLiteral("m_pTableWidget"));
        m_pTableWidget->setGeometry(QRect(30, 160, 301, 201));
        m_pTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_pTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_pTableWidget->setShowGrid(true);
        m_pTableWidget->horizontalHeader()->setVisible(false);
        m_pTableWidget->horizontalHeader()->setDefaultSectionSize(75);
        m_pTableWidget->horizontalHeader()->setHighlightSections(false);
        m_pTableWidget->horizontalHeader()->setMinimumSectionSize(75);
        m_pTableWidget->verticalHeader()->setVisible(false);
        m_pTableWidget->verticalHeader()->setDefaultSectionSize(50);
        m_pTableWidget->verticalHeader()->setHighlightSections(false);
        m_pTableWidget->verticalHeader()->setMinimumSectionSize(50);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 71, 16));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setEnabled(false);
        frame_3->setGeometry(QRect(30, 30, 301, 40));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        m_pDoubleSpinBoxTX = new QDoubleSpinBox(frame_3);
        m_pDoubleSpinBoxTX->setObjectName(QStringLiteral("m_pDoubleSpinBoxTX"));
        m_pDoubleSpinBoxTX->setGeometry(QRect(39, 10, 61, 20));
        m_pDoubleSpinBoxTX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxTX->setMaximum(9999.99);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 16, 16));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 10, 16, 16));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 10, 16, 16));
        m_pDoubleSpinBoxTY = new QDoubleSpinBox(frame_3);
        m_pDoubleSpinBoxTY->setObjectName(QStringLiteral("m_pDoubleSpinBoxTY"));
        m_pDoubleSpinBoxTY->setGeometry(QRect(134, 10, 61, 20));
        m_pDoubleSpinBoxTY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxTY->setMaximum(9999.99);
        m_pDoubleSpinBoxTZ = new QDoubleSpinBox(frame_3);
        m_pDoubleSpinBoxTZ->setObjectName(QStringLiteral("m_pDoubleSpinBoxTZ"));
        m_pDoubleSpinBoxTZ->setGeometry(QRect(230, 10, 61, 20));
        m_pDoubleSpinBoxTZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxTZ->setMaximum(9999.99);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setEnabled(false);
        frame_4->setGeometry(QRect(30, 90, 301, 40));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        m_pDoubleSpinBoxSX = new QDoubleSpinBox(frame_4);
        m_pDoubleSpinBoxSX->setObjectName(QStringLiteral("m_pDoubleSpinBoxSX"));
        m_pDoubleSpinBoxSX->setGeometry(QRect(39, 10, 61, 20));
        m_pDoubleSpinBoxSX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxSX->setMaximum(9999.99);
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 10, 16, 16));
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 10, 16, 16));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 10, 16, 16));
        m_pDoubleSpinBoxSY = new QDoubleSpinBox(frame_4);
        m_pDoubleSpinBoxSY->setObjectName(QStringLiteral("m_pDoubleSpinBoxSY"));
        m_pDoubleSpinBoxSY->setGeometry(QRect(134, 10, 61, 20));
        m_pDoubleSpinBoxSY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxSY->setMaximum(9999.99);
        m_pDoubleSpinBoxSX_2 = new QDoubleSpinBox(frame_4);
        m_pDoubleSpinBoxSX_2->setObjectName(QStringLiteral("m_pDoubleSpinBoxSX_2"));
        m_pDoubleSpinBoxSX_2->setGeometry(QRect(230, 10, 61, 20));
        m_pDoubleSpinBoxSX_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxSX_2->setMaximum(9999.99);
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(30, 390, 301, 40));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        m_pDoubleSpinBoxRotPhi = new QDoubleSpinBox(frame_5);
        m_pDoubleSpinBoxRotPhi->setObjectName(QStringLiteral("m_pDoubleSpinBoxRotPhi"));
        m_pDoubleSpinBoxRotPhi->setGeometry(QRect(40, 10, 61, 20));
        m_pDoubleSpinBoxRotPhi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxRotPhi->setMinimum(-9999.99);
        m_pDoubleSpinBoxRotPhi->setMaximum(9999.99);
        m_pDoubleSpinBoxRotPhi->setSingleStep(0.01);
        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 10, 16, 16));
        label_14 = new QLabel(frame_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(105, 10, 31, 20));
        label_15 = new QLabel(frame_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(210, 10, 16, 16));
        m_pDoubleSpinBoxRotTheta = new QDoubleSpinBox(frame_5);
        m_pDoubleSpinBoxRotTheta->setObjectName(QStringLiteral("m_pDoubleSpinBoxRotTheta"));
        m_pDoubleSpinBoxRotTheta->setGeometry(QRect(134, 10, 61, 20));
        m_pDoubleSpinBoxRotTheta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxRotTheta->setMinimum(-9999.99);
        m_pDoubleSpinBoxRotTheta->setMaximum(9999.99);
        m_pDoubleSpinBoxRotTheta->setSingleStep(0.01);
        m_pDoubleSpinBoxRotPsi = new QDoubleSpinBox(frame_5);
        m_pDoubleSpinBoxRotPsi->setObjectName(QStringLiteral("m_pDoubleSpinBoxRotPsi"));
        m_pDoubleSpinBoxRotPsi->setGeometry(QRect(230, 10, 61, 20));
        m_pDoubleSpinBoxRotPsi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        m_pDoubleSpinBoxRotPsi->setMinimum(-9999.99);
        m_pDoubleSpinBoxRotPsi->setMaximum(9999.99);
        m_pDoubleSpinBoxRotPsi->setSingleStep(0.01);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 370, 71, 16));
        m_pRadioButtonInterpretNegativeOrientation3x3 = new QRadioButton(frame_2);
        m_pRadioButtonInterpretNegativeOrientation3x3->setObjectName(QStringLiteral("m_pRadioButtonInterpretNegativeOrientation3x3"));
        m_pRadioButtonInterpretNegativeOrientation3x3->setGeometry(QRect(100, 140, 231, 20));
        m_pRadioButtonInterpretNegativeOrientation3x3->setLayoutDirection(Qt::RightToLeft);
        m_pQtSimpleOpenGLBox = new QtSimpleOpenGLBox(frame);
        m_pQtSimpleOpenGLBox->setObjectName(QStringLiteral("m_pQtSimpleOpenGLBox"));
        m_pQtSimpleOpenGLBox->setGeometry(QRect(9, 19, 391, 431));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 826, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Translate", 0));
        label_2->setText(QApplication::translate("MainWindow", "Directions", 0));
        QTableWidgetItem *___qtablewidgetitem = m_pTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem1 = m_pTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem2 = m_pTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem3 = m_pTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem4 = m_pTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem5 = m_pTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem6 = m_pTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem7 = m_pTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "New Row", 0));
#ifndef QT_NO_TOOLTIP
        m_pTableWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "Spacing", 0));
        label_4->setText(QApplication::translate("MainWindow", "X", 0));
        label_5->setText(QApplication::translate("MainWindow", "Y", 0));
        label_6->setText(QApplication::translate("MainWindow", "Z", 0));
        label_10->setText(QApplication::translate("MainWindow", "X", 0));
        label_11->setText(QApplication::translate("MainWindow", "Y", 0));
        label_12->setText(QApplication::translate("MainWindow", "Z", 0));
        label_13->setText(QApplication::translate("MainWindow", "Phi", 0));
        label_14->setText(QApplication::translate("MainWindow", "Theta", 0));
        label_15->setText(QApplication::translate("MainWindow", "Psi", 0));
        label_7->setText(QApplication::translate("MainWindow", "Rotations", 0));
#ifndef QT_NO_TOOLTIP
        m_pRadioButtonInterpretNegativeOrientation3x3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_pRadioButtonInterpretNegativeOrientation3x3->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        m_pRadioButtonInterpretNegativeOrientation3x3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        m_pRadioButtonInterpretNegativeOrientation3x3->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        m_pRadioButtonInterpretNegativeOrientation3x3->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        m_pRadioButtonInterpretNegativeOrientation3x3->setText(QApplication::translate("MainWindow", "Assign negative orientation 3x3", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIENTATIONWIDGETGUI_H
