/********************************************************************************
** Form generated from reading UI file 'LayerInspectorRowDelegate.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERINSPECTORROWDELEGATE_H
#define UI_LAYERINSPECTORROWDELEGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerInspectorRowDelegate
{
public:
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionAutoContrast;
    QAction *actionTextureFeatures;
    QAction *actionPin_layer;
    QAction *actionUnpin_layer;
    QAction *actionContrast_Inspector;
    QAction *actionColor_Map_Editor;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *outLayerNickname;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnSticky;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnVisible;
    QSlider *inLayerOpacity;
    QSpacerItem *horizontalSpacer;
    QLabel *outComponent;
    QToolButton *btnMenu;

    void setupUi(QWidget *LayerInspectorRowDelegate)
    {
        if (LayerInspectorRowDelegate->objectName().isEmpty())
            LayerInspectorRowDelegate->setObjectName(QStringLiteral("LayerInspectorRowDelegate"));
        LayerInspectorRowDelegate->resize(200, 57);
        LayerInspectorRowDelegate->setMaximumSize(QSize(200, 16777215));
        LayerInspectorRowDelegate->setStyleSheet(QLatin1String("QToolButton::checked\n"
"{\n"
"	border: none;\n"
"	background-color: rgba(0,0,0,0);\n"
"};\n"
"	\n"
"QToolButton::hovered\n"
"{\n"
"	border: 4px solid gray;\n"
"};\n"
"\n"
"QMenu::item \n"
"{\n"
"	font-size:9px;\n"
"}\n"
""));
        actionSave = new QAction(LayerInspectorRowDelegate);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/save_22.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionClose = new QAction(LayerInspectorRowDelegate);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/icons8_close_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon1);
        actionAutoContrast = new QAction(LayerInspectorRowDelegate);
        actionAutoContrast->setObjectName(QStringLiteral("actionAutoContrast"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/icons8_fantasy_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutoContrast->setIcon(icon2);
        actionTextureFeatures = new QAction(LayerInspectorRowDelegate);
        actionTextureFeatures->setObjectName(QStringLiteral("actionTextureFeatures"));
        actionPin_layer = new QAction(LayerInspectorRowDelegate);
        actionPin_layer->setObjectName(QStringLiteral("actionPin_layer"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/icons8_pin_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/root/icons8_pin_16.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPin_layer->setIcon(icon3);
        actionUnpin_layer = new QAction(LayerInspectorRowDelegate);
        actionUnpin_layer->setObjectName(QStringLiteral("actionUnpin_layer"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/icons8_unpin_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnpin_layer->setIcon(icon4);
        actionContrast_Inspector = new QAction(LayerInspectorRowDelegate);
        actionContrast_Inspector->setObjectName(QStringLiteral("actionContrast_Inspector"));
        actionColor_Map_Editor = new QAction(LayerInspectorRowDelegate);
        actionColor_Map_Editor->setObjectName(QStringLiteral("actionColor_Map_Editor"));
        horizontalLayout = new QHBoxLayout(LayerInspectorRowDelegate);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(LayerInspectorRowDelegate);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setAutoFillBackground(true);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        outLayerNickname = new QLabel(frame);
        outLayerNickname->setObjectName(QStringLiteral("outLayerNickname"));
        outLayerNickname->setMaximumSize(QSize(158, 16777215));
        QFont font;
        outLayerNickname->setFont(font);
        outLayerNickname->setAutoFillBackground(false);
        outLayerNickname->setStyleSheet(QStringLiteral("font-size:12px;"));

        horizontalLayout_4->addWidget(outLayerNickname, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        btnSticky = new QToolButton(frame);
        btnSticky->setObjectName(QStringLiteral("btnSticky"));
        btnSticky->setMaximumSize(QSize(20, 20));
        btnSticky->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/icons8_unpin_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/root/icons8_pin_12.png"), QSize(), QIcon::Normal, QIcon::On);
        btnSticky->setIcon(icon5);
        btnSticky->setIconSize(QSize(12, 12));
        btnSticky->setCheckable(true);
        btnSticky->setChecked(false);
        btnSticky->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnSticky);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnVisible = new QToolButton(frame);
        btnVisible->setObjectName(QStringLiteral("btnVisible"));
        btnVisible->setMaximumSize(QSize(20, 20));
        btnVisible->setAutoFillBackground(false);
        btnVisible->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/root/icons8_invisible_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/root/icons8_visible_12.png"), QSize(), QIcon::Normal, QIcon::On);
        btnVisible->setIcon(icon6);
        btnVisible->setIconSize(QSize(12, 12));
        btnVisible->setCheckable(true);
        btnVisible->setChecked(true);
        btnVisible->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnVisible);

        inLayerOpacity = new QSlider(frame);
        inLayerOpacity->setObjectName(QStringLiteral("inLayerOpacity"));
        inLayerOpacity->setMinimumSize(QSize(64, 0));
        inLayerOpacity->setMaximumSize(QSize(64, 20));
        inLayerOpacity->setAutoFillBackground(false);
        inLayerOpacity->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 6px;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"    stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #777;\n"
"height: 6px;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"height: 6px;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #eee, stop:1 #ccc);\n"
"border: 1px solid #777;\n"
"width: 13px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"    stop:0 #fff, stop:1 #ddd);\n"
"border: 1px solid #444;\n"
"border-radius: 3px;\n"
"}\n"
""
                        "\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        inLayerOpacity->setSliderPosition(55);
        inLayerOpacity->setOrientation(Qt::Horizontal);
        inLayerOpacity->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(inLayerOpacity);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        outComponent = new QLabel(frame);
        outComponent->setObjectName(QStringLiteral("outComponent"));
        outComponent->setMaximumSize(QSize(16777215, 20));
        outComponent->setStyleSheet(QLatin1String("font-size:11px;\n"
"color: rgb(120, 120, 120)"));

        horizontalLayout_2->addWidget(outComponent);

        btnMenu = new QToolButton(frame);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy);
        btnMenu->setMaximumSize(QSize(16777215, 20));
        btnMenu->setAutoFillBackground(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/root/context_gray_10.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenu->setIcon(icon7);
        btnMenu->setIconSize(QSize(10, 10));
        btnMenu->setCheckable(false);
        btnMenu->setChecked(false);
        btnMenu->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnMenu);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(frame);


        retranslateUi(LayerInspectorRowDelegate);

        QMetaObject::connectSlotsByName(LayerInspectorRowDelegate);
    } // setupUi

    void retranslateUi(QWidget *LayerInspectorRowDelegate)
    {
        LayerInspectorRowDelegate->setWindowTitle(QApplication::translate("LayerInspectorRowDelegate", "Form", 0));
        actionSave->setText(QApplication::translate("LayerInspectorRowDelegate", "Save...", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Save Image to File", 0));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("LayerInspectorRowDelegate", "Close", 0));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Close (unload) the selected image layer", 0));
#endif // QT_NO_TOOLTIP
        actionAutoContrast->setText(QApplication::translate("LayerInspectorRowDelegate", "Auto Adjust Contrast", 0));
#ifndef QT_NO_TOOLTIP
        actionAutoContrast->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Adjust contrast of the image layer automatically for optimal visualization", 0));
#endif // QT_NO_TOOLTIP
        actionTextureFeatures->setText(QApplication::translate("LayerInspectorRowDelegate", "Generate texture features", 0));
#ifndef QT_NO_TOOLTIP
        actionTextureFeatures->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Create texture features derived from this image", 0));
#endif // QT_NO_TOOLTIP
        actionPin_layer->setText(QApplication::translate("LayerInspectorRowDelegate", "Display as overlay", 0));
#ifndef QT_NO_TOOLTIP
        actionPin_layer->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Display the layer as a semi-transparent overlay on top of other image layers", 0));
#endif // QT_NO_TOOLTIP
        actionUnpin_layer->setText(QApplication::translate("LayerInspectorRowDelegate", "Display as base layer", 0));
#ifndef QT_NO_TOOLTIP
        actionUnpin_layer->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Display the layer side by side with other layers", 0));
#endif // QT_NO_TOOLTIP
        actionContrast_Inspector->setText(QApplication::translate("LayerInspectorRowDelegate", "Contrast Inspector ...", 0));
#ifndef QT_NO_TOOLTIP
        actionContrast_Inspector->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Open the contrast inspector to adjust image contrast for this layer", 0));
#endif // QT_NO_TOOLTIP
        actionColor_Map_Editor->setText(QApplication::translate("LayerInspectorRowDelegate", "Color Map Inspector ...", 0));
#ifndef QT_NO_TOOLTIP
        actionColor_Map_Editor->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "Open the color map editor for this layer", 0));
#endif // QT_NO_TOOLTIP
        outLayerNickname->setText(QApplication::translate("LayerInspectorRowDelegate", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        btnSticky->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "<html><head/><body><p>&quot;Pin&quot; or &quot;unpin&quot; the image layer. When an image layer is pinned, it is rendered as an overlay on top of other images. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnSticky->setText(QApplication::translate("LayerInspectorRowDelegate", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnVisible->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "<html><head/><body><p>Toggle between making the image layer visible or invisible.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVisible->setText(QApplication::translate("LayerInspectorRowDelegate", "...", 0));
#ifndef QT_NO_TOOLTIP
        inLayerOpacity->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "<html><head/><body><p>Change the opacity of the image layer.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        outComponent->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "<html><head/><body><p>Indicates what aspect of a multi-component image layer is displayed (e.g., a particular component, magnitude of components, etc.).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        outComponent->setText(QApplication::translate("LayerInspectorRowDelegate", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("LayerInspectorRowDelegate", "<html><head/><body><p>Show a context menu of commands for this image layer.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QApplication::translate("LayerInspectorRowDelegate", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerInspectorRowDelegate: public Ui_LayerInspectorRowDelegate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERINSPECTORROWDELEGATE_H
