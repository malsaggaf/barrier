/********************************************************************************
** Form generated from reading UI file 'MainWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBASE_H
#define UI_MAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowBase
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionQuit;
    QAction *m_pActionStartBarrier;
    QAction *m_pActionStopBarrier;
    QAction *m_pActionMinimize;
    QAction *m_pActionRestore;
    QAction *m_pActionSave;
    QAction *m_pActionSettings;
    QAction *m_pActionShowLog;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_pGroupServer;
    QVBoxLayout *vboxLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *m_pLabelIpAddresses;
    QRadioButton *m_pRadioInternalConfig;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_pButtonConfigureServer;
    QSpacerItem *spacerItem;
    QRadioButton *m_pRadioExternalConfig;
    QHBoxLayout *hboxLayout;
    QLabel *m_pLabelConfigurationFile;
    QLineEdit *m_pLineEditConfigFile;
    QPushButton *m_pButtonBrowseConfigFile;
    QGroupBox *m_pGroupClient;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLabel *m_pLabelScreenName;
    QLabel *m_pLabelServerName;
    QLineEdit *m_pLineEditHostname;
    QCheckBox *m_pCheckBoxAutoConfig;
    QComboBox *m_pComboServerList;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_pLabelFingerprint;
    QLabel *m_pLabelLocalFingerprint;
    QToolButton *toolbutton_show_fingerprint;
    QFrame *frame_fingerprint_details;
    QGridLayout *gridLayout;
    QLabel *label_sha256_randomart;
    QLabel *label_sha1;
    QLabel *label_sha1_fingerprint_full;
    QLabel *label_sha256;
    QLabel *label_sha256_fingerprint_full;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelPadlock;
    QLabel *m_pStatusLabel;
    QSpacerItem *spacer;
    QPushButton *m_pButtonReload;
    QPushButton *m_pButtonToggleStart;

    void setupUi(QMainWindow *MainWindowBase)
    {
        if (MainWindowBase->objectName().isEmpty())
            MainWindowBase->setObjectName(QStringLiteral("MainWindowBase"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowBase->sizePolicy().hasHeightForWidth());
        MainWindowBase->setSizePolicy(sizePolicy);
        m_pActionAbout = new QAction(MainWindowBase);
        m_pActionAbout->setObjectName(QStringLiteral("m_pActionAbout"));
#ifndef QT_NO_SHORTCUT
        m_pActionAbout->setShortcut(QStringLiteral(""));
#endif // QT_NO_SHORTCUT
        m_pActionQuit = new QAction(MainWindowBase);
        m_pActionQuit->setObjectName(QStringLiteral("m_pActionQuit"));
#ifndef QT_NO_SHORTCUT
        m_pActionQuit->setShortcut(QStringLiteral("Ctrl+Q"));
#endif // QT_NO_SHORTCUT
        m_pActionStartBarrier = new QAction(MainWindowBase);
        m_pActionStartBarrier->setObjectName(QStringLiteral("m_pActionStartBarrier"));
#ifndef QT_NO_SHORTCUT
        m_pActionStartBarrier->setShortcut(QStringLiteral("Ctrl+S"));
#endif // QT_NO_SHORTCUT
        m_pActionStopBarrier = new QAction(MainWindowBase);
        m_pActionStopBarrier->setObjectName(QStringLiteral("m_pActionStopBarrier"));
        m_pActionStopBarrier->setEnabled(false);
#ifndef QT_NO_SHORTCUT
        m_pActionStopBarrier->setShortcut(QStringLiteral("Ctrl+T"));
#endif // QT_NO_SHORTCUT
        m_pActionMinimize = new QAction(MainWindowBase);
        m_pActionMinimize->setObjectName(QStringLiteral("m_pActionMinimize"));
#ifndef QT_NO_SHORTCUT
        m_pActionMinimize->setShortcut(QStringLiteral("F5"));
#endif // QT_NO_SHORTCUT
        m_pActionRestore = new QAction(MainWindowBase);
        m_pActionRestore->setObjectName(QStringLiteral("m_pActionRestore"));
#ifndef QT_NO_SHORTCUT
        m_pActionRestore->setShortcut(QStringLiteral(""));
#endif // QT_NO_SHORTCUT
        m_pActionSave = new QAction(MainWindowBase);
        m_pActionSave->setObjectName(QStringLiteral("m_pActionSave"));
#ifndef QT_NO_SHORTCUT
        m_pActionSave->setShortcut(QStringLiteral("Ctrl+Alt+S"));
#endif // QT_NO_SHORTCUT
        m_pActionSettings = new QAction(MainWindowBase);
        m_pActionSettings->setObjectName(QStringLiteral("m_pActionSettings"));
#ifndef QT_NO_SHORTCUT
        m_pActionSettings->setShortcut(QStringLiteral("F4"));
#endif // QT_NO_SHORTCUT
        m_pActionShowLog = new QAction(MainWindowBase);
        m_pActionShowLog->setObjectName(QStringLiteral("m_pActionShowLog"));
#ifndef QT_NO_SHORTCUT
        m_pActionShowLog->setShortcut(QStringLiteral("F2"));
#endif // QT_NO_SHORTCUT
        centralwidget = new QWidget(MainWindowBase);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        m_pGroupServer = new QGroupBox(centralwidget);
        m_pGroupServer->setObjectName(QStringLiteral("m_pGroupServer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pGroupServer->sizePolicy().hasHeightForWidth());
        m_pGroupServer->setSizePolicy(sizePolicy1);
        m_pGroupServer->setCheckable(true);
        m_pGroupServer->setChecked(true);
        vboxLayout = new QVBoxLayout(m_pGroupServer);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(m_pGroupServer);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        m_pLabelIpAddresses = new QLabel(m_pGroupServer);
        m_pLabelIpAddresses->setObjectName(QStringLiteral("m_pLabelIpAddresses"));
        m_pLabelIpAddresses->setText(QStringLiteral(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_pLabelIpAddresses);


        vboxLayout->addLayout(formLayout);

        m_pRadioInternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioInternalConfig->setObjectName(QStringLiteral("m_pRadioInternalConfig"));
        m_pRadioInternalConfig->setChecked(true);

        vboxLayout->addWidget(m_pRadioInternalConfig);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        m_pButtonConfigureServer = new QPushButton(m_pGroupServer);
        m_pButtonConfigureServer->setObjectName(QStringLiteral("m_pButtonConfigureServer"));

        horizontalLayout_4->addWidget(m_pButtonConfigureServer);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacerItem);


        vboxLayout->addLayout(horizontalLayout_4);

        m_pRadioExternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioExternalConfig->setObjectName(QStringLiteral("m_pRadioExternalConfig"));

        vboxLayout->addWidget(m_pRadioExternalConfig);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        m_pLabelConfigurationFile = new QLabel(m_pGroupServer);
        m_pLabelConfigurationFile->setObjectName(QStringLiteral("m_pLabelConfigurationFile"));

        hboxLayout->addWidget(m_pLabelConfigurationFile);

        m_pLineEditConfigFile = new QLineEdit(m_pGroupServer);
        m_pLineEditConfigFile->setObjectName(QStringLiteral("m_pLineEditConfigFile"));
        m_pLineEditConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pLineEditConfigFile);

        m_pButtonBrowseConfigFile = new QPushButton(m_pGroupServer);
        m_pButtonBrowseConfigFile->setObjectName(QStringLiteral("m_pButtonBrowseConfigFile"));
        m_pButtonBrowseConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pButtonBrowseConfigFile);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_2->addWidget(m_pGroupServer);

        m_pGroupClient = new QGroupBox(centralwidget);
        m_pGroupClient->setObjectName(QStringLiteral("m_pGroupClient"));
        sizePolicy1.setHeightForWidth(m_pGroupClient->sizePolicy().hasHeightForWidth());
        m_pGroupClient->setSizePolicy(sizePolicy1);
        m_pGroupClient->setCheckable(true);
        m_pGroupClient->setChecked(true);
        formLayout_3 = new QFormLayout(m_pGroupClient);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(m_pGroupClient);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        m_pLabelScreenName = new QLabel(m_pGroupClient);
        m_pLabelScreenName->setObjectName(QStringLiteral("m_pLabelScreenName"));
        m_pLabelScreenName->setText(QStringLiteral(""));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_pLabelScreenName);

        m_pLabelServerName = new QLabel(m_pGroupClient);
        m_pLabelServerName->setObjectName(QStringLiteral("m_pLabelServerName"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, m_pLabelServerName);

        m_pLineEditHostname = new QLineEdit(m_pGroupClient);
        m_pLineEditHostname->setObjectName(QStringLiteral("m_pLineEditHostname"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, m_pLineEditHostname);

        m_pCheckBoxAutoConfig = new QCheckBox(m_pGroupClient);
        m_pCheckBoxAutoConfig->setObjectName(QStringLiteral("m_pCheckBoxAutoConfig"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, m_pCheckBoxAutoConfig);

        m_pComboServerList = new QComboBox(m_pGroupClient);
        m_pComboServerList->setObjectName(QStringLiteral("m_pComboServerList"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pComboServerList->sizePolicy().hasHeightForWidth());
        m_pComboServerList->setSizePolicy(sizePolicy2);
        m_pComboServerList->setMinimumSize(QSize(120, 0));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, m_pComboServerList);


        verticalLayout_2->addWidget(m_pGroupClient);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_pLabelFingerprint = new QLabel(centralwidget);
        m_pLabelFingerprint->setObjectName(QStringLiteral("m_pLabelFingerprint"));
        sizePolicy2.setHeightForWidth(m_pLabelFingerprint->sizePolicy().hasHeightForWidth());
        m_pLabelFingerprint->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(m_pLabelFingerprint);

        m_pLabelLocalFingerprint = new QLabel(centralwidget);
        m_pLabelLocalFingerprint->setObjectName(QStringLiteral("m_pLabelLocalFingerprint"));
        m_pLabelLocalFingerprint->setTextFormat(Qt::PlainText);

        horizontalLayout_3->addWidget(m_pLabelLocalFingerprint);

        toolbutton_show_fingerprint = new QToolButton(centralwidget);
        toolbutton_show_fingerprint->setObjectName(QStringLiteral("toolbutton_show_fingerprint"));
        toolbutton_show_fingerprint->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(toolbutton_show_fingerprint);


        verticalLayout_2->addLayout(horizontalLayout_3);

        frame_fingerprint_details = new QFrame(centralwidget);
        frame_fingerprint_details->setObjectName(QStringLiteral("frame_fingerprint_details"));
        frame_fingerprint_details->setFrameShape(QFrame::StyledPanel);
        frame_fingerprint_details->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_fingerprint_details);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_sha256_randomart = new QLabel(frame_fingerprint_details);
        label_sha256_randomart->setObjectName(QStringLiteral("label_sha256_randomart"));
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        label_sha256_randomart->setFont(font);
        label_sha256_randomart->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_randomart, 1, 1, 1, 1);

        label_sha1 = new QLabel(frame_fingerprint_details);
        label_sha1->setObjectName(QStringLiteral("label_sha1"));

        gridLayout->addWidget(label_sha1, 2, 0, 1, 2);

        label_sha1_fingerprint_full = new QLabel(frame_fingerprint_details);
        label_sha1_fingerprint_full->setObjectName(QStringLiteral("label_sha1_fingerprint_full"));
        label_sha1_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha1_fingerprint_full, 3, 0, 1, 2);

        label_sha256 = new QLabel(frame_fingerprint_details);
        label_sha256->setObjectName(QStringLiteral("label_sha256"));

        gridLayout->addWidget(label_sha256, 0, 0, 1, 2);

        label_sha256_fingerprint_full = new QLabel(frame_fingerprint_details);
        label_sha256_fingerprint_full->setObjectName(QStringLiteral("label_sha256_fingerprint_full"));
        label_sha256_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_full, 1, 0, 1, 1);


        verticalLayout_2->addWidget(frame_fingerprint_details);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        m_pLabelPadlock = new QLabel(centralwidget);
        m_pLabelPadlock->setObjectName(QStringLiteral("m_pLabelPadlock"));
        m_pLabelPadlock->setEnabled(true);
        m_pLabelPadlock->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/padlock.png")));

        horizontalLayout->addWidget(m_pLabelPadlock);

        m_pStatusLabel = new QLabel(centralwidget);
        m_pStatusLabel->setObjectName(QStringLiteral("m_pStatusLabel"));

        horizontalLayout->addWidget(m_pStatusLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        m_pButtonReload = new QPushButton(centralwidget);
        m_pButtonReload->setObjectName(QStringLiteral("m_pButtonReload"));
        m_pButtonReload->setEnabled(false);

        horizontalLayout->addWidget(m_pButtonReload);

        m_pButtonToggleStart = new QPushButton(centralwidget);
        m_pButtonToggleStart->setObjectName(QStringLiteral("m_pButtonToggleStart"));

        horizontalLayout->addWidget(m_pButtonToggleStart);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindowBase->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        m_pLabelConfigurationFile->setBuddy(m_pLineEditConfigFile);
        m_pLabelServerName->setBuddy(m_pLineEditHostname);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindowBase);
        QObject::connect(m_pRadioExternalConfig, SIGNAL(toggled(bool)), m_pLineEditConfigFile, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioExternalConfig, SIGNAL(toggled(bool)), m_pButtonBrowseConfigFile, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioInternalConfig, SIGNAL(toggled(bool)), m_pButtonConfigureServer, SLOT(setEnabled(bool)));
        QObject::connect(m_pButtonToggleStart, SIGNAL(clicked()), m_pActionStartBarrier, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBase)
    {
        MainWindowBase->setWindowTitle(QApplication::translate("MainWindowBase", "Barrier", Q_NULLPTR));
        m_pActionAbout->setText(QApplication::translate("MainWindowBase", "&About Barrier...", Q_NULLPTR));
        m_pActionQuit->setText(QApplication::translate("MainWindowBase", "&Quit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        m_pActionQuit->setStatusTip(QApplication::translate("MainWindowBase", "Quit", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        m_pActionStartBarrier->setText(QApplication::translate("MainWindowBase", "&Start", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        m_pActionStartBarrier->setStatusTip(QApplication::translate("MainWindowBase", "Run", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        m_pActionStopBarrier->setText(QApplication::translate("MainWindowBase", "S&top", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        m_pActionStopBarrier->setStatusTip(QApplication::translate("MainWindowBase", "Stop", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        m_pActionMinimize->setText(QApplication::translate("MainWindowBase", "&Hide", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pActionMinimize->setToolTip(QApplication::translate("MainWindowBase", "Hide", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pActionRestore->setText(QApplication::translate("MainWindowBase", "&Show", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pActionRestore->setToolTip(QApplication::translate("MainWindowBase", "Show", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pActionSave->setText(QApplication::translate("MainWindowBase", "S&ave configuration", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        m_pActionSave->setStatusTip(QApplication::translate("MainWindowBase", "Save the interactively generated server configuration to a file.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        m_pActionSettings->setText(QApplication::translate("MainWindowBase", "Change &Settings", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        m_pActionSettings->setStatusTip(QApplication::translate("MainWindowBase", "Edit settings", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        m_pActionShowLog->setText(QApplication::translate("MainWindowBase", "Show &Log", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pActionShowLog->setToolTip(QApplication::translate("MainWindowBase", "Show Log", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pGroupServer->setTitle(QApplication::translate("MainWindowBase", "Ser&ver (share this computer's mouse and keyboard):", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowBase", "IP addresses:", Q_NULLPTR));
        m_pRadioInternalConfig->setText(QApplication::translate("MainWindowBase", "Configure interactively:", Q_NULLPTR));
        m_pButtonConfigureServer->setText(QApplication::translate("MainWindowBase", "&Configure Server...", Q_NULLPTR));
        m_pRadioExternalConfig->setText(QApplication::translate("MainWindowBase", "Use existing configuration:", Q_NULLPTR));
        m_pLabelConfigurationFile->setText(QApplication::translate("MainWindowBase", "&Configuration file:", Q_NULLPTR));
        m_pButtonBrowseConfigFile->setText(QApplication::translate("MainWindowBase", "&Browse...", Q_NULLPTR));
        m_pGroupClient->setTitle(QApplication::translate("MainWindowBase", "&Client (use another computer's mouse and keyboard):", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowBase", "Screen name:", Q_NULLPTR));
        m_pLabelServerName->setText(QApplication::translate("MainWindowBase", "&Server IP:", Q_NULLPTR));
        m_pCheckBoxAutoConfig->setText(QApplication::translate("MainWindowBase", "Auto config", Q_NULLPTR));
        m_pLabelFingerprint->setText(QApplication::translate("MainWindowBase", "SSL Fingerprint:", Q_NULLPTR));
        m_pLabelLocalFingerprint->setText(QString());
        toolbutton_show_fingerprint->setText(QApplication::translate("MainWindowBase", "...", Q_NULLPTR));
        label_sha256_randomart->setText(QString());
        label_sha1->setText(QApplication::translate("MainWindowBase", "SHA1 (deprecated, compare to old clients and servers only):", Q_NULLPTR));
        label_sha1_fingerprint_full->setText(QString());
        label_sha256->setText(QApplication::translate("MainWindowBase", "SHA256:", Q_NULLPTR));
        label_sha256_fingerprint_full->setText(QString());
        m_pLabelPadlock->setText(QString());
        m_pStatusLabel->setText(QApplication::translate("MainWindowBase", "Ready", Q_NULLPTR));
        m_pButtonReload->setText(QApplication::translate("MainWindowBase", "&Reload", Q_NULLPTR));
        m_pButtonToggleStart->setText(QApplication::translate("MainWindowBase", "&Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBase: public Ui_MainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBASE_H
