/********************************************************************************
** Form generated from reading UI file 'DistributedSegmentationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTEDSEGMENTATIONDIALOG_H
#define UI_DISTRIBUTEDSEGMENTATIONDIALOG_H

#include <QtCore/QVariant>
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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DistributedSegmentationDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tabConfigure;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnGetToken;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *inToken;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *outStatus;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnManageServers;
    QComboBox *inServer;
    QSpacerItem *verticalSpacer;
    QWidget *tabSubmit;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QLabel *outServiceDesc;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QComboBox *inService;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnViewServices;
    QTableView *tblTags;
    QLabel *label_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSubmit;
    QPushButton *btnResetTags;
    QWidget *tabResults;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QTableView *tblLog;
    QLabel *label_9;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QLineEdit *outTicketWorkspace;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *outTicketDownloadLocation;
    QToolButton *btnOpenSource;
    QToolButton *btnOpenDownloaded;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnDownload;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *outTicketId;
    QStackedWidget *stackProgress;
    QWidget *pgProgress;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QProgressBar *outProgress;
    QWidget *pgQueuePos;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *outQueuePos;
    QSpacerItem *horizontalSpacer_8;
    QTableView *tblTickets;

    void setupUi(QDialog *DistributedSegmentationDialog)
    {
        if (DistributedSegmentationDialog->objectName().isEmpty())
            DistributedSegmentationDialog->setObjectName(QStringLiteral("DistributedSegmentationDialog"));
        DistributedSegmentationDialog->resize(804, 480);
        horizontalLayout_4 = new QHBoxLayout(DistributedSegmentationDialog);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tabWidget = new QTabWidget(DistributedSegmentationDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabConfigure = new QWidget();
        tabConfigure->setObjectName(QStringLiteral("tabConfigure"));
        verticalLayout_2 = new QVBoxLayout(tabConfigure);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(tabConfigure);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(8);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 6, 1, 2);

        btnGetToken = new QPushButton(widget);
        btnGetToken->setObjectName(QStringLiteral("btnGetToken"));

        gridLayout->addWidget(btnGetToken, 4, 5, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("font-size:13px;\n"
"font-weight:bold;\n"
"color: rgb(96, 96, 96);"));

        gridLayout->addWidget(label_10, 0, 0, 1, 8);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        inToken = new QLineEdit(widget);
        inToken->setObjectName(QStringLiteral("inToken"));
        inToken->setMinimumSize(QSize(256, 0));
        inToken->setMaxLength(64);
        inToken->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(inToken, 4, 2, 1, 2);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("font-size:11px;\n"
"color: rgb(96, 96, 96);"));
        label_11->setWordWrap(true);

        gridLayout->addWidget(label_11, 1, 0, 1, 8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        outStatus = new QLabel(widget);
        outStatus->setObjectName(QStringLiteral("outStatus"));

        gridLayout->addWidget(outStatus, 6, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        btnManageServers = new QPushButton(widget);
        btnManageServers->setObjectName(QStringLiteral("btnManageServers"));

        gridLayout->addWidget(btnManageServers, 3, 5, 1, 1);

        inServer = new QComboBox(widget);
        inServer->setObjectName(QStringLiteral("inServer"));

        gridLayout->addWidget(inServer, 3, 2, 1, 2);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(7, 2);

        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tabConfigure, QString());
        tabSubmit = new QWidget();
        tabSubmit->setObjectName(QStringLiteral("tabSubmit"));
        gridLayout_2 = new QGridLayout(tabSubmit);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_3 = new QWidget(tabSubmit);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout_2->addWidget(widget_3, 6, 0, 1, 2);

        outServiceDesc = new QLabel(tabSubmit);
        outServiceDesc->setObjectName(QStringLiteral("outServiceDesc"));
        outServiceDesc->setStyleSheet(QLatin1String("font-size:11px;\n"
"color: rgb(76, 76, 76);\n"
""));
        outServiceDesc->setWordWrap(true);

        gridLayout_2->addWidget(outServiceDesc, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        label_3 = new QLabel(tabSubmit);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        inService = new QComboBox(tabSubmit);
        inService->setObjectName(QStringLiteral("inService"));

        gridLayout_2->addWidget(inService, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 2);

        btnViewServices = new QPushButton(tabSubmit);
        btnViewServices->setObjectName(QStringLiteral("btnViewServices"));

        gridLayout_2->addWidget(btnViewServices, 0, 2, 1, 1);

        tblTags = new QTableView(tabSubmit);
        tblTags->setObjectName(QStringLiteral("tblTags"));
        tblTags->setMaximumSize(QSize(16777215, 140));
        tblTags->setStyleSheet(QStringLiteral("font-size:11px;"));
        tblTags->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tblTags->setSelectionMode(QAbstractItemView::SingleSelection);
        tblTags->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblTags->setSortingEnabled(true);
        tblTags->verticalHeader()->setVisible(false);
        tblTags->verticalHeader()->setCascadingSectionResizes(true);
        tblTags->verticalHeader()->setDefaultSectionSize(18);
        tblTags->verticalHeader()->setMinimumSectionSize(18);
        tblTags->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tblTags, 4, 0, 1, 3);

        label_4 = new QLabel(tabSubmit);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 3);

        widget_2 = new QWidget(tabSubmit);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnSubmit = new QPushButton(widget_2);
        btnSubmit->setObjectName(QStringLiteral("btnSubmit"));

        horizontalLayout->addWidget(btnSubmit);

        btnResetTags = new QPushButton(widget_2);
        btnResetTags->setObjectName(QStringLiteral("btnResetTags"));

        horizontalLayout->addWidget(btnResetTags);


        gridLayout_2->addWidget(widget_2, 7, 0, 1, 3);

        gridLayout_2->setColumnStretch(1, 1);
        tabWidget->addTab(tabSubmit, QString());
        tabResults = new QWidget();
        tabResults->setObjectName(QStringLiteral("tabResults"));
        gridLayout_3 = new QGridLayout(tabResults);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(16);
        gridLayout_3->setVerticalSpacing(6);
        widget_4 = new QWidget(tabResults);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_6, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_7, 5, 0, 1, 1);

        tblLog = new QTableView(widget_4);
        tblLog->setObjectName(QStringLiteral("tblLog"));
        tblLog->setStyleSheet(QStringLiteral("font-size:11px;"));
        tblLog->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tblLog->setSelectionMode(QAbstractItemView::SingleSelection);
        tblLog->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblLog->setIconSize(QSize(16, 16));
        tblLog->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tblLog->verticalHeader()->setVisible(false);
        tblLog->verticalHeader()->setDefaultSectionSize(18);
        tblLog->verticalHeader()->setMinimumSectionSize(18);

        gridLayout_4->addWidget(tblLog, 4, 0, 1, 5);

        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 3, 0, 1, 1);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("font-size:11px;"));
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(4);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        outTicketWorkspace = new QLineEdit(widget_6);
        outTicketWorkspace->setObjectName(QStringLiteral("outTicketWorkspace"));
        outTicketWorkspace->setReadOnly(true);

        gridLayout_5->addWidget(outTicketWorkspace, 0, 2, 1, 1);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        outTicketDownloadLocation = new QLineEdit(widget_6);
        outTicketDownloadLocation->setObjectName(QStringLiteral("outTicketDownloadLocation"));
        outTicketDownloadLocation->setReadOnly(true);

        gridLayout_5->addWidget(outTicketDownloadLocation, 1, 2, 1, 1);

        btnOpenSource = new QToolButton(widget_6);
        btnOpenSource->setObjectName(QStringLiteral("btnOpenSource"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/root/icons8_opened_folder_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpenSource->setIcon(icon);
        btnOpenSource->setAutoRaise(true);

        gridLayout_5->addWidget(btnOpenSource, 0, 3, 1, 1);

        btnOpenDownloaded = new QToolButton(widget_6);
        btnOpenDownloaded->setObjectName(QStringLiteral("btnOpenDownloaded"));
        btnOpenDownloaded->setIcon(icon);
        btnOpenDownloaded->setAutoRaise(true);

        gridLayout_5->addWidget(btnOpenDownloaded, 1, 3, 1, 1);


        gridLayout_4->addWidget(widget_6, 6, 0, 1, 5);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(0, 20));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        btnDownload = new QPushButton(widget_5);
        btnDownload->setObjectName(QStringLiteral("btnDownload"));

        horizontalLayout_2->addWidget(btnDownload);

        btnDelete = new QPushButton(widget_5);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        horizontalLayout_2->addWidget(btnDelete);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_4->addWidget(widget_5, 7, 0, 1, 5);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        outTicketId = new QLineEdit(widget_4);
        outTicketId->setObjectName(QStringLiteral("outTicketId"));
        outTicketId->setMaximumSize(QSize(60, 16777215));
        outTicketId->setMaxLength(12);
        outTicketId->setReadOnly(true);

        gridLayout_4->addWidget(outTicketId, 1, 1, 1, 1);

        stackProgress = new QStackedWidget(widget_4);
        stackProgress->setObjectName(QStringLiteral("stackProgress"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackProgress->sizePolicy().hasHeightForWidth());
        stackProgress->setSizePolicy(sizePolicy);
        stackProgress->setMaximumSize(QSize(16777215, 24));
        stackProgress->setStyleSheet(QLatin1String("QFrame: {\n"
"padding: 0px;\n"
"}"));
        stackProgress->setLineWidth(0);
        pgProgress = new QWidget();
        pgProgress->setObjectName(QStringLiteral("pgProgress"));
        horizontalLayout_3 = new QHBoxLayout(pgProgress);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(pgProgress);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        outProgress = new QProgressBar(pgProgress);
        outProgress->setObjectName(QStringLiteral("outProgress"));
        outProgress->setValue(24);

        horizontalLayout_3->addWidget(outProgress);

        stackProgress->addWidget(pgProgress);
        pgQueuePos = new QWidget();
        pgQueuePos->setObjectName(QStringLiteral("pgQueuePos"));
        horizontalLayout_5 = new QHBoxLayout(pgQueuePos);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(pgQueuePos);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_5->addWidget(label_14);

        outQueuePos = new QLineEdit(pgQueuePos);
        outQueuePos->setObjectName(QStringLiteral("outQueuePos"));
        outQueuePos->setMaximumSize(QSize(60, 16777215));
        outQueuePos->setMaxLength(12);
        outQueuePos->setReadOnly(true);

        horizontalLayout_5->addWidget(outQueuePos);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        stackProgress->addWidget(pgQueuePos);

        gridLayout_4->addWidget(stackProgress, 1, 4, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 1, 1, 1);

        tblTickets = new QTableView(tabResults);
        tblTickets->setObjectName(QStringLiteral("tblTickets"));
        tblTickets->setMaximumSize(QSize(225, 16777215));
        tblTickets->setStyleSheet(QStringLiteral("font-size:11px;"));
        tblTickets->setSelectionMode(QAbstractItemView::SingleSelection);
        tblTickets->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblTickets->setSortingEnabled(true);
        tblTickets->horizontalHeader()->setDefaultSectionSize(75);
        tblTickets->horizontalHeader()->setStretchLastSection(true);
        tblTickets->verticalHeader()->setVisible(false);
        tblTickets->verticalHeader()->setDefaultSectionSize(18);
        tblTickets->verticalHeader()->setMinimumSectionSize(18);

        gridLayout_3->addWidget(tblTickets, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        tabWidget->addTab(tabResults, QString());

        horizontalLayout_4->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(inServer);
        label_2->setBuddy(inToken);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(inToken, btnGetToken);
        QWidget::setTabOrder(btnGetToken, inService);
        QWidget::setTabOrder(inService, btnViewServices);
        QWidget::setTabOrder(btnViewServices, tblTags);
        QWidget::setTabOrder(tblTags, btnSubmit);
        QWidget::setTabOrder(btnSubmit, btnResetTags);
        QWidget::setTabOrder(btnResetTags, tblTickets);
        QWidget::setTabOrder(tblTickets, outTicketId);
        QWidget::setTabOrder(outTicketId, tblLog);
        QWidget::setTabOrder(tblLog, outTicketWorkspace);
        QWidget::setTabOrder(outTicketWorkspace, btnDownload);
        QWidget::setTabOrder(btnDownload, btnDelete);
        QWidget::setTabOrder(btnDelete, tabWidget);

        retranslateUi(DistributedSegmentationDialog);

        tabWidget->setCurrentIndex(0);
        btnGetToken->setDefault(true);
        btnDownload->setDefault(true);
        stackProgress->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DistributedSegmentationDialog);
    } // setupUi

    void retranslateUi(QDialog *DistributedSegmentationDialog)
    {
        DistributedSegmentationDialog->setWindowTitle(QApplication::translate("DistributedSegmentationDialog", "ITK-SNAP Distributed Segmentation Service", 0));
        label->setText(QApplication::translate("DistributedSegmentationDialog", "Server URL:", 0));
#ifndef QT_NO_TOOLTIP
        btnGetToken->setToolTip(QApplication::translate("DistributedSegmentationDialog", "<html><head/><body><p>Use this button to login on the DSS website. After you log in, you will be provided with a one-time login token. Copy and paste that token to the text box on the left.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnGetToken->setText(QApplication::translate("DistributedSegmentationDialog", "Get Token", 0));
        label_10->setText(QApplication::translate("DistributedSegmentationDialog", "ITK-SNAP Distributed Segmentation Services (DSS)", 0));
#ifndef QT_NO_TOOLTIP
        inToken->setToolTip(QApplication::translate("DistributedSegmentationDialog", "<html><head/><body><p>To login for the first time, you need to obtain a one-time login token from the DSS website.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("DistributedSegmentationDialog", "DSS is a web-based framework for connecting developers of medical image analysis algorithms to their users. Users send images to the server, and algorithm providers download these images, process them, and upload the results for users to retrieve.", 0));
        label_5->setText(QApplication::translate("DistributedSegmentationDialog", "Server Status:", 0));
        label_2->setText(QApplication::translate("DistributedSegmentationDialog", "Login Token:", 0));
        outStatus->setText(QApplication::translate("DistributedSegmentationDialog", "Not connected", 0));
#ifndef QT_NO_TOOLTIP
        btnManageServers->setToolTip(QApplication::translate("DistributedSegmentationDialog", "When you press this button, a browser will open and take you to the login page for the selected server. Once logged in, paste your authentication token into the text box on the left.", 0));
#endif // QT_NO_TOOLTIP
        btnManageServers->setText(QApplication::translate("DistributedSegmentationDialog", "Manage...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabConfigure), QApplication::translate("DistributedSegmentationDialog", "Connect", 0));
        outServiceDesc->setText(QApplication::translate("DistributedSegmentationDialog", "Description", 0));
        label_3->setText(QApplication::translate("DistributedSegmentationDialog", "Service:", 0));
#ifndef QT_NO_TOOLTIP
        btnViewServices->setToolTip(QApplication::translate("DistributedSegmentationDialog", "<html><head/><body><p>View detailed information about the available services and their status in an external web page.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnViewServices->setText(QApplication::translate("DistributedSegmentationDialog", "View Services", 0));
        label_4->setText(QApplication::translate("DistributedSegmentationDialog", "Assign tags to images and other objects:", 0));
        btnSubmit->setText(QApplication::translate("DistributedSegmentationDialog", "Submit", 0));
        btnResetTags->setText(QApplication::translate("DistributedSegmentationDialog", "Reset Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSubmit), QApplication::translate("DistributedSegmentationDialog", "Submit", 0));
        label_9->setText(QApplication::translate("DistributedSegmentationDialog", "Logs:", 0));
#ifndef QT_NO_TOOLTIP
        outTicketWorkspace->setToolTip(QApplication::translate("DistributedSegmentationDialog", "<html><head/><body><p>The workspace file that was used to create this ticket. This information is only available for tickets that were created this computer.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("DistributedSegmentationDialog", "Source:", 0));
        label_13->setText(QApplication::translate("DistributedSegmentationDialog", "Saved as:", 0));
#ifndef QT_NO_TOOLTIP
        outTicketDownloadLocation->setToolTip(QApplication::translate("DistributedSegmentationDialog", "<html><head/><body><p>If you have already downloaded this ticket, the location of the downloaded workspace is shown here.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnOpenSource->setText(QApplication::translate("DistributedSegmentationDialog", "...", 0));
        btnOpenDownloaded->setText(QApplication::translate("DistributedSegmentationDialog", "...", 0));
        btnDownload->setText(QApplication::translate("DistributedSegmentationDialog", "Download", 0));
        btnDelete->setText(QApplication::translate("DistributedSegmentationDialog", "Delete", 0));
        label_7->setText(QApplication::translate("DistributedSegmentationDialog", "Ticket Id:", 0));
        label_8->setText(QApplication::translate("DistributedSegmentationDialog", "Progress:", 0));
        label_14->setText(QApplication::translate("DistributedSegmentationDialog", "Queue Position:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabResults), QApplication::translate("DistributedSegmentationDialog", "Results", 0));
    } // retranslateUi

};

namespace Ui {
    class DistributedSegmentationDialog: public Ui_DistributedSegmentationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTEDSEGMENTATIONDIALOG_H
