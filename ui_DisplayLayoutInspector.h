/********************************************************************************
** Form generated from reading UI file 'DisplayLayoutInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYLAYOUTINSPECTOR_H
#define UI_DISPLAYLAYOUTINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayLayoutInspector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *grpDisplayLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnFourViews;
    QToolButton *btnAxial;
    QToolButton *btnCoronal;
    QToolButton *btnSagittal;
    QToolButton *btn3D;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QWidget *grpLayerLayout;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnTile;
    QToolButton *btnStack;
    QLabel *label_3;
    QWidget *grpThumbnailSize;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *inThumbSize;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DisplayLayoutInspector)
    {
        if (DisplayLayoutInspector->objectName().isEmpty())
            DisplayLayoutInspector->setObjectName(QStringLiteral("DisplayLayoutInspector"));
        DisplayLayoutInspector->resize(172, 498);
        DisplayLayoutInspector->setStyleSheet(QLatin1String("* {\n"
"font-size: 12px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(DisplayLayoutInspector);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DisplayLayoutInspector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        grpDisplayLayout = new QWidget(DisplayLayoutInspector);
        grpDisplayLayout->setObjectName(QStringLiteral("grpDisplayLayout"));
        horizontalLayout = new QHBoxLayout(grpDisplayLayout);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(16, 0, 0, 4);
        btnFourViews = new QToolButton(grpDisplayLayout);
        btnFourViews->setObjectName(QStringLiteral("btnFourViews"));
        btnFourViews->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/dl_fourviews.png"), QSize(), QIcon::Normal, QIcon::On);
        btnFourViews->setIcon(icon);
        btnFourViews->setCheckable(true);
        btnFourViews->setAutoExclusive(true);

        horizontalLayout->addWidget(btnFourViews);

        btnAxial = new QToolButton(grpDisplayLayout);
        btnAxial->setObjectName(QStringLiteral("btnAxial"));
        btnAxial->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/dl_axial.png"), QSize(), QIcon::Normal, QIcon::On);
        btnAxial->setIcon(icon1);
        btnAxial->setCheckable(true);
        btnAxial->setAutoExclusive(true);

        horizontalLayout->addWidget(btnAxial);

        btnCoronal = new QToolButton(grpDisplayLayout);
        btnCoronal->setObjectName(QStringLiteral("btnCoronal"));
        btnCoronal->setMaximumSize(QSize(26, 26));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/dl_coronal.png"), QSize(), QIcon::Normal, QIcon::On);
        btnCoronal->setIcon(icon2);
        btnCoronal->setCheckable(true);
        btnCoronal->setAutoExclusive(true);

        horizontalLayout->addWidget(btnCoronal);

        btnSagittal = new QToolButton(grpDisplayLayout);
        btnSagittal->setObjectName(QStringLiteral("btnSagittal"));
        btnSagittal->setMaximumSize(QSize(26, 26));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/dl_sagittal.png"), QSize(), QIcon::Normal, QIcon::On);
        btnSagittal->setIcon(icon3);
        btnSagittal->setCheckable(true);
        btnSagittal->setAutoExclusive(true);

        horizontalLayout->addWidget(btnSagittal);

        btn3D = new QToolButton(grpDisplayLayout);
        btn3D->setObjectName(QStringLiteral("btn3D"));
        btn3D->setMaximumSize(QSize(26, 26));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/dl_3d.png"), QSize(), QIcon::Normal, QIcon::On);
        btn3D->setIcon(icon4);
        btn3D->setCheckable(true);
        btn3D->setAutoExclusive(true);

        horizontalLayout->addWidget(btn3D);

        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(grpDisplayLayout);

        label_2 = new QLabel(DisplayLayoutInspector);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_2);

        grpLayerLayout = new QWidget(DisplayLayoutInspector);
        grpLayerLayout->setObjectName(QStringLiteral("grpLayerLayout"));
        grpLayerLayout->setFont(font);
        verticalLayout_2 = new QVBoxLayout(grpLayerLayout);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(16, 0, 0, 0);
        btnTile = new QToolButton(grpLayerLayout);
        btnTile->setObjectName(QStringLiteral("btnTile"));
        btnTile->setMinimumSize(QSize(140, 0));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/layout_tile_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTile->setIcon(icon5);
        btnTile->setCheckable(true);
        btnTile->setAutoExclusive(true);
        btnTile->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnTile);

        btnStack = new QToolButton(grpLayerLayout);
        btnStack->setObjectName(QStringLiteral("btnStack"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStack->sizePolicy().hasHeightForWidth());
        btnStack->setSizePolicy(sizePolicy);
        btnStack->setMinimumSize(QSize(140, 0));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/layout_thumb_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStack->setIcon(icon6);
        btnStack->setCheckable(true);
        btnStack->setAutoExclusive(true);
        btnStack->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(btnStack);


        verticalLayout->addWidget(grpLayerLayout);

        label_3 = new QLabel(DisplayLayoutInspector);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_3);

        grpThumbnailSize = new QWidget(DisplayLayoutInspector);
        grpThumbnailSize->setObjectName(QStringLiteral("grpThumbnailSize"));
        horizontalLayout_2 = new QHBoxLayout(grpThumbnailSize);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, 0, 0, 0);
        inThumbSize = new QDoubleSpinBox(grpThumbnailSize);
        inThumbSize->setObjectName(QStringLiteral("inThumbSize"));

        horizontalLayout_2->addWidget(inThumbSize);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(grpThumbnailSize);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(btnFourViews, btnAxial);
        QWidget::setTabOrder(btnAxial, btnCoronal);
        QWidget::setTabOrder(btnCoronal, btnSagittal);

        retranslateUi(DisplayLayoutInspector);

        QMetaObject::connectSlotsByName(DisplayLayoutInspector);
    } // setupUi

    void retranslateUi(QWidget *DisplayLayoutInspector)
    {
        DisplayLayoutInspector->setWindowTitle(QApplication::translate("DisplayLayoutInspector", "Form", 0));
        label->setText(QApplication::translate("DisplayLayoutInspector", "Display Layout:", 0));
#ifndef QT_NO_TOOLTIP
        btnFourViews->setToolTip(QApplication::translate("DisplayLayoutInspector", "<html><head/><body><p>Show three orthogonal slice views and the 3D view.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnFourViews->setText(QApplication::translate("DisplayLayoutInspector", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAxial->setToolTip(QApplication::translate("DisplayLayoutInspector", "Only show the axial view.", 0));
#endif // QT_NO_TOOLTIP
        btnAxial->setText(QApplication::translate("DisplayLayoutInspector", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnCoronal->setToolTip(QApplication::translate("DisplayLayoutInspector", "Only show the coronal view.", 0));
#endif // QT_NO_TOOLTIP
        btnCoronal->setText(QApplication::translate("DisplayLayoutInspector", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnSagittal->setToolTip(QApplication::translate("DisplayLayoutInspector", "Only show the sagittal view.", 0));
#endif // QT_NO_TOOLTIP
        btnSagittal->setText(QApplication::translate("DisplayLayoutInspector", "...", 0));
#ifndef QT_NO_TOOLTIP
        btn3D->setToolTip(QApplication::translate("DisplayLayoutInspector", "Only show the 3D view.", 0));
#endif // QT_NO_TOOLTIP
        btn3D->setText(QApplication::translate("DisplayLayoutInspector", "...", 0));
        label_2->setText(QApplication::translate("DisplayLayoutInspector", "Multiple Image Layers:", 0));
#ifndef QT_NO_TOOLTIP
        btnTile->setToolTip(QApplication::translate("DisplayLayoutInspector", "<html><head/><body><p>In <span style=\" font-weight:600;\">tiled</span> layout, multiple image layers are shown side by side.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnTile->setText(QApplication::translate("DisplayLayoutInspector", "Tiled layout", 0));
#ifndef QT_NO_TOOLTIP
        btnStack->setToolTip(QApplication::translate("DisplayLayoutInspector", "<html><head/><body><p>In <span style=\" font-weight:600;\">thumbnail</span> layout, one image layer occupies most of the available screen space, and other loaded image layers are shown as thumbnails.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnStack->setText(QApplication::translate("DisplayLayoutInspector", "Thumbnail layout", 0));
        label_3->setText(QApplication::translate("DisplayLayoutInspector", "Thumbnail Size:", 0));
#ifndef QT_NO_TOOLTIP
        inThumbSize->setToolTip(QApplication::translate("DisplayLayoutInspector", "<html><head/><body><p>Set the size of the thumbnails relative to window size.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DisplayLayoutInspector: public Ui_DisplayLayoutInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYLAYOUTINSPECTOR_H
