/********************************************************************************
** Form generated from reading UI file 'CursorInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURSORINSPECTOR_H
#define UI_CURSORINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CursorInspector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *inCursorX;
    QSpinBox *inCursorY;
    QSpinBox *inCursorZ;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QTableView *tableVoxelUnderCursor;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *outLabelId;
    QLineEdit *outLabelText;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CursorInspector)
    {
        if (CursorInspector->objectName().isEmpty())
            CursorInspector->setObjectName(QStringLiteral("CursorInspector"));
        CursorInspector->resize(256, 527);
        CursorInspector->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QSpinBox {\n"
"font-size: 11px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"font-size: 11px;\n"
"}\n"
"\n"
"QComboBox {\n"
"font-size: 11px;\n"
"}"));
        verticalLayout = new QVBoxLayout(CursorInspector);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(CursorInspector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inCursorX = new QSpinBox(CursorInspector);
        inCursorX->setObjectName(QStringLiteral("inCursorX"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inCursorX->sizePolicy().hasHeightForWidth());
        inCursorX->setSizePolicy(sizePolicy);
        inCursorX->setMaximumSize(QSize(64, 16777215));
        inCursorX->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(inCursorX);

        inCursorY = new QSpinBox(CursorInspector);
        inCursorY->setObjectName(QStringLiteral("inCursorY"));
        sizePolicy.setHeightForWidth(inCursorY->sizePolicy().hasHeightForWidth());
        inCursorY->setSizePolicy(sizePolicy);
        inCursorY->setMinimumSize(QSize(0, 0));
        inCursorY->setMaximumSize(QSize(64, 16777215));
        inCursorY->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(inCursorY);

        inCursorZ = new QSpinBox(CursorInspector);
        inCursorZ->setObjectName(QStringLiteral("inCursorZ"));
        sizePolicy.setHeightForWidth(inCursorZ->sizePolicy().hasHeightForWidth());
        inCursorZ->setSizePolicy(sizePolicy);
        inCursorZ->setMaximumSize(QSize(64, 16777215));
        inCursorZ->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(inCursorZ);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_5 = new QLabel(CursorInspector);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_5);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        tableVoxelUnderCursor = new QTableView(CursorInspector);
        tableVoxelUnderCursor->setObjectName(QStringLiteral("tableVoxelUnderCursor"));
        tableVoxelUnderCursor->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"  font-size:10px;\n"
"}\n"
"\n"
"QTableView:!active\n"
"{\n"
"  selection-background-color: rgb(162, 204, 255);\n"
"}"));
        tableVoxelUnderCursor->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableVoxelUnderCursor->setTabKeyNavigation(false);
        tableVoxelUnderCursor->setSelectionMode(QAbstractItemView::SingleSelection);
        tableVoxelUnderCursor->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableVoxelUnderCursor->setIconSize(QSize(12, 12));
        tableVoxelUnderCursor->setTextElideMode(Qt::ElideRight);
        tableVoxelUnderCursor->horizontalHeader()->setHighlightSections(false);
        tableVoxelUnderCursor->horizontalHeader()->setMinimumSectionSize(48);
        tableVoxelUnderCursor->verticalHeader()->setVisible(false);
        tableVoxelUnderCursor->verticalHeader()->setDefaultSectionSize(16);
        tableVoxelUnderCursor->verticalHeader()->setMinimumSectionSize(16);

        verticalLayout->addWidget(tableVoxelUnderCursor);

        label_6 = new QLabel(CursorInspector);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        outLabelId = new QSpinBox(CursorInspector);
        outLabelId->setObjectName(QStringLiteral("outLabelId"));
        outLabelId->setMaximumSize(QSize(50, 16777215));
        outLabelId->setReadOnly(true);
        outLabelId->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outLabelId->setMaximum(65536);

        horizontalLayout_2->addWidget(outLabelId);

        outLabelText = new QLineEdit(CursorInspector);
        outLabelText->setObjectName(QStringLiteral("outLabelText"));
        outLabelText->setReadOnly(true);

        horizontalLayout_2->addWidget(outLabelText);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(inCursorX, inCursorY);
        QWidget::setTabOrder(inCursorY, inCursorZ);

        retranslateUi(CursorInspector);

        QMetaObject::connectSlotsByName(CursorInspector);
    } // setupUi

    void retranslateUi(QWidget *CursorInspector)
    {
        CursorInspector->setWindowTitle(QApplication::translate("CursorInspector", "Form", 0));
        label->setText(QApplication::translate("CursorInspector", "Cursor position (x,y,z):", 0));
#ifndef QT_NO_TOOLTIP
        inCursorX->setToolTip(QApplication::translate("CursorInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Cursor X coordinate</span></p><p>The X coordinate of the 3D cursor, in the image coordinate system (corresponds to columns of voxels). The first column has index 1 (one-based indexing).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inCursorY->setToolTip(QApplication::translate("CursorInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Cursor Y coordinate</span></p><p>The Y coordinate of the 3D cursor, in the image coordinate system (corresponds to rows of voxels). The first row has index 1 (one-based indexing).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inCursorZ->setToolTip(QApplication::translate("CursorInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Cursor Z coordinate</span></p><p>The Z coordinate of the 3D cursor, in the image coordinate system (corresponds to slices of voxels). The first slice has index 1 (one-based indexing).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("CursorInspector", "Intensity under cursor:", 0));
        label_6->setText(QApplication::translate("CursorInspector", "Label under cursor:", 0));
#ifndef QT_NO_TOOLTIP
        outLabelId->setToolTip(QApplication::translate("CursorInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Index of label under cursor</span></p><p>This shows the numerical value of the segmentation label under the cursor. When you save the segmentation as an image, these values are stored in the voxels of the saved image.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        outLabelText->setToolTip(QApplication::translate("CursorInspector", "<html><head/><body><p><span style=\" font-weight:600;\">Name of label under cursor</span></p><p>This shows the name assigned to the segmentation label under the cursor. Use the label editor to modify label names.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CursorInspector: public Ui_CursorInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURSORINSPECTOR_H
