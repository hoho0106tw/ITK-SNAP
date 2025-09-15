/********************************************************************************
** Form generated from reading UI file 'PaintbrushToolPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTBRUSHTOOLPANEL_H
#define UI_PAINTBRUSHTOOLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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

class Ui_PaintbrushToolPanel
{
public:
    QAction *actionBrushIncrease;
    QAction *actionBrushDecrease;
    QAction *actionGranularityIncrease;
    QAction *actionGranularityDecrease;
    QAction *actionSmoothnessIncrease;
    QAction *actionSmoothnessDecrease;
    QAction *actionBrushStyle;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QWidget *grpBrushStyle;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnSquare;
    QToolButton *btnRound;
    QToolButton *btnWatershed;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *inBrushSizeSpinbox;
    QSlider *inBrushSizeSlider;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QCheckBox *chkVolumetric;
    QCheckBox *chkIsotropic;
    QCheckBox *chkChase;
    QSpacerItem *verticalSpacer_4;
    QWidget *grpAdaptive;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label_5;
    QWidget *widget_5;
    QFormLayout *formLayout;
    QLabel *label_6;
    QDoubleSpinBox *inGranularity;
    QLabel *label_7;
    QDoubleSpinBox *inSmoothness;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PaintbrushToolPanel)
    {
        if (PaintbrushToolPanel->objectName().isEmpty())
            PaintbrushToolPanel->setObjectName(QStringLiteral("PaintbrushToolPanel"));
        PaintbrushToolPanel->resize(179, 442);
        PaintbrushToolPanel->setStyleSheet(QLatin1String("* {\n"
"font-size:12px;\n"
"}\n"
"QSpinBox {\n"
"font-size:11px;\n"
"}"));
        actionBrushIncrease = new QAction(PaintbrushToolPanel);
        actionBrushIncrease->setObjectName(QStringLiteral("actionBrushIncrease"));
        actionBrushDecrease = new QAction(PaintbrushToolPanel);
        actionBrushDecrease->setObjectName(QStringLiteral("actionBrushDecrease"));
        actionGranularityIncrease = new QAction(PaintbrushToolPanel);
        actionGranularityIncrease->setObjectName(QStringLiteral("actionGranularityIncrease"));
        actionGranularityDecrease = new QAction(PaintbrushToolPanel);
        actionGranularityDecrease->setObjectName(QStringLiteral("actionGranularityDecrease"));
        actionSmoothnessIncrease = new QAction(PaintbrushToolPanel);
        actionSmoothnessIncrease->setObjectName(QStringLiteral("actionSmoothnessIncrease"));
        actionSmoothnessDecrease = new QAction(PaintbrushToolPanel);
        actionSmoothnessDecrease->setObjectName(QStringLiteral("actionSmoothnessDecrease"));
        actionBrushStyle = new QAction(PaintbrushToolPanel);
        actionBrushStyle->setObjectName(QStringLiteral("actionBrushStyle"));
        verticalLayout = new QVBoxLayout(PaintbrushToolPanel);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(PaintbrushToolPanel);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        grpBrushStyle = new QWidget(PaintbrushToolPanel);
        grpBrushStyle->setObjectName(QStringLiteral("grpBrushStyle"));
        horizontalLayout = new QHBoxLayout(grpBrushStyle);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 0, 0);
        btnSquare = new QToolButton(grpBrushStyle);
        btnSquare->setObjectName(QStringLiteral("btnSquare"));
        btnSquare->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/brush_shape_square.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSquare->setIcon(icon);
        btnSquare->setCheckable(true);
        btnSquare->setAutoExclusive(true);

        horizontalLayout->addWidget(btnSquare);

        btnRound = new QToolButton(grpBrushStyle);
        btnRound->setObjectName(QStringLiteral("btnRound"));
        btnRound->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/root/brush_shape_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRound->setIcon(icon1);
        btnRound->setCheckable(true);
        btnRound->setAutoExclusive(true);

        horizontalLayout->addWidget(btnRound);

        btnWatershed = new QToolButton(grpBrushStyle);
        btnWatershed->setObjectName(QStringLiteral("btnWatershed"));
        btnWatershed->setMaximumSize(QSize(26, 26));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/root/brush_shape_adaptive.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWatershed->setIcon(icon2);
        btnWatershed->setCheckable(true);
        btnWatershed->setAutoExclusive(true);

        horizontalLayout->addWidget(btnWatershed);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(grpBrushStyle);

        verticalSpacer_2 = new QSpacerItem(4, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(PaintbrushToolPanel);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        widget_2 = new QWidget(PaintbrushToolPanel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 12, 0);
        inBrushSizeSpinbox = new QSpinBox(widget_2);
        inBrushSizeSpinbox->setObjectName(QStringLiteral("inBrushSizeSpinbox"));
        inBrushSizeSpinbox->setMinimumSize(QSize(48, 0));

        horizontalLayout_2->addWidget(inBrushSizeSpinbox);

        inBrushSizeSlider = new QSlider(widget_2);
        inBrushSizeSlider->setObjectName(QStringLiteral("inBrushSizeSlider"));
        inBrushSizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(inBrushSizeSlider);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(4, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label_4 = new QLabel(PaintbrushToolPanel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        widget = new QWidget(PaintbrushToolPanel);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("QCheckBox {\n"
"  padding:0px;\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, 0, 0, 0);
        chkVolumetric = new QCheckBox(widget);
        chkVolumetric->setObjectName(QStringLiteral("chkVolumetric"));

        gridLayout->addWidget(chkVolumetric, 0, 0, 1, 1);

        chkIsotropic = new QCheckBox(widget);
        chkIsotropic->setObjectName(QStringLiteral("chkIsotropic"));

        gridLayout->addWidget(chkIsotropic, 0, 1, 1, 1);

        chkChase = new QCheckBox(widget);
        chkChase->setObjectName(QStringLiteral("chkChase"));

        gridLayout->addWidget(chkChase, 3, 0, 1, 2);


        verticalLayout->addWidget(widget);

        verticalSpacer_4 = new QSpacerItem(4, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        grpAdaptive = new QWidget(PaintbrushToolPanel);
        grpAdaptive->setObjectName(QStringLiteral("grpAdaptive"));
        verticalLayout_3 = new QVBoxLayout(grpAdaptive);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(grpAdaptive);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_5 = new QLabel(grpAdaptive);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        widget_5 = new QWidget(grpAdaptive);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        formLayout = new QFormLayout(widget_5);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(-1, 0, 0, 0);
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        inGranularity = new QDoubleSpinBox(widget_5);
        inGranularity->setObjectName(QStringLiteral("inGranularity"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inGranularity);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        inSmoothness = new QDoubleSpinBox(widget_5);
        inSmoothness->setObjectName(QStringLiteral("inSmoothness"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inSmoothness);


        verticalLayout_3->addWidget(widget_5);


        verticalLayout->addWidget(grpAdaptive);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(inGranularity);
        label_7->setBuddy(inSmoothness);
#endif // QT_NO_SHORTCUT

        retranslateUi(PaintbrushToolPanel);
        QObject::connect(actionBrushIncrease, SIGNAL(triggered()), inBrushSizeSpinbox, SLOT(stepUp()));
        QObject::connect(actionBrushDecrease, SIGNAL(triggered()), inBrushSizeSpinbox, SLOT(stepDown()));
        QObject::connect(actionGranularityIncrease, SIGNAL(triggered()), inGranularity, SLOT(stepUp()));
        QObject::connect(actionGranularityDecrease, SIGNAL(triggered()), inGranularity, SLOT(stepDown()));
        QObject::connect(actionSmoothnessIncrease, SIGNAL(triggered()), inSmoothness, SLOT(stepUp()));
        QObject::connect(actionSmoothnessDecrease, SIGNAL(triggered()), inSmoothness, SLOT(stepDown()));

        QMetaObject::connectSlotsByName(PaintbrushToolPanel);
    } // setupUi

    void retranslateUi(QWidget *PaintbrushToolPanel)
    {
        PaintbrushToolPanel->setWindowTitle(QApplication::translate("PaintbrushToolPanel", "Form", 0));
        actionBrushIncrease->setText(QApplication::translate("PaintbrushToolPanel", "Increase Brush Size", 0));
        actionBrushIncrease->setShortcut(QApplication::translate("PaintbrushToolPanel", "+", 0));
        actionBrushDecrease->setText(QApplication::translate("PaintbrushToolPanel", "Increase Brush Size", 0));
        actionBrushDecrease->setShortcut(QApplication::translate("PaintbrushToolPanel", "-", 0));
        actionGranularityIncrease->setText(QApplication::translate("PaintbrushToolPanel", "GranularityIncrease", 0));
        actionGranularityDecrease->setText(QApplication::translate("PaintbrushToolPanel", "GranularityDecrease", 0));
#ifndef QT_NO_TOOLTIP
        actionGranularityDecrease->setToolTip(QApplication::translate("PaintbrushToolPanel", "GranularityDecrease", 0));
#endif // QT_NO_TOOLTIP
        actionSmoothnessIncrease->setText(QApplication::translate("PaintbrushToolPanel", "SmoothnessIncrease", 0));
        actionSmoothnessIncrease->setShortcut(QApplication::translate("PaintbrushToolPanel", "Alt+Tab", 0));
        actionSmoothnessDecrease->setText(QApplication::translate("PaintbrushToolPanel", "SmoothnessDecrease", 0));
        actionBrushStyle->setText(QApplication::translate("PaintbrushToolPanel", "BrushStyle", 0));
        actionBrushStyle->setShortcut(QApplication::translate("PaintbrushToolPanel", "Ctrl+B", 0));
        label_2->setText(QApplication::translate("PaintbrushToolPanel", "Brush Style:", 0));
#ifndef QT_NO_TOOLTIP
        btnSquare->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Square brush shape (\342\214\230B to cycle)</span></p>", 0));
#endif // QT_NO_TOOLTIP
        btnSquare->setText(QApplication::translate("PaintbrushToolPanel", "square", 0));
        btnSquare->setShortcut(QApplication::translate("PaintbrushToolPanel", "Ctrl+S", 0));
#ifndef QT_NO_TOOLTIP
        btnRound->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Round brush shape (\342\214\230B to cycle)</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnRound->setText(QApplication::translate("PaintbrushToolPanel", "round", 0));
#ifndef QT_NO_TOOLTIP
        btnWatershed->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Adaptive brush (\342\214\230B to cycle)</span></p><p>The brush adjusts itself to follow image boundaries.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnWatershed->setText(QApplication::translate("PaintbrushToolPanel", "adaptive", 0));
        label_3->setText(QApplication::translate("PaintbrushToolPanel", "Brush Size:", 0));
#ifndef QT_NO_TOOLTIP
        inBrushSizeSpinbox->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p>&lt;html&gt;&lt;head/&gt;&lt;body&gt;&lt;p&gt;&lt;span style=&quot; font-weight:600;&quot;&gt;Brush Size (+, - keys)&lt;/span&gt;&lt;/p&gt;&lt;p&gt;Adjust the radius of the paintbrush.&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        inBrushSizeSlider->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Brush Size (+, - keys)</span></p><p>Adjust the radius of the paintbrush.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PaintbrushToolPanel", "Brush Options:", 0));
#ifndef QT_NO_TOOLTIP
        chkVolumetric->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Toggle 3D brush mode (\342\207\247\342\214\230B, V)</span></p><p>When checked, the brush is applied in all three dimensions: a rectangular brush creates a cube in the segmentation, and a round brush creates a sphere.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkVolumetric->setText(QApplication::translate("PaintbrushToolPanel", "3D", 0));
        chkVolumetric->setShortcut(QApplication::translate("PaintbrushToolPanel", "Ctrl+Shift+B, V", 0));
#ifndef QT_NO_TOOLTIP
        chkIsotropic->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Toggle isotropic brush mode (\342\207\247\342\214\230B, I)</span></p><p>This option is relevant for images with anisotropic voxels (voxels with different x,y and z dimensions). When checked, the physical dimensions of the brush are kept as close to equal as possible. When not checked, the brush size is K x K voxels, regardless of the dimensions of the voxel.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkIsotropic->setText(QApplication::translate("PaintbrushToolPanel", "Isotropic", 0));
        chkIsotropic->setShortcut(QApplication::translate("PaintbrushToolPanel", "Ctrl+Shift+B, I", 0));
#ifndef QT_NO_TOOLTIP
        chkChase->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Toggle cursor chasing mode (\342\207\247\342\214\230B, C)</span></p><p>When checked, at the end of each paintbrush stroke, the position of the 3D image cursor is reset to the endpoint of the stroke.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        chkChase->setText(QApplication::translate("PaintbrushToolPanel", "Cursor chases brush", 0));
        chkChase->setShortcut(QApplication::translate("PaintbrushToolPanel", "Ctrl+Shift+B, C", 0));
        label_5->setText(QApplication::translate("PaintbrushToolPanel", "Adaptive Algorithm:", 0));
        label_6->setText(QApplication::translate("PaintbrushToolPanel", "Granularity:", 0));
#ifndef QT_NO_TOOLTIP
        inGranularity->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Adaptive brush granularity (^+,^-)</span></p><p>Lower values of this parameter lead to oversegmentation, while higher values lead to undersegmentation.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("PaintbrushToolPanel", "Smoothness:", 0));
#ifndef QT_NO_TOOLTIP
        inSmoothness->setToolTip(QApplication::translate("PaintbrushToolPanel", "<html><head/><body><p><span style=\" font-weight:600;\">Adaptive brush smoothness (\342\214\245+,\342\214\245-)</span></p><p>Larger values of this parameter produce smoother segments.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PaintbrushToolPanel: public Ui_PaintbrushToolPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTBRUSHTOOLPANEL_H
