/********************************************************************************
** Form generated from reading UI file 'ReorientImageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REORIENTIMAGEDIALOG_H
#define UI_REORIENTIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtVTKRenderWindowBox.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReorientImageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inNewRAI;
    QLabel *outInvalidStatus;
    QLineEdit *outCurrentAxisDirY;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *inNewAxisDirY;
    QToolButton *btnReverseY;
    QLineEdit *outCurrentAxisDirZ;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *inNewAxisDirZ;
    QToolButton *btnReverseZ;
    QLineEdit *outCurrentAxisDirX;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *inNewAxisDirX;
    QToolButton *btnReverseX;
    QLabel *label_3;
    QLabel *label_4;
    QtVTKRenderWindowBox *iconNew;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *outMatrixNew;
    QLabel *label_6;
    QLabel *label_7;
    QtVTKRenderWindowBox *iconCurrent;
    QLabel *label_5;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *outMatrixCurrent;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *outCurrentRAI;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnApply;
    QPushButton *btnClose;

    void setupUi(QDialog *ReorientImageDialog)
    {
        if (ReorientImageDialog->objectName().isEmpty())
            ReorientImageDialog->setObjectName(QStringLiteral("ReorientImageDialog"));
        ReorientImageDialog->resize(623, 573);
        ReorientImageDialog->setStyleSheet(QLatin1String("QLineEdit:read-only {\n"
"  background-color:rgb(240,240,240);\n"
"}\n"
"QTableWidget {\n"
"  font: 10px fixed;\n"
"}"));
        verticalLayout = new QVBoxLayout(ReorientImageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_4 = new QWidget(ReorientImageDialog);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        inNewRAI = new QLineEdit(widget_4);
        inNewRAI->setObjectName(QStringLiteral("inNewRAI"));
        inNewRAI->setMaxLength(3);

        verticalLayout_2->addWidget(inNewRAI);

        outInvalidStatus = new QLabel(widget_4);
        outInvalidStatus->setObjectName(QStringLiteral("outInvalidStatus"));
        outInvalidStatus->setStyleSheet(QLatin1String("color:rgb(128, 0, 0);\n"
"font: 11px;"));

        verticalLayout_2->addWidget(outInvalidStatus);


        gridLayout->addWidget(widget_4, 1, 2, 1, 1);

        outCurrentAxisDirY = new QLineEdit(ReorientImageDialog);
        outCurrentAxisDirY->setObjectName(QStringLiteral("outCurrentAxisDirY"));
        outCurrentAxisDirY->setStyleSheet(QStringLiteral(""));
        outCurrentAxisDirY->setReadOnly(true);

        gridLayout->addWidget(outCurrentAxisDirY, 4, 1, 1, 1);

        widget_7 = new QWidget(ReorientImageDialog);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        inNewAxisDirY = new QComboBox(widget_7);
        inNewAxisDirY->setObjectName(QStringLiteral("inNewAxisDirY"));

        horizontalLayout_5->addWidget(inNewAxisDirY);

        btnReverseY = new QToolButton(widget_7);
        btnReverseY->setObjectName(QStringLiteral("btnReverseY"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/revertaxis_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReverseY->setIcon(icon);
        btnReverseY->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(btnReverseY);


        gridLayout->addWidget(widget_7, 4, 2, 1, 1);

        outCurrentAxisDirZ = new QLineEdit(ReorientImageDialog);
        outCurrentAxisDirZ->setObjectName(QStringLiteral("outCurrentAxisDirZ"));
        outCurrentAxisDirZ->setStyleSheet(QStringLiteral(""));
        outCurrentAxisDirZ->setReadOnly(true);

        gridLayout->addWidget(outCurrentAxisDirZ, 5, 1, 1, 1);

        widget_8 = new QWidget(ReorientImageDialog);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        inNewAxisDirZ = new QComboBox(widget_8);
        inNewAxisDirZ->setObjectName(QStringLiteral("inNewAxisDirZ"));

        horizontalLayout_6->addWidget(inNewAxisDirZ);

        btnReverseZ = new QToolButton(widget_8);
        btnReverseZ->setObjectName(QStringLiteral("btnReverseZ"));
        btnReverseZ->setIcon(icon);
        btnReverseZ->setIconSize(QSize(16, 16));

        horizontalLayout_6->addWidget(btnReverseZ);


        gridLayout->addWidget(widget_8, 5, 2, 1, 1);

        outCurrentAxisDirX = new QLineEdit(ReorientImageDialog);
        outCurrentAxisDirX->setObjectName(QStringLiteral("outCurrentAxisDirX"));
        outCurrentAxisDirX->setStyleSheet(QStringLiteral(""));
        outCurrentAxisDirX->setReadOnly(true);

        gridLayout->addWidget(outCurrentAxisDirX, 3, 1, 1, 1);

        widget_6 = new QWidget(ReorientImageDialog);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        inNewAxisDirX = new QComboBox(widget_6);
        inNewAxisDirX->setObjectName(QStringLiteral("inNewAxisDirX"));

        horizontalLayout_4->addWidget(inNewAxisDirX);

        btnReverseX = new QToolButton(widget_6);
        btnReverseX->setObjectName(QStringLiteral("btnReverseX"));
        btnReverseX->setIcon(icon);
        btnReverseX->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(btnReverseX);


        gridLayout->addWidget(widget_6, 3, 2, 1, 1);

        label_3 = new QLabel(ReorientImageDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(ReorientImageDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        iconNew = new QtVTKRenderWindowBox(ReorientImageDialog);
        iconNew->setObjectName(QStringLiteral("iconNew"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(iconNew->sizePolicy().hasHeightForWidth());
        iconNew->setSizePolicy(sizePolicy);
        iconNew->setMinimumSize(QSize(0, 160));
        iconNew->setMaximumSize(QSize(242, 16777215));
        iconNew->setStyleSheet(QStringLiteral("background:blue;"));

        gridLayout->addWidget(iconNew, 7, 2, 1, 1);

        widget_2 = new QWidget(ReorientImageDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        outMatrixNew = new QTableWidget(widget_2);
        if (outMatrixNew->columnCount() < 4)
            outMatrixNew->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        outMatrixNew->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        outMatrixNew->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        outMatrixNew->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        outMatrixNew->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (outMatrixNew->rowCount() < 4)
            outMatrixNew->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        outMatrixNew->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        outMatrixNew->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        outMatrixNew->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        outMatrixNew->setVerticalHeaderItem(3, __qtablewidgetitem7);
        outMatrixNew->setObjectName(QStringLiteral("outMatrixNew"));
        outMatrixNew->setMinimumSize(QSize(242, 98));
        outMatrixNew->setMaximumSize(QSize(242, 98));
        outMatrixNew->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        outMatrixNew->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        outMatrixNew->setEditTriggers(QAbstractItemView::NoEditTriggers);
        outMatrixNew->horizontalHeader()->setVisible(false);
        outMatrixNew->horizontalHeader()->setDefaultSectionSize(60);
        outMatrixNew->verticalHeader()->setVisible(false);
        outMatrixNew->verticalHeader()->setDefaultSectionSize(24);

        horizontalLayout_2->addWidget(outMatrixNew);


        gridLayout->addWidget(widget_2, 6, 2, 1, 1);

        label_6 = new QLabel(ReorientImageDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_7 = new QLabel(ReorientImageDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        iconCurrent = new QtVTKRenderWindowBox(ReorientImageDialog);
        iconCurrent->setObjectName(QStringLiteral("iconCurrent"));
        sizePolicy.setHeightForWidth(iconCurrent->sizePolicy().hasHeightForWidth());
        iconCurrent->setSizePolicy(sizePolicy);
        iconCurrent->setMinimumSize(QSize(0, 160));
        iconCurrent->setMaximumSize(QSize(242, 16777215));
        iconCurrent->setStyleSheet(QStringLiteral("background:blue;"));

        gridLayout->addWidget(iconCurrent, 7, 1, 1, 1);

        label_5 = new QLabel(ReorientImageDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_2 = new QLabel(ReorientImageDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        widget_3 = new QWidget(ReorientImageDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        outMatrixCurrent = new QTableWidget(widget_3);
        if (outMatrixCurrent->columnCount() < 4)
            outMatrixCurrent->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        outMatrixCurrent->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        outMatrixCurrent->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        outMatrixCurrent->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        outMatrixCurrent->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        if (outMatrixCurrent->rowCount() < 4)
            outMatrixCurrent->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        outMatrixCurrent->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        outMatrixCurrent->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        outMatrixCurrent->setVerticalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        outMatrixCurrent->setVerticalHeaderItem(3, __qtablewidgetitem15);
        outMatrixCurrent->setObjectName(QStringLiteral("outMatrixCurrent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(outMatrixCurrent->sizePolicy().hasHeightForWidth());
        outMatrixCurrent->setSizePolicy(sizePolicy1);
        outMatrixCurrent->setMinimumSize(QSize(242, 10));
        outMatrixCurrent->setMaximumSize(QSize(242, 98));
        outMatrixCurrent->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        outMatrixCurrent->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        outMatrixCurrent->setEditTriggers(QAbstractItemView::NoEditTriggers);
        outMatrixCurrent->horizontalHeader()->setVisible(false);
        outMatrixCurrent->horizontalHeader()->setDefaultSectionSize(60);
        outMatrixCurrent->verticalHeader()->setVisible(false);
        outMatrixCurrent->verticalHeader()->setDefaultSectionSize(24);

        horizontalLayout_3->addWidget(outMatrixCurrent);


        gridLayout->addWidget(widget_3, 6, 1, 1, 1);

        widget_5 = new QWidget(ReorientImageDialog);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_3 = new QVBoxLayout(widget_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        outCurrentRAI = new QLineEdit(widget_5);
        outCurrentRAI->setObjectName(QStringLiteral("outCurrentRAI"));
        outCurrentRAI->setReadOnly(true);

        verticalLayout_3->addWidget(outCurrentRAI);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addWidget(widget_5, 1, 1, 1, 1);

        widget_9 = new QWidget(ReorientImageDialog);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        verticalLayout_4 = new QVBoxLayout(widget_9);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_9);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        gridLayout->addWidget(widget_9, 1, 0, 1, 1);

        widget_10 = new QWidget(ReorientImageDialog);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(99);
        sizePolicy2.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(widget_10, 8, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        widget = new QWidget(ReorientImageDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnApply = new QPushButton(widget);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        horizontalLayout->addWidget(btnApply);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(inNewRAI, inNewAxisDirX);
        QWidget::setTabOrder(inNewAxisDirX, btnReverseX);
        QWidget::setTabOrder(btnReverseX, inNewAxisDirY);
        QWidget::setTabOrder(inNewAxisDirY, btnReverseY);
        QWidget::setTabOrder(btnReverseY, inNewAxisDirZ);
        QWidget::setTabOrder(inNewAxisDirZ, btnReverseZ);
        QWidget::setTabOrder(btnReverseZ, btnApply);
        QWidget::setTabOrder(btnApply, btnClose);
        QWidget::setTabOrder(btnClose, outMatrixNew);
        QWidget::setTabOrder(outMatrixNew, outCurrentRAI);
        QWidget::setTabOrder(outCurrentRAI, outCurrentAxisDirZ);
        QWidget::setTabOrder(outCurrentAxisDirZ, outCurrentAxisDirY);
        QWidget::setTabOrder(outCurrentAxisDirY, outCurrentAxisDirX);
        QWidget::setTabOrder(outCurrentAxisDirX, outMatrixCurrent);

        retranslateUi(ReorientImageDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), ReorientImageDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(ReorientImageDialog);
    } // setupUi

    void retranslateUi(QDialog *ReorientImageDialog)
    {
        ReorientImageDialog->setWindowTitle(QApplication::translate("ReorientImageDialog", "Reorient Image - ITK-SNAP", 0));
#ifndef QT_NO_TOOLTIP
        inNewRAI->setToolTip(QApplication::translate("ReorientImageDialog", "<html><head/><body><p>Here you can quicky set the image orientation by entering a three-letter code (RAI code) that describes how the image rows, columns and slices map to the anatomical coordinates.</p><p><br/></p><p>For examle, the code <span style=\" font-weight:600;\">ASL</span> signifies that image rows (X) run from <span style=\" font-weight:600;\">A</span>nterior to <span style=\" font-weight:600;\">P</span>osterior, image columns (Y) run from <span style=\" font-weight:600;\">S</span>uperior to <span style=\" font-weight:600;\">I</span>nferior, and image slices (Z) run from <span style=\" font-weight:600;\">L</span>eft to <span style=\" font-weight:600;\">R</span>ight.</p><p><br/></p><p>You can also set the anatomical direction of each image axis separately using the dropdown lists below.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        outInvalidStatus->setText(QApplication::translate("ReorientImageDialog", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        inNewAxisDirY->setToolTip(QApplication::translate("ReorientImageDialog", "<html><head/><body><p>The direction of the image columns (Y axis) in anatomical space.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnReverseY->setToolTip(QApplication::translate("ReorientImageDialog", "Reverse the direction of the axis", 0));
#endif // QT_NO_TOOLTIP
        btnReverseY->setText(QApplication::translate("ReorientImageDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        inNewAxisDirZ->setToolTip(QApplication::translate("ReorientImageDialog", "<html><head/><body><p>The direction of the image slices (Z axis) in anatomical space.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnReverseZ->setToolTip(QApplication::translate("ReorientImageDialog", "Reverse the direction of the axis", 0));
#endif // QT_NO_TOOLTIP
        btnReverseZ->setText(QApplication::translate("ReorientImageDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        inNewAxisDirX->setToolTip(QApplication::translate("ReorientImageDialog", "<html><head/><body><p>The direction of the image rows (X axis) in anatomical space.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnReverseX->setToolTip(QApplication::translate("ReorientImageDialog", "Reverse the direction of the axis", 0));
#endif // QT_NO_TOOLTIP
        btnReverseX->setText(QApplication::translate("ReorientImageDialog", "...", 0));
        label_3->setText(QApplication::translate("ReorientImageDialog", "Voxel Y Axis:", 0));
        label_4->setText(QApplication::translate("ReorientImageDialog", "Voxel Z Axis:", 0));
        QTableWidgetItem *___qtablewidgetitem = outMatrixNew->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem1 = outMatrixNew->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem2 = outMatrixNew->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem3 = outMatrixNew->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem4 = outMatrixNew->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem5 = outMatrixNew->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem6 = outMatrixNew->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem7 = outMatrixNew->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        label_6->setText(QApplication::translate("ReorientImageDialog", "Current Orientation:", 0));
        label_7->setText(QApplication::translate("ReorientImageDialog", "New Orientation:", 0));
        label_5->setText(QApplication::translate("ReorientImageDialog", "<html><head/><body><p>Voxel to World <br/>Matrix (NIFTI):</p></body></html>", 0));
        label_2->setText(QApplication::translate("ReorientImageDialog", "Voxel X Axis:", 0));
        QTableWidgetItem *___qtablewidgetitem8 = outMatrixCurrent->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem9 = outMatrixCurrent->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem10 = outMatrixCurrent->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem11 = outMatrixCurrent->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("ReorientImageDialog", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem12 = outMatrixCurrent->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem13 = outMatrixCurrent->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem14 = outMatrixCurrent->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem15 = outMatrixCurrent->verticalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("ReorientImageDialog", "New Row", 0));
        label_8->setText(QApplication::translate("ReorientImageDialog", "RAI Code:", 0));
        btnApply->setText(QApplication::translate("ReorientImageDialog", "Apply", 0));
        btnClose->setText(QApplication::translate("ReorientImageDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ReorientImageDialog: public Ui_ReorientImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REORIENTIMAGEDIALOG_H
