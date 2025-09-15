/********************************************************************************
** Form generated from reading UI file 'GeneralLayerInspector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALLAYERINSPECTOR_H
#define UI_GENERALLAYERINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <TagListWidget.h>

QT_BEGIN_NAMESPACE

class Ui_GeneralLayerInspector
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpInfo;
    QGridLayout *gridLayout_3;
    QLineEdit *outFilename;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *inNickname;
    QLabel *label_7;
    TagListWidget *tagsWidget;
    QGroupBox *grpSecondary;
    QGridLayout *gridLayout_2;
    QWidget *grpOpacity;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *inOpacityValue;
    QSlider *inOpacity;
    QToolButton *btnVisible;
    QWidget *grpOverlayChecks;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnUnpin;
    QToolButton *btnPin;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QLabel *lblOverlayMode;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_9;
    QLabel *lblOpacity;
    QGroupBox *grpMulticomponent;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *inMode;
    QWidget *grpComponent;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *inComponent;
    QSlider *inComponentSlider;
    QToolButton *btnAnimate;
    QLabel *lblComponent;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GeneralLayerInspector)
    {
        if (GeneralLayerInspector->objectName().isEmpty())
            GeneralLayerInspector->setObjectName(QStringLiteral("GeneralLayerInspector"));
        GeneralLayerInspector->resize(448, 612);
        GeneralLayerInspector->setStyleSheet(QLatin1String("QGroupBox {\n"
"  background-origin: content;\n"
"  margin-top: 15px;\n"
"  font-weight: bold;\n"
"  font-size: 12px;\n"
"  font-family: helvetica;\n"
"  color: rgb(30,30,160);\n"
"  background-color: rgb(237,237,237);\n"
"  padding: 5px;\n"
"  border-radius: 4px;\n"
"  border: 1px solid rgb(130,130,130);\n"
"}\n"
"QGroupBox:!enabled {\n"
"  color: rgb(108,108,108);\n"
"}\n"
"QGroupBox::title {\n"
"  subcontrol-origin: 	margin;\n"
"  subcontrol-position: top left;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(GeneralLayerInspector);
        verticalLayout_2->setSpacing(18);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 18, 6, 6);
        grpInfo = new QGroupBox(GeneralLayerInspector);
        grpInfo->setObjectName(QStringLiteral("grpInfo"));
        grpInfo->setEnabled(true);
        grpInfo->setStyleSheet(QLatin1String("QToolButton {\n"
"font-size:11px;\n"
"}"));
        gridLayout_3 = new QGridLayout(grpInfo);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(8);
        gridLayout_3->setContentsMargins(6, 4, 6, 4);
        outFilename = new QLineEdit(grpInfo);
        outFilename->setObjectName(QStringLiteral("outFilename"));
        outFilename->setReadOnly(true);

        gridLayout_3->addWidget(outFilename, 0, 1, 1, 1);

        label_5 = new QLabel(grpInfo);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(grpInfo);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        inNickname = new QLineEdit(grpInfo);
        inNickname->setObjectName(QStringLiteral("inNickname"));

        gridLayout_3->addWidget(inNickname, 1, 1, 1, 1);

        label_7 = new QLabel(grpInfo);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        tagsWidget = new TagListWidget(grpInfo);
        tagsWidget->setObjectName(QStringLiteral("tagsWidget"));
        tagsWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(tagsWidget, 2, 1, 1, 1);


        verticalLayout_2->addWidget(grpInfo);

        grpSecondary = new QGroupBox(GeneralLayerInspector);
        grpSecondary->setObjectName(QStringLiteral("grpSecondary"));
        grpSecondary->setEnabled(true);
        grpSecondary->setStyleSheet(QLatin1String("QToolButton {\n"
"font-size:11px;\n"
"}"));
        gridLayout_2 = new QGridLayout(grpSecondary);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(8);
        gridLayout_2->setContentsMargins(6, 4, 6, 4);
        grpOpacity = new QWidget(grpSecondary);
        grpOpacity->setObjectName(QStringLiteral("grpOpacity"));
        grpOpacity->setStyleSheet(QStringLiteral("font-size:12pt;"));
        horizontalLayout_4 = new QHBoxLayout(grpOpacity);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        inOpacityValue = new QSpinBox(grpOpacity);
        inOpacityValue->setObjectName(QStringLiteral("inOpacityValue"));
        inOpacityValue->setMinimumSize(QSize(80, 0));
        inOpacityValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        inOpacityValue->setMaximum(100);

        horizontalLayout_4->addWidget(inOpacityValue);

        inOpacity = new QSlider(grpOpacity);
        inOpacity->setObjectName(QStringLiteral("inOpacity"));
        inOpacity->setMaximum(100);
        inOpacity->setOrientation(Qt::Horizontal);
        inOpacity->setTickPosition(QSlider::NoTicks);
        inOpacity->setTickInterval(25);

        horizontalLayout_4->addWidget(inOpacity);

        btnVisible = new QToolButton(grpOpacity);
        btnVisible->setObjectName(QStringLiteral("btnVisible"));
        btnVisible->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/icons8_invisible_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/root/icons8_visible_12.png"), QSize(), QIcon::Normal, QIcon::On);
        btnVisible->setIcon(icon);
        btnVisible->setIconSize(QSize(12, 12));
        btnVisible->setCheckable(true);
        btnVisible->setChecked(true);
        btnVisible->setAutoRaise(true);

        horizontalLayout_4->addWidget(btnVisible);


        gridLayout_2->addWidget(grpOpacity, 1, 1, 1, 1);

        grpOverlayChecks = new QWidget(grpSecondary);
        grpOverlayChecks->setObjectName(QStringLiteral("grpOverlayChecks"));
        grpOverlayChecks->setStyleSheet(QStringLiteral(""));
        horizontalLayout_5 = new QHBoxLayout(grpOverlayChecks);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnUnpin = new QToolButton(grpOverlayChecks);
        btnUnpin->setObjectName(QStringLiteral("btnUnpin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnUnpin->sizePolicy().hasHeightForWidth());
        btnUnpin->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/icons8_unpin_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUnpin->setIcon(icon1);
        btnUnpin->setIconSize(QSize(12, 12));
        btnUnpin->setCheckable(true);
        btnUnpin->setChecked(true);
        btnUnpin->setAutoExclusive(true);
        btnUnpin->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_5->addWidget(btnUnpin);

        btnPin = new QToolButton(grpOverlayChecks);
        btnPin->setObjectName(QStringLiteral("btnPin"));
        sizePolicy.setHeightForWidth(btnPin->sizePolicy().hasHeightForWidth());
        btnPin->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/icons8_pin_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPin->setIcon(icon2);
        btnPin->setIconSize(QSize(12, 12));
        btnPin->setCheckable(true);
        btnPin->setAutoExclusive(true);
        btnPin->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_5->addWidget(btnPin);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        gridLayout_2->addWidget(grpOverlayChecks, 0, 1, 1, 1);

        widget = new QWidget(grpSecondary);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUp = new QToolButton(widget);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/root/icons8_up_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUp->setIcon(icon3);
        btnUp->setIconSize(QSize(12, 12));
        btnUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnUp);

        btnDown = new QToolButton(widget);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/root/icons8_down_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDown->setIcon(icon4);
        btnDown->setIconSize(QSize(12, 12));
        btnDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnDown, 0, Qt::AlignRight);


        gridLayout_2->addWidget(widget, 3, 1, 1, 1);

        lblOverlayMode = new QLabel(grpSecondary);
        lblOverlayMode->setObjectName(QStringLiteral("lblOverlayMode"));

        gridLayout_2->addWidget(lblOverlayMode, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        label_9 = new QLabel(grpSecondary);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        lblOpacity = new QLabel(grpSecondary);
        lblOpacity->setObjectName(QStringLiteral("lblOpacity"));
        lblOpacity->setStyleSheet(QStringLiteral(""));
        lblOpacity->setWordWrap(true);

        gridLayout_2->addWidget(lblOpacity, 1, 0, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 105);

        verticalLayout_2->addWidget(grpSecondary);

        grpMulticomponent = new QGroupBox(GeneralLayerInspector);
        grpMulticomponent->setObjectName(QStringLiteral("grpMulticomponent"));
        gridLayout = new QGridLayout(grpMulticomponent);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(6, 4, 6, 4);
        label = new QLabel(grpMulticomponent);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inMode = new QComboBox(grpMulticomponent);
        inMode->setObjectName(QStringLiteral("inMode"));

        gridLayout->addWidget(inMode, 0, 1, 1, 1);

        grpComponent = new QWidget(grpMulticomponent);
        grpComponent->setObjectName(QStringLiteral("grpComponent"));
        grpComponent->setMinimumSize(QSize(0, 20));
        grpComponent->setStyleSheet(QStringLiteral("font-size:12pt;"));
        horizontalLayout_2 = new QHBoxLayout(grpComponent);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        inComponent = new QSpinBox(grpComponent);
        inComponent->setObjectName(QStringLiteral("inComponent"));
        inComponent->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(inComponent);

        inComponentSlider = new QSlider(grpComponent);
        inComponentSlider->setObjectName(QStringLiteral("inComponentSlider"));
        inComponentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(inComponentSlider);

        btnAnimate = new QToolButton(grpComponent);
        btnAnimate->setObjectName(QStringLiteral("btnAnimate"));
        btnAnimate->setMaximumSize(QSize(20, 20));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/root/icons8_film_reel_12.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAnimate->setIcon(icon5);
        btnAnimate->setIconSize(QSize(12, 12));
        btnAnimate->setCheckable(true);
        btnAnimate->setChecked(true);
        btnAnimate->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnAnimate);


        gridLayout->addWidget(grpComponent, 1, 1, 1, 1);

        lblComponent = new QLabel(grpMulticomponent);
        lblComponent->setObjectName(QStringLiteral("lblComponent"));

        gridLayout->addWidget(lblComponent, 1, 0, 1, 1);

        gridLayout->setColumnMinimumWidth(0, 105);

        verticalLayout_2->addWidget(grpMulticomponent);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(outFilename, inNickname);
        QWidget::setTabOrder(inNickname, tagsWidget);
        QWidget::setTabOrder(tagsWidget, btnUnpin);
        QWidget::setTabOrder(btnUnpin, btnPin);
        QWidget::setTabOrder(btnPin, inOpacityValue);
        QWidget::setTabOrder(inOpacityValue, inOpacity);
        QWidget::setTabOrder(inOpacity, btnVisible);
        QWidget::setTabOrder(btnVisible, btnUp);
        QWidget::setTabOrder(btnUp, btnDown);
        QWidget::setTabOrder(btnDown, inMode);
        QWidget::setTabOrder(inMode, inComponent);
        QWidget::setTabOrder(inComponent, inComponentSlider);
        QWidget::setTabOrder(inComponentSlider, btnAnimate);

        retranslateUi(GeneralLayerInspector);

        QMetaObject::connectSlotsByName(GeneralLayerInspector);
    } // setupUi

    void retranslateUi(QWidget *GeneralLayerInspector)
    {
        GeneralLayerInspector->setWindowTitle(QApplication::translate("GeneralLayerInspector", "Form", 0));
        grpInfo->setTitle(QApplication::translate("GeneralLayerInspector", "General Image Layer Properties:", 0));
#ifndef QT_NO_TOOLTIP
        outFilename->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>This is the filename from which the image was loaded. This is a read-only field.  However, you can save the image to a different file using this dialog.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("GeneralLayerInspector", "Filename:", 0));
        label_6->setText(QApplication::translate("GeneralLayerInspector", "Nickname:", 0));
#ifndef QT_NO_TOOLTIP
        inNickname->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Edit this field to assign a short nickname to this image. This information can be saved in the workspace. </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("GeneralLayerInspector", "Tags:", 0));
#ifndef QT_NO_TOOLTIP
        tagsWidget->setToolTip(QApplication::translate("GeneralLayerInspector", "One or more textual tags can be assigned to an image layer. Tags are not used directly by ITK-SNAP but may be used to inform other software of the meaning of different layers. Type in words separated by commas to create tags. ", 0));
#endif // QT_NO_TOOLTIP
        grpSecondary->setTitle(QApplication::translate("GeneralLayerInspector", "How to Display this Image Layer:", 0));
#ifndef QT_NO_TOOLTIP
        inOpacityValue->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Adjust the opacity of the image when it is displayed as a semi-transparent overlay.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        inOpacityValue->setSuffix(QApplication::translate("GeneralLayerInspector", "%", 0));
#ifndef QT_NO_TOOLTIP
        inOpacity->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Adjust the opacity of the image when it is displayed as a semi-transparent overlay.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnVisible->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Toggle the visibility of the image when it is displayed as a semi-transparent overlay.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnVisible->setText(QApplication::translate("GeneralLayerInspector", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnUnpin->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p><span style=\" font-size:11pt;\">Display this image side by side with the main image.</span></p><p><br/></p><p><span style=\" font-size:11pt;\">This optoin is best suited for anatomical images, e.g., when displaying T1-weighted and T2-weighted MRI scans of the same subject.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnUnpin->setText(QApplication::translate("GeneralLayerInspector", "Separate image", 0));
#ifndef QT_NO_TOOLTIP
        btnPin->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p><span style=\" font-size:11pt;\">Display this image as a semi-transparent overlay over other images.</span></p><p><br/></p><p><span style=\" font-size:11pt;\">This option is best for statistical maps. You can control the overall opacity of the overlay in this window, or customize the color map for partial opacity effects. </span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnPin->setText(QApplication::translate("GeneralLayerInspector", "Semi-transparent overlay", 0));
#ifndef QT_NO_TOOLTIP
        btnUp->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p><span style=\" font-size:11pt;\">Place this image layer earlier in the workspace. This affects the order in which the layers are layed out and rendered. The order is most important when more than one semi-transparent overlay is loaded.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnUp->setText(QApplication::translate("GeneralLayerInspector", "Move up", 0));
#ifndef QT_NO_TOOLTIP
        btnDown->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p><span style=\" font-size:11pt;\">Place this image layer later in the workspace. This affects the order in which the layers are layed out and rendered. The order is most important when more than one semi-transparent overlay is loaded.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnDown->setText(QApplication::translate("GeneralLayerInspector", "Move down", 0));
        lblOverlayMode->setText(QApplication::translate("GeneralLayerInspector", "Display as:", 0));
        label_9->setText(QApplication::translate("GeneralLayerInspector", "Display order:", 0));
        lblOpacity->setText(QApplication::translate("GeneralLayerInspector", "Overlay opacity:", 0));
        grpMulticomponent->setTitle(QApplication::translate("GeneralLayerInspector", "How to Visualize Multiple Image Components:", 0));
        label->setText(QApplication::translate("GeneralLayerInspector", "Display mode:", 0));
#ifndef QT_NO_TOOLTIP
        inMode->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Multi-component images have more than one value for each voxel. These values may represent measurements taken at different time points, different chromatic components, etc. ITK-SNAP offers multiple ways to visualize this multi-dimensional information. You can choose to visualize just one component, or a summary function of the components, such as magnitude, average, or maximum. In the special case of three-component images, the components can be rendered as red, green and blue channels (RGB).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inComponent->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Select the image component to visualize.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inComponentSlider->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Select the image component to visualize.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAnimate->setToolTip(QApplication::translate("GeneralLayerInspector", "<html><head/><body><p>Toggle animation mode.</p><p>When enabled, the display will automatically loop over the image components at one-second intervals.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnAnimate->setText(QApplication::translate("GeneralLayerInspector", "...", 0));
        lblComponent->setText(QApplication::translate("GeneralLayerInspector", "Component:", 0));
    } // retranslateUi

};

namespace Ui {
    class GeneralLayerInspector: public Ui_GeneralLayerInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALLAYERINSPECTOR_H
