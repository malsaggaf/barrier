/********************************************************************************
** Form generated from reading UI file 'ServerConfigDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONFIGDIALOGBASE_H
#define UI_SERVERCONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "NewScreenWidget.h"
#include "ScreenSetupView.h"
#include "TrashScreenWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ServerConfigDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *m_pTabWidget;
    QWidget *m_pTabScreens;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    TrashScreenWidget *m_pTrashScreenWidget;
    QLabel *label_2;
    NewScreenWidget *m_pLabelNewScreenWidget;
    ScreenSetupView *m_pScreenSetupView;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QWidget *m_pTabHotkeys;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *m_pListHotkeys;
    QPushButton *m_pButtonNewHotkey;
    QPushButton *m_pButtonEditHotkey;
    QPushButton *m_pButtonRemoveHotkey;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QListWidget *m_pListActions;
    QPushButton *m_pButtonNewAction;
    QPushButton *m_pButtonEditAction;
    QPushButton *m_pButtonRemoveAction;
    QSpacerItem *spacerItem2;
    QWidget *m_pTabAdvanced;
    QGridLayout *gridLayout2;
    QGroupBox *m_pGroupSwitch;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QCheckBox *m_pCheckBoxSwitchDelay;
    QSpacerItem *spacerItem3;
    QSpinBox *m_pSpinBoxSwitchDelay;
    QLabel *m_pLabel_14;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout3;
    QCheckBox *m_pCheckBoxSwitchDoubleTap;
    QSpacerItem *spacerItem4;
    QSpinBox *m_pSpinBoxSwitchDoubleTap;
    QLabel *m_pLabel_15;
    QLabel *label_4;
    QSpacerItem *spacerItem5;
    QGroupBox *m_pGroupOptions;
    QGridLayout *gridLayout3;
    QCheckBox *m_pCheckBoxWin32KeepForeground;
    QCheckBox *m_pCheckBoxRelativeMouseMoves;
    QCheckBox *m_pCheckBoxScreenSaverSync;
    QHBoxLayout *hboxLayout4;
    QCheckBox *m_pCheckBoxHeartbeat;
    QSpacerItem *spacerItem6;
    QSpinBox *m_pSpinBoxHeartbeat;
    QLabel *m_pLabel_16;
    QSpacerItem *spacerItem7;
    QCheckBox *m_pCheckBoxEnableDragAndDrop;
    QCheckBox *m_pCheckBoxIgnoreAutoConfigClient;
    QCheckBox *m_pCheckBoxEnableClipboard;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout4;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout5;
    QLabel *label;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QSpacerItem *spacerItem9;
    QSpacerItem *spacerItem10;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ServerConfigDialogBase)
    {
        if (ServerConfigDialogBase->objectName().isEmpty())
            ServerConfigDialogBase->setObjectName(QStringLiteral("ServerConfigDialogBase"));
        ServerConfigDialogBase->resize(795, 534);
        vboxLayout = new QVBoxLayout(ServerConfigDialogBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        m_pTabWidget = new QTabWidget(ServerConfigDialogBase);
        m_pTabWidget->setObjectName(QStringLiteral("m_pTabWidget"));
        m_pTabScreens = new QWidget();
        m_pTabScreens->setObjectName(QStringLiteral("m_pTabScreens"));
        vboxLayout1 = new QVBoxLayout(m_pTabScreens);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        m_pTrashScreenWidget = new TrashScreenWidget(m_pTabScreens);
        m_pTrashScreenWidget->setObjectName(QStringLiteral("m_pTrashScreenWidget"));
        m_pTrashScreenWidget->setAcceptDrops(true);
        m_pTrashScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pTrashScreenWidget->setFrameShadow(QFrame::Raised);
        m_pTrashScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/user-trash.png")));

        hboxLayout->addWidget(m_pTrashScreenWidget);

        label_2 = new QLabel(m_pTabScreens);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        hboxLayout->addWidget(label_2);

        m_pLabelNewScreenWidget = new NewScreenWidget(m_pTabScreens);
        m_pLabelNewScreenWidget->setObjectName(QStringLiteral("m_pLabelNewScreenWidget"));
        m_pLabelNewScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pLabelNewScreenWidget->setFrameShadow(QFrame::Raised);
        m_pLabelNewScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/video-display.png")));

        hboxLayout->addWidget(m_pLabelNewScreenWidget);


        vboxLayout1->addLayout(hboxLayout);

        m_pScreenSetupView = new ScreenSetupView(m_pTabScreens);
        m_pScreenSetupView->setObjectName(QStringLiteral("m_pScreenSetupView"));
        m_pScreenSetupView->setMinimumSize(QSize(0, 273));
        m_pScreenSetupView->setMaximumSize(QSize(16777215, 273));
        m_pScreenSetupView->setAcceptDrops(true);
        m_pScreenSetupView->setAutoFillBackground(false);
        m_pScreenSetupView->setFrameShape(QFrame::StyledPanel);
        m_pScreenSetupView->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(m_pScreenSetupView);

        label_3 = new QLabel(m_pTabScreens);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        vboxLayout1->addWidget(label_3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        m_pTabWidget->addTab(m_pTabScreens, QString());
        m_pTabHotkeys = new QWidget();
        m_pTabHotkeys->setObjectName(QStringLiteral("m_pTabHotkeys"));
        hboxLayout1 = new QHBoxLayout(m_pTabHotkeys);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        groupBox = new QGroupBox(m_pTabHotkeys);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_pListHotkeys = new QListWidget(groupBox);
        m_pListHotkeys->setObjectName(QStringLiteral("m_pListHotkeys"));

        gridLayout->addWidget(m_pListHotkeys, 0, 0, 4, 1);

        m_pButtonNewHotkey = new QPushButton(groupBox);
        m_pButtonNewHotkey->setObjectName(QStringLiteral("m_pButtonNewHotkey"));
        m_pButtonNewHotkey->setEnabled(true);

        gridLayout->addWidget(m_pButtonNewHotkey, 0, 1, 1, 1);

        m_pButtonEditHotkey = new QPushButton(groupBox);
        m_pButtonEditHotkey->setObjectName(QStringLiteral("m_pButtonEditHotkey"));
        m_pButtonEditHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonEditHotkey, 1, 1, 1, 1);

        m_pButtonRemoveHotkey = new QPushButton(groupBox);
        m_pButtonRemoveHotkey->setObjectName(QStringLiteral("m_pButtonRemoveHotkey"));
        m_pButtonRemoveHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveHotkey, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(75, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(m_pTabHotkeys);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        m_pListActions = new QListWidget(groupBox_2);
        m_pListActions->setObjectName(QStringLiteral("m_pListActions"));

        gridLayout1->addWidget(m_pListActions, 0, 0, 4, 1);

        m_pButtonNewAction = new QPushButton(groupBox_2);
        m_pButtonNewAction->setObjectName(QStringLiteral("m_pButtonNewAction"));
        m_pButtonNewAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonNewAction, 0, 1, 1, 1);

        m_pButtonEditAction = new QPushButton(groupBox_2);
        m_pButtonEditAction->setObjectName(QStringLiteral("m_pButtonEditAction"));
        m_pButtonEditAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonEditAction, 1, 1, 1, 1);

        m_pButtonRemoveAction = new QPushButton(groupBox_2);
        m_pButtonRemoveAction->setObjectName(QStringLiteral("m_pButtonRemoveAction"));
        m_pButtonRemoveAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonRemoveAction, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem2, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox_2);

        m_pTabWidget->addTab(m_pTabHotkeys, QString());
        m_pTabAdvanced = new QWidget();
        m_pTabAdvanced->setObjectName(QStringLiteral("m_pTabAdvanced"));
        gridLayout2 = new QGridLayout(m_pTabAdvanced);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        m_pGroupSwitch = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitch->setObjectName(QStringLiteral("m_pGroupSwitch"));
        vboxLayout2 = new QVBoxLayout(m_pGroupSwitch);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        m_pCheckBoxSwitchDelay = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDelay->setObjectName(QStringLiteral("m_pCheckBoxSwitchDelay"));
        m_pCheckBoxSwitchDelay->setEnabled(true);

        hboxLayout2->addWidget(m_pCheckBoxSwitchDelay);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        m_pSpinBoxSwitchDelay = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDelay->setObjectName(QStringLiteral("m_pSpinBoxSwitchDelay"));
        m_pSpinBoxSwitchDelay->setEnabled(false);
        m_pSpinBoxSwitchDelay->setMinimum(10);
        m_pSpinBoxSwitchDelay->setMaximum(10000);
        m_pSpinBoxSwitchDelay->setSingleStep(10);
        m_pSpinBoxSwitchDelay->setValue(250);

        hboxLayout2->addWidget(m_pSpinBoxSwitchDelay);

        m_pLabel_14 = new QLabel(m_pGroupSwitch);
        m_pLabel_14->setObjectName(QStringLiteral("m_pLabel_14"));

        hboxLayout2->addWidget(m_pLabel_14);


        vboxLayout2->addLayout(hboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        m_pCheckBoxSwitchDoubleTap = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDoubleTap->setObjectName(QStringLiteral("m_pCheckBoxSwitchDoubleTap"));
        m_pCheckBoxSwitchDoubleTap->setEnabled(true);

        hboxLayout3->addWidget(m_pCheckBoxSwitchDoubleTap);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        m_pSpinBoxSwitchDoubleTap = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDoubleTap->setObjectName(QStringLiteral("m_pSpinBoxSwitchDoubleTap"));
        m_pSpinBoxSwitchDoubleTap->setEnabled(false);
        m_pSpinBoxSwitchDoubleTap->setMinimum(10);
        m_pSpinBoxSwitchDoubleTap->setMaximum(10000);
        m_pSpinBoxSwitchDoubleTap->setSingleStep(10);
        m_pSpinBoxSwitchDoubleTap->setValue(250);

        hboxLayout3->addWidget(m_pSpinBoxSwitchDoubleTap);

        m_pLabel_15 = new QLabel(m_pGroupSwitch);
        m_pLabel_15->setObjectName(QStringLiteral("m_pLabel_15"));

        hboxLayout3->addWidget(m_pLabel_15);


        vboxLayout3->addLayout(hboxLayout3);

        label_4 = new QLabel(m_pGroupSwitch);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        vboxLayout3->addWidget(label_4);


        vboxLayout2->addLayout(vboxLayout3);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem5);


        gridLayout2->addWidget(m_pGroupSwitch, 0, 0, 1, 1);

        m_pGroupOptions = new QGroupBox(m_pTabAdvanced);
        m_pGroupOptions->setObjectName(QStringLiteral("m_pGroupOptions"));
        gridLayout3 = new QGridLayout(m_pGroupOptions);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        m_pCheckBoxWin32KeepForeground = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxWin32KeepForeground->setObjectName(QStringLiteral("m_pCheckBoxWin32KeepForeground"));
        m_pCheckBoxWin32KeepForeground->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxWin32KeepForeground, 3, 0, 1, 1);

        m_pCheckBoxRelativeMouseMoves = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxRelativeMouseMoves->setObjectName(QStringLiteral("m_pCheckBoxRelativeMouseMoves"));
        m_pCheckBoxRelativeMouseMoves->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxRelativeMouseMoves, 1, 0, 1, 1);

        m_pCheckBoxScreenSaverSync = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxScreenSaverSync->setObjectName(QStringLiteral("m_pCheckBoxScreenSaverSync"));
        m_pCheckBoxScreenSaverSync->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxScreenSaverSync, 2, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        m_pCheckBoxHeartbeat = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxHeartbeat->setObjectName(QStringLiteral("m_pCheckBoxHeartbeat"));
        m_pCheckBoxHeartbeat->setEnabled(true);

        hboxLayout4->addWidget(m_pCheckBoxHeartbeat);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        m_pSpinBoxHeartbeat = new QSpinBox(m_pGroupOptions);
        m_pSpinBoxHeartbeat->setObjectName(QStringLiteral("m_pSpinBoxHeartbeat"));
        m_pSpinBoxHeartbeat->setEnabled(false);
        m_pSpinBoxHeartbeat->setMinimum(1000);
        m_pSpinBoxHeartbeat->setMaximum(30000);
        m_pSpinBoxHeartbeat->setSingleStep(1000);
        m_pSpinBoxHeartbeat->setValue(5000);

        hboxLayout4->addWidget(m_pSpinBoxHeartbeat);

        m_pLabel_16 = new QLabel(m_pGroupOptions);
        m_pLabel_16->setObjectName(QStringLiteral("m_pLabel_16"));

        hboxLayout4->addWidget(m_pLabel_16);


        gridLayout3->addLayout(hboxLayout4, 0, 0, 1, 1);

        spacerItem7 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem7, 7, 0, 1, 1);

        m_pCheckBoxEnableDragAndDrop = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableDragAndDrop->setObjectName(QStringLiteral("m_pCheckBoxEnableDragAndDrop"));

        gridLayout3->addWidget(m_pCheckBoxEnableDragAndDrop, 5, 0, 1, 1);

        m_pCheckBoxIgnoreAutoConfigClient = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxIgnoreAutoConfigClient->setObjectName(QStringLiteral("m_pCheckBoxIgnoreAutoConfigClient"));

        gridLayout3->addWidget(m_pCheckBoxIgnoreAutoConfigClient, 4, 0, 1, 1);

        m_pCheckBoxEnableClipboard = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableClipboard->setObjectName(QStringLiteral("m_pCheckBoxEnableClipboard"));
        m_pCheckBoxEnableClipboard->setChecked(true);

        gridLayout3->addWidget(m_pCheckBoxEnableClipboard, 6, 0, 1, 1);


        gridLayout2->addWidget(m_pGroupOptions, 0, 1, 1, 1);

        m_pGroupSwitchCorners = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitchCorners->setObjectName(QStringLiteral("m_pGroupSwitchCorners"));
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout4 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName(QStringLiteral("m_pCheckBoxCornerTopLeft"));

        gridLayout4->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 2);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName(QStringLiteral("m_pCheckBoxCornerTopRight"));

        gridLayout4->addWidget(m_pCheckBoxCornerTopRight, 0, 2, 1, 2);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName(QStringLiteral("m_pCheckBoxCornerBottomLeft"));

        gridLayout4->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 2);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName(QStringLiteral("m_pCheckBoxCornerBottomRight"));

        gridLayout4->addWidget(m_pCheckBoxCornerBottomRight, 1, 2, 1, 2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem8, 2, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout5->addWidget(label);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName(QStringLiteral("m_pSpinBoxSwitchCornerSize"));

        hboxLayout5->addWidget(m_pSpinBoxSwitchCornerSize);


        gridLayout4->addLayout(hboxLayout5, 2, 1, 1, 2);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem9, 2, 3, 1, 1);


        gridLayout2->addWidget(m_pGroupSwitchCorners, 1, 0, 1, 2);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem10, 2, 0, 1, 1);

        m_pTabWidget->addTab(m_pTabAdvanced, QString());

        vboxLayout->addWidget(m_pTabWidget);

        m_pButtonBox = new QDialogButtonBox(ServerConfigDialogBase);
        m_pButtonBox->setObjectName(QStringLiteral("m_pButtonBox"));
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(ServerConfigDialogBase);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), ServerConfigDialogBase, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), ServerConfigDialogBase, SLOT(reject()));
        QObject::connect(m_pCheckBoxSwitchDelay, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDelay, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxSwitchDoubleTap, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDoubleTap, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxHeartbeat, SIGNAL(toggled(bool)), m_pSpinBoxHeartbeat, SLOT(setEnabled(bool)));
        QObject::connect(m_pListHotkeys, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditHotkey, SLOT(click()));
        QObject::connect(m_pListActions, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditAction, SLOT(click()));

        m_pTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ServerConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ServerConfigDialogBase)
    {
        ServerConfigDialogBase->setWindowTitle(QApplication::translate("ServerConfigDialogBase", "Server Configuration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pTrashScreenWidget->setToolTip(QApplication::translate("ServerConfigDialogBase", "Drag a screen from the grid to the trashcan to remove it.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pTrashScreenWidget->setText(QString());
        label_2->setText(QApplication::translate("ServerConfigDialogBase", "Configure the layout of your barrier server configuration.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_pLabelNewScreenWidget->setToolTip(QApplication::translate("ServerConfigDialogBase", "Drag this button to the grid to add a new screen.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pLabelNewScreenWidget->setText(QString());
        label_3->setText(QApplication::translate("ServerConfigDialogBase", "Drag new screens to the grid or move existing ones around.\n"
"Drag a screen to the trashcan to delete it.\n"
"Double click on a screen to edit its settings.", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabScreens), QApplication::translate("ServerConfigDialogBase", "Screens and links", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ServerConfigDialogBase", "&Hotkeys", Q_NULLPTR));
        m_pButtonNewHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&New", Q_NULLPTR));
        m_pButtonEditHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&Edit", Q_NULLPTR));
        m_pButtonRemoveHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&Remove", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ServerConfigDialogBase", "A&ctions", Q_NULLPTR));
        m_pButtonNewAction->setText(QApplication::translate("ServerConfigDialogBase", "Ne&w", Q_NULLPTR));
        m_pButtonEditAction->setText(QApplication::translate("ServerConfigDialogBase", "E&dit", Q_NULLPTR));
        m_pButtonRemoveAction->setText(QApplication::translate("ServerConfigDialogBase", "Re&move", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabHotkeys), QApplication::translate("ServerConfigDialogBase", "Hotkeys", Q_NULLPTR));
        m_pGroupSwitch->setTitle(QApplication::translate("ServerConfigDialogBase", "&Switch", Q_NULLPTR));
        m_pCheckBoxSwitchDelay->setText(QApplication::translate("ServerConfigDialogBase", "Switch &after waiting", Q_NULLPTR));
        m_pLabel_14->setText(QApplication::translate("ServerConfigDialogBase", "ms", Q_NULLPTR));
        m_pCheckBoxSwitchDoubleTap->setText(QApplication::translate("ServerConfigDialogBase", "Switch on double &tap within", Q_NULLPTR));
        m_pLabel_15->setText(QApplication::translate("ServerConfigDialogBase", "ms", Q_NULLPTR));
        label_4->setText(QApplication::translate("ServerConfigDialogBase", "Bump against the screen edge with the mouse pointer twice in quick succession.", Q_NULLPTR));
        m_pGroupOptions->setTitle(QApplication::translate("ServerConfigDialogBase", "&Options", Q_NULLPTR));
        m_pCheckBoxWin32KeepForeground->setText(QApplication::translate("ServerConfigDialogBase", "Don't take &foreground window on Windows servers", Q_NULLPTR));
        m_pCheckBoxRelativeMouseMoves->setText(QApplication::translate("ServerConfigDialogBase", "Use &relative mouse moves", Q_NULLPTR));
        m_pCheckBoxScreenSaverSync->setText(QApplication::translate("ServerConfigDialogBase", "S&ynchronize screen savers", Q_NULLPTR));
        m_pCheckBoxHeartbeat->setText(QApplication::translate("ServerConfigDialogBase", "&Check clients every", Q_NULLPTR));
        m_pLabel_16->setText(QApplication::translate("ServerConfigDialogBase", "ms", Q_NULLPTR));
        m_pCheckBoxEnableDragAndDrop->setText(QApplication::translate("ServerConfigDialogBase", "Enable drag and drop file transfers", Q_NULLPTR));
        m_pCheckBoxIgnoreAutoConfigClient->setText(QApplication::translate("ServerConfigDialogBase", "Ignore auto config clients", Q_NULLPTR));
        m_pCheckBoxEnableClipboard->setText(QApplication::translate("ServerConfigDialogBase", "Enable clipboard sharing", Q_NULLPTR));
        m_pGroupSwitchCorners->setTitle(QApplication::translate("ServerConfigDialogBase", "&Dead corners", Q_NULLPTR));
        m_pCheckBoxCornerTopLeft->setText(QApplication::translate("ServerConfigDialogBase", "To&p-left", Q_NULLPTR));
        m_pCheckBoxCornerTopRight->setText(QApplication::translate("ServerConfigDialogBase", "Top-rig&ht", Q_NULLPTR));
        m_pCheckBoxCornerBottomLeft->setText(QApplication::translate("ServerConfigDialogBase", "&Bottom-left", Q_NULLPTR));
        m_pCheckBoxCornerBottomRight->setText(QApplication::translate("ServerConfigDialogBase", "Bottom-ri&ght", Q_NULLPTR));
        label->setText(QApplication::translate("ServerConfigDialogBase", "Cor&ner Size:", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvanced), QApplication::translate("ServerConfigDialogBase", "Advanced server settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServerConfigDialogBase: public Ui_ServerConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONFIGDIALOGBASE_H
