/********************************************************************************
** Form generated from reading UI file 'ActionDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONDIALOGBASE_H
#define UI_ACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "KeySequenceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ActionDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *m_pGroupType;
    QVBoxLayout *vboxLayout1;
    QRadioButton *m_pRadioPress;
    QRadioButton *m_pRadioRelease;
    QRadioButton *m_pRadioPressAndRelease;
    KeySequenceWidget *m_pKeySequenceWidgetHotkey;
    QGroupBox *m_pGroupBoxScreens;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QListWidget *m_pListScreens;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QRadioButton *m_pRadioSwitchToScreen;
    QSpacerItem *spacerItem1;
    QComboBox *m_pComboSwitchToScreen;
    QHBoxLayout *hboxLayout2;
    QRadioButton *m_pRadioToggleScreen;
    QHBoxLayout *hboxLayout3;
    QRadioButton *m_pRadioSwitchInDirection;
    QSpacerItem *spacerItem2;
    QComboBox *m_pComboSwitchInDirection;
    QHBoxLayout *hboxLayout4;
    QRadioButton *m_pRadioLockCursorToScreen;
    QSpacerItem *spacerItem3;
    QComboBox *m_pComboLockCursorToScreen;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout5;
    QRadioButton *m_pRadioHotkeyPressed;
    QRadioButton *m_pRadioHotkeyReleased;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActionDialogBase)
    {
        if (ActionDialogBase->objectName().isEmpty())
            ActionDialogBase->setObjectName(QStringLiteral("ActionDialogBase"));
        ActionDialogBase->resize(372, 484);
        vboxLayout = new QVBoxLayout(ActionDialogBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        m_pGroupType = new QGroupBox(ActionDialogBase);
        m_pGroupType->setObjectName(QStringLiteral("m_pGroupType"));
        vboxLayout1 = new QVBoxLayout(m_pGroupType);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        m_pRadioPress = new QRadioButton(m_pGroupType);
        m_pRadioPress->setObjectName(QStringLiteral("m_pRadioPress"));
        m_pRadioPress->setChecked(true);

        vboxLayout1->addWidget(m_pRadioPress);

        m_pRadioRelease = new QRadioButton(m_pGroupType);
        m_pRadioRelease->setObjectName(QStringLiteral("m_pRadioRelease"));

        vboxLayout1->addWidget(m_pRadioRelease);

        m_pRadioPressAndRelease = new QRadioButton(m_pGroupType);
        m_pRadioPressAndRelease->setObjectName(QStringLiteral("m_pRadioPressAndRelease"));

        vboxLayout1->addWidget(m_pRadioPressAndRelease);

        m_pKeySequenceWidgetHotkey = new KeySequenceWidget(m_pGroupType);
        m_pKeySequenceWidgetHotkey->setObjectName(QStringLiteral("m_pKeySequenceWidgetHotkey"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pKeySequenceWidgetHotkey->sizePolicy().hasHeightForWidth());
        m_pKeySequenceWidgetHotkey->setSizePolicy(sizePolicy);
        m_pKeySequenceWidgetHotkey->setMinimumSize(QSize(256, 0));

        vboxLayout1->addWidget(m_pKeySequenceWidgetHotkey);

        m_pGroupBoxScreens = new QGroupBox(m_pGroupType);
        m_pGroupBoxScreens->setObjectName(QStringLiteral("m_pGroupBoxScreens"));
        m_pGroupBoxScreens->setFlat(true);
        m_pGroupBoxScreens->setCheckable(true);
        hboxLayout = new QHBoxLayout(m_pGroupBoxScreens);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_pListScreens = new QListWidget(m_pGroupBoxScreens);
        m_pListScreens->setObjectName(QStringLiteral("m_pListScreens"));
        m_pListScreens->setMinimumSize(QSize(128, 64));
        m_pListScreens->setSelectionMode(QAbstractItemView::ExtendedSelection);

        hboxLayout->addWidget(m_pListScreens);


        vboxLayout1->addWidget(m_pGroupBoxScreens);

        line = new QFrame(m_pGroupType);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        m_pRadioSwitchToScreen = new QRadioButton(m_pGroupType);
        m_pRadioSwitchToScreen->setObjectName(QStringLiteral("m_pRadioSwitchToScreen"));

        hboxLayout1->addWidget(m_pRadioSwitchToScreen);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        m_pComboSwitchToScreen = new QComboBox(m_pGroupType);
        m_pComboSwitchToScreen->setObjectName(QStringLiteral("m_pComboSwitchToScreen"));
        m_pComboSwitchToScreen->setEnabled(false);

        hboxLayout1->addWidget(m_pComboSwitchToScreen);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        m_pRadioToggleScreen = new QRadioButton(m_pGroupType);
        m_pRadioToggleScreen->setObjectName(QStringLiteral("m_pRadioToggleScreen"));

        hboxLayout2->addWidget(m_pRadioToggleScreen);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        m_pRadioSwitchInDirection = new QRadioButton(m_pGroupType);
        m_pRadioSwitchInDirection->setObjectName(QStringLiteral("m_pRadioSwitchInDirection"));

        hboxLayout3->addWidget(m_pRadioSwitchInDirection);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        m_pComboSwitchInDirection = new QComboBox(m_pGroupType);
        m_pComboSwitchInDirection->setObjectName(QStringLiteral("m_pComboSwitchInDirection"));
        m_pComboSwitchInDirection->setEnabled(false);

        hboxLayout3->addWidget(m_pComboSwitchInDirection);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        m_pRadioLockCursorToScreen = new QRadioButton(m_pGroupType);
        m_pRadioLockCursorToScreen->setObjectName(QStringLiteral("m_pRadioLockCursorToScreen"));

        hboxLayout4->addWidget(m_pRadioLockCursorToScreen);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        m_pComboLockCursorToScreen = new QComboBox(m_pGroupType);
        m_pComboLockCursorToScreen->setObjectName(QStringLiteral("m_pComboLockCursorToScreen"));
        m_pComboLockCursorToScreen->setEnabled(false);

        hboxLayout4->addWidget(m_pComboLockCursorToScreen);


        vboxLayout1->addLayout(hboxLayout4);


        vboxLayout->addWidget(m_pGroupType);

        groupBox_2 = new QGroupBox(ActionDialogBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        hboxLayout5 = new QHBoxLayout(groupBox_2);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        m_pRadioHotkeyPressed = new QRadioButton(groupBox_2);
        m_pRadioHotkeyPressed->setObjectName(QStringLiteral("m_pRadioHotkeyPressed"));
        m_pRadioHotkeyPressed->setChecked(true);

        hboxLayout5->addWidget(m_pRadioHotkeyPressed);

        m_pRadioHotkeyReleased = new QRadioButton(groupBox_2);
        m_pRadioHotkeyReleased->setObjectName(QStringLiteral("m_pRadioHotkeyReleased"));

        hboxLayout5->addWidget(m_pRadioHotkeyReleased);


        vboxLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(ActionDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ActionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), ActionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ActionDialogBase, SLOT(reject()));
        QObject::connect(m_pGroupType, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioSwitchInDirection, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioLockCursorToScreen, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioPress, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioRelease, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioPressAndRelease, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioSwitchToScreen, SIGNAL(toggled(bool)), m_pComboSwitchToScreen, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioSwitchInDirection, SIGNAL(toggled(bool)), m_pComboSwitchInDirection, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioLockCursorToScreen, SIGNAL(toggled(bool)), m_pComboLockCursorToScreen, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioPress, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioSwitchToScreen, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioRelease, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioPressAndRelease, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioSwitchInDirection, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioLockCursorToScreen, SIGNAL(toggled(bool)), m_pGroupBoxScreens, SLOT(setDisabled(bool)));
        QObject::connect(m_pRadioSwitchToScreen, SIGNAL(toggled(bool)), m_pKeySequenceWidgetHotkey, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(ActionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ActionDialogBase)
    {
        ActionDialogBase->setWindowTitle(QApplication::translate("ActionDialogBase", "Configure Action", Q_NULLPTR));
        m_pGroupType->setTitle(QApplication::translate("ActionDialogBase", "Choose the action to perform", Q_NULLPTR));
        m_pRadioPress->setText(QApplication::translate("ActionDialogBase", "Press a hotkey", Q_NULLPTR));
        m_pRadioRelease->setText(QApplication::translate("ActionDialogBase", "Release a hotkey", Q_NULLPTR));
        m_pRadioPressAndRelease->setText(QApplication::translate("ActionDialogBase", "Press and release a hotkey", Q_NULLPTR));
        m_pKeySequenceWidgetHotkey->setText(QString());
        m_pGroupBoxScreens->setTitle(QApplication::translate("ActionDialogBase", "only on these screens", Q_NULLPTR));
        m_pRadioSwitchToScreen->setText(QApplication::translate("ActionDialogBase", "Switch to screen", Q_NULLPTR));
        m_pRadioToggleScreen->setText(QApplication::translate("ActionDialogBase", "Toggle screen", Q_NULLPTR));
        m_pRadioSwitchInDirection->setText(QApplication::translate("ActionDialogBase", "Switch in direction", Q_NULLPTR));
        m_pComboSwitchInDirection->clear();
        m_pComboSwitchInDirection->insertItems(0, QStringList()
         << QApplication::translate("ActionDialogBase", "left", Q_NULLPTR)
         << QApplication::translate("ActionDialogBase", "right", Q_NULLPTR)
         << QApplication::translate("ActionDialogBase", "up", Q_NULLPTR)
         << QApplication::translate("ActionDialogBase", "down", Q_NULLPTR)
        );
        m_pRadioLockCursorToScreen->setText(QApplication::translate("ActionDialogBase", "Lock cursor to screen", Q_NULLPTR));
        m_pComboLockCursorToScreen->clear();
        m_pComboLockCursorToScreen->insertItems(0, QStringList()
         << QApplication::translate("ActionDialogBase", "toggle", Q_NULLPTR)
         << QApplication::translate("ActionDialogBase", "on", Q_NULLPTR)
         << QApplication::translate("ActionDialogBase", "off", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("ActionDialogBase", "This action is performed when", Q_NULLPTR));
        m_pRadioHotkeyPressed->setText(QApplication::translate("ActionDialogBase", "the hotkey is pressed", Q_NULLPTR));
        m_pRadioHotkeyReleased->setText(QApplication::translate("ActionDialogBase", "the hotkey is released", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ActionDialogBase: public Ui_ActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONDIALOGBASE_H
