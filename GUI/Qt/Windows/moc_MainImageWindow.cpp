/****************************************************************************
** Meta object code from reading C++ file 'MainImageWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../itk-snap-src/GUI/Qt/Windows/MainImageWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainImageWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainImageWindow_t {
    QByteArrayData data[106];
    char stringdata0[3375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainImageWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainImageWindow_t qt_meta_stringdata_MainImageWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MainImageWindow"
QT_MOC_LITERAL(1, 16, 25), // "LoadRecentActionTriggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 32), // "LoadRecentOverlayActionTriggered"
QT_MOC_LITERAL(4, 76, 37), // "LoadRecentSegmentationActionT..."
QT_MOC_LITERAL(5, 114, 44), // "LoadAnotherRecentSegmentation..."
QT_MOC_LITERAL(6, 159, 32), // "LoadRecentProjectActionTriggered"
QT_MOC_LITERAL(7, 192, 31), // "LoadAnotherDicomActionTriggered"
QT_MOC_LITERAL(8, 224, 21), // "AdjustMarginsForDocks"
QT_MOC_LITERAL(9, 246, 13), // "onModelUpdate"
QT_MOC_LITERAL(10, 260, 11), // "EventBucket"
QT_MOC_LITERAL(11, 272, 1), // "b"
QT_MOC_LITERAL(12, 274, 29), // "externalStyleSheetFileChanged"
QT_MOC_LITERAL(13, 304, 4), // "file"
QT_MOC_LITERAL(14, 309, 13), // "LoadMainImage"
QT_MOC_LITERAL(15, 323, 11), // "LoadProject"
QT_MOC_LITERAL(16, 335, 24), // "LoadProjectInNewInstance"
QT_MOC_LITERAL(17, 360, 15), // "onActiveChanged"
QT_MOC_LITERAL(18, 376, 23), // "on_actionQuit_triggered"
QT_MOC_LITERAL(19, 400, 34), // "on_actionLoad_from_Image_trig..."
QT_MOC_LITERAL(20, 435, 33), // "on_actionImage_Contrast_trigg..."
QT_MOC_LITERAL(21, 469, 31), // "on_actionLabel_Editor_triggered"
QT_MOC_LITERAL(22, 501, 25), // "onRightDockDialogFinished"
QT_MOC_LITERAL(23, 527, 29), // "on_actionUnload_All_triggered"
QT_MOC_LITERAL(24, 557, 33), // "on_actionReorient_Image_trigg..."
QT_MOC_LITERAL(25, 591, 38), // "on_actionZoomToFitInAllViews_..."
QT_MOC_LITERAL(26, 630, 35), // "on_actionCenter_on_Cursor_tri..."
QT_MOC_LITERAL(27, 666, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(28, 690, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(29, 714, 27), // "on_actionOpenMain_triggered"
QT_MOC_LITERAL(30, 742, 30), // "on_actionAdd_Overlay_triggered"
QT_MOC_LITERAL(31, 773, 26), // "on_actionSSAxial_triggered"
QT_MOC_LITERAL(32, 800, 28), // "on_actionSSCoronal_triggered"
QT_MOC_LITERAL(33, 829, 29), // "on_actionSSSagittal_triggered"
QT_MOC_LITERAL(34, 859, 46), // "on_actionSegmentationIncrease..."
QT_MOC_LITERAL(35, 906, 46), // "on_actionSegmentationDecrease..."
QT_MOC_LITERAL(36, 953, 37), // "on_actionSegmentationToggle_t..."
QT_MOC_LITERAL(37, 991, 29), // "on_actionLoadLabels_triggered"
QT_MOC_LITERAL(38, 1021, 29), // "on_actionSaveLabels_triggered"
QT_MOC_LITERAL(39, 1051, 39), // "on_actionVolumesAndStatistics..."
QT_MOC_LITERAL(40, 1091, 35), // "on_actionSaveSegmentation_tri..."
QT_MOC_LITERAL(41, 1127, 37), // "on_actionSaveSegmentationAs_t..."
QT_MOC_LITERAL(42, 1165, 45), // "on_actionOverlayVisibilityTog..."
QT_MOC_LITERAL(43, 1211, 47), // "on_actionOverlayVisibilityInc..."
QT_MOC_LITERAL(44, 1259, 47), // "on_actionOverlayVisibilityDec..."
QT_MOC_LITERAL(45, 1307, 33), // "on_actionLayerInspector_trigg..."
QT_MOC_LITERAL(46, 1341, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(47, 1366, 35), // "on_actionColor_Map_Editor_tri..."
QT_MOC_LITERAL(48, 1402, 36), // "on_actionImage_Information_tr..."
QT_MOC_LITERAL(49, 1439, 38), // "on_actionUnload_Last_Overlay_..."
QT_MOC_LITERAL(50, 1478, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(51, 1503, 31), // "on_actionSave_as_Mesh_triggered"
QT_MOC_LITERAL(52, 1535, 27), // "on_actionSaveMain_triggered"
QT_MOC_LITERAL(53, 1563, 28), // "on_actionSaveSpeed_triggered"
QT_MOC_LITERAL(54, 1592, 31), // "on_actionSaveLevelSet_triggered"
QT_MOC_LITERAL(55, 1624, 30), // "on_actionSaveMainROI_triggered"
QT_MOC_LITERAL(56, 1655, 8), // "sizeHint"
QT_MOC_LITERAL(57, 1664, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(58, 1695, 32), // "on_actionOpenWorkspace_triggered"
QT_MOC_LITERAL(59, 1728, 32), // "on_actionSaveWorkspace_triggered"
QT_MOC_LITERAL(60, 1761, 34), // "on_actionSaveWorkspaceAs_trig..."
QT_MOC_LITERAL(61, 1796, 16), // "UpdateMainLayout"
QT_MOC_LITERAL(62, 1813, 22), // "UpdateCanvasDimensions"
QT_MOC_LITERAL(63, 1836, 18), // "onAnimationTimeout"
QT_MOC_LITERAL(64, 1855, 30), // "on_actionExportAxial_triggered"
QT_MOC_LITERAL(65, 1886, 32), // "on_actionExportCoronal_triggered"
QT_MOC_LITERAL(66, 1919, 33), // "on_actionExportSagittal_trigg..."
QT_MOC_LITERAL(67, 1953, 32), // "on_actionSSSeriesAxial_triggered"
QT_MOC_LITERAL(68, 1986, 34), // "on_actionSSSeriesCoronal_trig..."
QT_MOC_LITERAL(69, 2021, 35), // "on_actionSSSeriesSagittal_tri..."
QT_MOC_LITERAL(70, 2057, 38), // "on_actionForegroundLabelPrev_..."
QT_MOC_LITERAL(71, 2096, 38), // "on_actionForegroundLabelNext_..."
QT_MOC_LITERAL(72, 2135, 38), // "on_actionBackgroundLabelPrev_..."
QT_MOC_LITERAL(73, 2174, 38), // "on_actionBackgroundLabelNext_..."
QT_MOC_LITERAL(74, 2213, 41), // "on_actionToggle_All_Annotatio..."
QT_MOC_LITERAL(75, 2255, 35), // "on_actionToggle_Crosshair_tri..."
QT_MOC_LITERAL(76, 2291, 41), // "on_actionAnnotation_Preferenc..."
QT_MOC_LITERAL(77, 2333, 37), // "on_actionAutoContrastGlobal_t..."
QT_MOC_LITERAL(78, 2371, 38), // "on_actionResetContrastGlobal_..."
QT_MOC_LITERAL(79, 2410, 30), // "on_actionZoom_to_100_triggered"
QT_MOC_LITERAL(80, 2441, 30), // "on_actionZoom_to_200_triggered"
QT_MOC_LITERAL(81, 2472, 30), // "on_actionZoom_to_400_triggered"
QT_MOC_LITERAL(82, 2503, 36), // "on_actionCheck_for_Updates_tr..."
QT_MOC_LITERAL(83, 2540, 37), // "on_actionDocumentation_Home_t..."
QT_MOC_LITERAL(84, 2578, 38), // "on_actionNew_ITK_SNAP_Window_..."
QT_MOC_LITERAL(85, 2617, 38), // "on_actionUnload_All_Overlays_..."
QT_MOC_LITERAL(86, 2656, 36), // "on_actionToggleLayerLayout_tr..."
QT_MOC_LITERAL(87, 2693, 36), // "on_actionActivateNextLayer_tr..."
QT_MOC_LITERAL(88, 2730, 40), // "on_actionActivatePreviousLaye..."
QT_MOC_LITERAL(89, 2771, 37), // "on_actionInterpolate_Labels_t..."
QT_MOC_LITERAL(90, 2809, 31), // "on_actionRegistration_triggered"
QT_MOC_LITERAL(91, 2841, 31), // "on_actionClose_Window_triggered"
QT_MOC_LITERAL(92, 2873, 25), // "onRightDockCurrentChanged"
QT_MOC_LITERAL(93, 2899, 35), // "on_actionMainControlPanel_tri..."
QT_MOC_LITERAL(94, 2935, 48), // "on_actionActivateNextSegmenta..."
QT_MOC_LITERAL(95, 2984, 52), // "on_actionActivatePreviousSegm..."
QT_MOC_LITERAL(96, 3037, 38), // "on_actionAddSegmentation_New_..."
QT_MOC_LITERAL(97, 3076, 39), // "on_actionAddSegmentation_Open..."
QT_MOC_LITERAL(98, 3116, 30), // "on_actionClearActive_triggered"
QT_MOC_LITERAL(99, 3147, 29), // "on_actionInstallCLI_triggered"
QT_MOC_LITERAL(100, 3177, 22), // "on_actionDSS_triggered"
QT_MOC_LITERAL(101, 3200, 38), // "on_actionNext_Display_Layout_..."
QT_MOC_LITERAL(102, 3239, 32), // "on_actionContrast40_80_triggered"
QT_MOC_LITERAL(103, 3272, 32), // "on_actionContrast40_40_triggered"
QT_MOC_LITERAL(104, 3305, 35), // "on_actionContrast130_2400_tri..."
QT_MOC_LITERAL(105, 3341, 33) // "on_actionContrast40_400_trigg..."

    },
    "MainImageWindow\0LoadRecentActionTriggered\0"
    "\0LoadRecentOverlayActionTriggered\0"
    "LoadRecentSegmentationActionTriggered\0"
    "LoadAnotherRecentSegmentationActionTriggered\0"
    "LoadRecentProjectActionTriggered\0"
    "LoadAnotherDicomActionTriggered\0"
    "AdjustMarginsForDocks\0onModelUpdate\0"
    "EventBucket\0b\0externalStyleSheetFileChanged\0"
    "file\0LoadMainImage\0LoadProject\0"
    "LoadProjectInNewInstance\0onActiveChanged\0"
    "on_actionQuit_triggered\0"
    "on_actionLoad_from_Image_triggered\0"
    "on_actionImage_Contrast_triggered\0"
    "on_actionLabel_Editor_triggered\0"
    "onRightDockDialogFinished\0"
    "on_actionUnload_All_triggered\0"
    "on_actionReorient_Image_triggered\0"
    "on_actionZoomToFitInAllViews_triggered\0"
    "on_actionCenter_on_Cursor_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionOpenMain_triggered\0"
    "on_actionAdd_Overlay_triggered\0"
    "on_actionSSAxial_triggered\0"
    "on_actionSSCoronal_triggered\0"
    "on_actionSSSagittal_triggered\0"
    "on_actionSegmentationIncreaseOpacity_triggered\0"
    "on_actionSegmentationDecreaseOpacity_triggered\0"
    "on_actionSegmentationToggle_triggered\0"
    "on_actionLoadLabels_triggered\0"
    "on_actionSaveLabels_triggered\0"
    "on_actionVolumesAndStatistics_triggered\0"
    "on_actionSaveSegmentation_triggered\0"
    "on_actionSaveSegmentationAs_triggered\0"
    "on_actionOverlayVisibilityToggleAll_triggered\0"
    "on_actionOverlayVisibilityIncreaseAll_triggered\0"
    "on_actionOverlayVisibilityDecreaseAll_triggered\0"
    "on_actionLayerInspector_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionColor_Map_Editor_triggered\0"
    "on_actionImage_Information_triggered\0"
    "on_actionUnload_Last_Overlay_triggered\0"
    "on_actionClear_triggered\0"
    "on_actionSave_as_Mesh_triggered\0"
    "on_actionSaveMain_triggered\0"
    "on_actionSaveSpeed_triggered\0"
    "on_actionSaveLevelSet_triggered\0"
    "on_actionSaveMainROI_triggered\0sizeHint\0"
    "on_actionPreferences_triggered\0"
    "on_actionOpenWorkspace_triggered\0"
    "on_actionSaveWorkspace_triggered\0"
    "on_actionSaveWorkspaceAs_triggered\0"
    "UpdateMainLayout\0UpdateCanvasDimensions\0"
    "onAnimationTimeout\0on_actionExportAxial_triggered\0"
    "on_actionExportCoronal_triggered\0"
    "on_actionExportSagittal_triggered\0"
    "on_actionSSSeriesAxial_triggered\0"
    "on_actionSSSeriesCoronal_triggered\0"
    "on_actionSSSeriesSagittal_triggered\0"
    "on_actionForegroundLabelPrev_triggered\0"
    "on_actionForegroundLabelNext_triggered\0"
    "on_actionBackgroundLabelPrev_triggered\0"
    "on_actionBackgroundLabelNext_triggered\0"
    "on_actionToggle_All_Annotations_triggered\0"
    "on_actionToggle_Crosshair_triggered\0"
    "on_actionAnnotation_Preferences_triggered\0"
    "on_actionAutoContrastGlobal_triggered\0"
    "on_actionResetContrastGlobal_triggered\0"
    "on_actionZoom_to_100_triggered\0"
    "on_actionZoom_to_200_triggered\0"
    "on_actionZoom_to_400_triggered\0"
    "on_actionCheck_for_Updates_triggered\0"
    "on_actionDocumentation_Home_triggered\0"
    "on_actionNew_ITK_SNAP_Window_triggered\0"
    "on_actionUnload_All_Overlays_triggered\0"
    "on_actionToggleLayerLayout_triggered\0"
    "on_actionActivateNextLayer_triggered\0"
    "on_actionActivatePreviousLayer_triggered\0"
    "on_actionInterpolate_Labels_triggered\0"
    "on_actionRegistration_triggered\0"
    "on_actionClose_Window_triggered\0"
    "onRightDockCurrentChanged\0"
    "on_actionMainControlPanel_triggered\0"
    "on_actionActivateNextSegmentationLayer_triggered\0"
    "on_actionActivatePreviousSegmentationLayer_triggered\0"
    "on_actionAddSegmentation_New_triggered\0"
    "on_actionAddSegmentation_Open_triggered\0"
    "on_actionClearActive_triggered\0"
    "on_actionInstallCLI_triggered\0"
    "on_actionDSS_triggered\0"
    "on_actionNext_Display_Layout_triggered\0"
    "on_actionContrast40_80_triggered\0"
    "on_actionContrast40_40_triggered\0"
    "on_actionContrast130_2400_triggered\0"
    "on_actionContrast40_400_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainImageWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     101,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  519,    2, 0x0a /* Public */,
       3,    0,  520,    2, 0x0a /* Public */,
       4,    0,  521,    2, 0x0a /* Public */,
       5,    0,  522,    2, 0x0a /* Public */,
       6,    0,  523,    2, 0x0a /* Public */,
       7,    0,  524,    2, 0x0a /* Public */,
       8,    0,  525,    2, 0x0a /* Public */,
       9,    1,  526,    2, 0x0a /* Public */,
      12,    1,  529,    2, 0x0a /* Public */,
      14,    1,  532,    2, 0x0a /* Public */,
      15,    1,  535,    2, 0x0a /* Public */,
      16,    1,  538,    2, 0x0a /* Public */,
      17,    0,  541,    2, 0x08 /* Private */,
      18,    0,  542,    2, 0x08 /* Private */,
      19,    0,  543,    2, 0x08 /* Private */,
      20,    0,  544,    2, 0x08 /* Private */,
      21,    0,  545,    2, 0x08 /* Private */,
      22,    0,  546,    2, 0x08 /* Private */,
      23,    0,  547,    2, 0x08 /* Private */,
      24,    0,  548,    2, 0x08 /* Private */,
      25,    0,  549,    2, 0x08 /* Private */,
      26,    0,  550,    2, 0x08 /* Private */,
      27,    0,  551,    2, 0x08 /* Private */,
      28,    0,  552,    2, 0x08 /* Private */,
      29,    0,  553,    2, 0x08 /* Private */,
      30,    0,  554,    2, 0x08 /* Private */,
      31,    0,  555,    2, 0x08 /* Private */,
      32,    0,  556,    2, 0x08 /* Private */,
      33,    0,  557,    2, 0x08 /* Private */,
      34,    0,  558,    2, 0x08 /* Private */,
      35,    0,  559,    2, 0x08 /* Private */,
      36,    0,  560,    2, 0x08 /* Private */,
      37,    0,  561,    2, 0x08 /* Private */,
      38,    0,  562,    2, 0x08 /* Private */,
      39,    0,  563,    2, 0x08 /* Private */,
      40,    0,  564,    2, 0x08 /* Private */,
      41,    0,  565,    2, 0x08 /* Private */,
      42,    0,  566,    2, 0x08 /* Private */,
      43,    0,  567,    2, 0x08 /* Private */,
      44,    0,  568,    2, 0x08 /* Private */,
      45,    0,  569,    2, 0x08 /* Private */,
      46,    0,  570,    2, 0x08 /* Private */,
      47,    0,  571,    2, 0x08 /* Private */,
      48,    0,  572,    2, 0x08 /* Private */,
      49,    0,  573,    2, 0x08 /* Private */,
      50,    0,  574,    2, 0x08 /* Private */,
      51,    0,  575,    2, 0x08 /* Private */,
      52,    0,  576,    2, 0x08 /* Private */,
      53,    0,  577,    2, 0x08 /* Private */,
      54,    0,  578,    2, 0x08 /* Private */,
      55,    0,  579,    2, 0x08 /* Private */,
      56,    0,  580,    2, 0x08 /* Private */,
      57,    0,  581,    2, 0x08 /* Private */,
      58,    0,  582,    2, 0x08 /* Private */,
      59,    0,  583,    2, 0x08 /* Private */,
      60,    0,  584,    2, 0x08 /* Private */,
      61,    0,  585,    2, 0x08 /* Private */,
      62,    0,  586,    2, 0x08 /* Private */,
      63,    0,  587,    2, 0x08 /* Private */,
      64,    0,  588,    2, 0x08 /* Private */,
      65,    0,  589,    2, 0x08 /* Private */,
      66,    0,  590,    2, 0x08 /* Private */,
      67,    0,  591,    2, 0x08 /* Private */,
      68,    0,  592,    2, 0x08 /* Private */,
      69,    0,  593,    2, 0x08 /* Private */,
      70,    0,  594,    2, 0x08 /* Private */,
      71,    0,  595,    2, 0x08 /* Private */,
      72,    0,  596,    2, 0x08 /* Private */,
      73,    0,  597,    2, 0x08 /* Private */,
      74,    0,  598,    2, 0x08 /* Private */,
      75,    0,  599,    2, 0x08 /* Private */,
      76,    0,  600,    2, 0x08 /* Private */,
      77,    0,  601,    2, 0x08 /* Private */,
      78,    0,  602,    2, 0x08 /* Private */,
      79,    0,  603,    2, 0x08 /* Private */,
      80,    0,  604,    2, 0x08 /* Private */,
      81,    0,  605,    2, 0x08 /* Private */,
      82,    0,  606,    2, 0x08 /* Private */,
      83,    0,  607,    2, 0x08 /* Private */,
      84,    0,  608,    2, 0x08 /* Private */,
      85,    0,  609,    2, 0x08 /* Private */,
      86,    0,  610,    2, 0x08 /* Private */,
      87,    0,  611,    2, 0x08 /* Private */,
      88,    0,  612,    2, 0x08 /* Private */,
      89,    0,  613,    2, 0x08 /* Private */,
      90,    0,  614,    2, 0x08 /* Private */,
      91,    0,  615,    2, 0x08 /* Private */,
      92,    1,  616,    2, 0x08 /* Private */,
      93,    0,  619,    2, 0x08 /* Private */,
      94,    0,  620,    2, 0x08 /* Private */,
      95,    0,  621,    2, 0x08 /* Private */,
      96,    0,  622,    2, 0x08 /* Private */,
      97,    0,  623,    2, 0x08 /* Private */,
      98,    0,  624,    2, 0x08 /* Private */,
      99,    0,  625,    2, 0x08 /* Private */,
     100,    0,  626,    2, 0x08 /* Private */,
     101,    0,  627,    2, 0x08 /* Private */,
     102,    0,  628,    2, 0x08 /* Private */,
     103,    0,  629,    2, 0x08 /* Private */,
     104,    0,  630,    2, 0x08 /* Private */,
     105,    0,  631,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QSize,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainImageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainImageWindow *_t = static_cast<MainImageWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadRecentActionTriggered(); break;
        case 1: _t->LoadRecentOverlayActionTriggered(); break;
        case 2: _t->LoadRecentSegmentationActionTriggered(); break;
        case 3: _t->LoadAnotherRecentSegmentationActionTriggered(); break;
        case 4: _t->LoadRecentProjectActionTriggered(); break;
        case 5: _t->LoadAnotherDicomActionTriggered(); break;
        case 6: _t->AdjustMarginsForDocks(); break;
        case 7: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 8: _t->externalStyleSheetFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->LoadMainImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->LoadProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->LoadProjectInNewInstance((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onActiveChanged(); break;
        case 13: _t->on_actionQuit_triggered(); break;
        case 14: _t->on_actionLoad_from_Image_triggered(); break;
        case 15: _t->on_actionImage_Contrast_triggered(); break;
        case 16: _t->on_actionLabel_Editor_triggered(); break;
        case 17: _t->onRightDockDialogFinished(); break;
        case 18: _t->on_actionUnload_All_triggered(); break;
        case 19: _t->on_actionReorient_Image_triggered(); break;
        case 20: _t->on_actionZoomToFitInAllViews_triggered(); break;
        case 21: _t->on_actionCenter_on_Cursor_triggered(); break;
        case 22: _t->on_actionUndo_triggered(); break;
        case 23: _t->on_actionRedo_triggered(); break;
        case 24: _t->on_actionOpenMain_triggered(); break;
        case 25: _t->on_actionAdd_Overlay_triggered(); break;
        case 26: _t->on_actionSSAxial_triggered(); break;
        case 27: _t->on_actionSSCoronal_triggered(); break;
        case 28: _t->on_actionSSSagittal_triggered(); break;
        case 29: _t->on_actionSegmentationIncreaseOpacity_triggered(); break;
        case 30: _t->on_actionSegmentationDecreaseOpacity_triggered(); break;
        case 31: _t->on_actionSegmentationToggle_triggered(); break;
        case 32: _t->on_actionLoadLabels_triggered(); break;
        case 33: _t->on_actionSaveLabels_triggered(); break;
        case 34: _t->on_actionVolumesAndStatistics_triggered(); break;
        case 35: _t->on_actionSaveSegmentation_triggered(); break;
        case 36: _t->on_actionSaveSegmentationAs_triggered(); break;
        case 37: _t->on_actionOverlayVisibilityToggleAll_triggered(); break;
        case 38: _t->on_actionOverlayVisibilityIncreaseAll_triggered(); break;
        case 39: _t->on_actionOverlayVisibilityDecreaseAll_triggered(); break;
        case 40: _t->on_actionLayerInspector_triggered(); break;
        case 41: _t->on_actionAbout_triggered(); break;
        case 42: _t->on_actionColor_Map_Editor_triggered(); break;
        case 43: _t->on_actionImage_Information_triggered(); break;
        case 44: _t->on_actionUnload_Last_Overlay_triggered(); break;
        case 45: _t->on_actionClear_triggered(); break;
        case 46: _t->on_actionSave_as_Mesh_triggered(); break;
        case 47: _t->on_actionSaveMain_triggered(); break;
        case 48: _t->on_actionSaveSpeed_triggered(); break;
        case 49: _t->on_actionSaveLevelSet_triggered(); break;
        case 50: _t->on_actionSaveMainROI_triggered(); break;
        case 51: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 52: _t->on_actionPreferences_triggered(); break;
        case 53: _t->on_actionOpenWorkspace_triggered(); break;
        case 54: _t->on_actionSaveWorkspace_triggered(); break;
        case 55: _t->on_actionSaveWorkspaceAs_triggered(); break;
        case 56: _t->UpdateMainLayout(); break;
        case 57: _t->UpdateCanvasDimensions(); break;
        case 58: _t->onAnimationTimeout(); break;
        case 59: _t->on_actionExportAxial_triggered(); break;
        case 60: _t->on_actionExportCoronal_triggered(); break;
        case 61: _t->on_actionExportSagittal_triggered(); break;
        case 62: _t->on_actionSSSeriesAxial_triggered(); break;
        case 63: _t->on_actionSSSeriesCoronal_triggered(); break;
        case 64: _t->on_actionSSSeriesSagittal_triggered(); break;
        case 65: _t->on_actionForegroundLabelPrev_triggered(); break;
        case 66: _t->on_actionForegroundLabelNext_triggered(); break;
        case 67: _t->on_actionBackgroundLabelPrev_triggered(); break;
        case 68: _t->on_actionBackgroundLabelNext_triggered(); break;
        case 69: _t->on_actionToggle_All_Annotations_triggered(); break;
        case 70: _t->on_actionToggle_Crosshair_triggered(); break;
        case 71: _t->on_actionAnnotation_Preferences_triggered(); break;
        case 72: _t->on_actionAutoContrastGlobal_triggered(); break;
        case 73: _t->on_actionResetContrastGlobal_triggered(); break;
        case 74: _t->on_actionZoom_to_100_triggered(); break;
        case 75: _t->on_actionZoom_to_200_triggered(); break;
        case 76: _t->on_actionZoom_to_400_triggered(); break;
        case 77: _t->on_actionCheck_for_Updates_triggered(); break;
        case 78: _t->on_actionDocumentation_Home_triggered(); break;
        case 79: _t->on_actionNew_ITK_SNAP_Window_triggered(); break;
        case 80: _t->on_actionUnload_All_Overlays_triggered(); break;
        case 81: _t->on_actionToggleLayerLayout_triggered(); break;
        case 82: _t->on_actionActivateNextLayer_triggered(); break;
        case 83: _t->on_actionActivatePreviousLayer_triggered(); break;
        case 84: _t->on_actionInterpolate_Labels_triggered(); break;
        case 85: _t->on_actionRegistration_triggered(); break;
        case 86: _t->on_actionClose_Window_triggered(); break;
        case 87: _t->onRightDockCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->on_actionMainControlPanel_triggered(); break;
        case 89: _t->on_actionActivateNextSegmentationLayer_triggered(); break;
        case 90: _t->on_actionActivatePreviousSegmentationLayer_triggered(); break;
        case 91: _t->on_actionAddSegmentation_New_triggered(); break;
        case 92: _t->on_actionAddSegmentation_Open_triggered(); break;
        case 93: _t->on_actionClearActive_triggered(); break;
        case 94: _t->on_actionInstallCLI_triggered(); break;
        case 95: _t->on_actionDSS_triggered(); break;
        case 96: _t->on_actionNext_Display_Layout_triggered(); break;
        case 97: _t->on_actionContrast40_80_triggered(); break;
        case 98: _t->on_actionContrast40_40_triggered(); break;
        case 99: _t->on_actionContrast130_2400_triggered(); break;
        case 100: _t->on_actionContrast40_400_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainImageWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainImageWindow.data,
      qt_meta_data_MainImageWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainImageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainImageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainImageWindow.stringdata0))
        return static_cast<void*>(const_cast< MainImageWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainImageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 101)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 101;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 101)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 101;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
