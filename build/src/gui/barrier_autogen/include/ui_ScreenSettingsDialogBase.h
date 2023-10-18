/********************************************************************************
** Form generated from reading UI file 'ScreenSettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSETTINGSDIALOGBASE_H
#define UI_SCREENSETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreenSettingsDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_7;
    QLineEdit *m_pLineEditName;
    QHBoxLayout *hboxLayout1;
    QGroupBox *m_pGroupAliases;
    QGridLayout *gridLayout;
    QLineEdit *m_pLineEditAlias;
    QPushButton *m_pButtonAddAlias;
    QListWidget *m_pListAliases;
    QPushButton *m_pButtonRemoveAlias;
    QSpacerItem *spacerItem;
    QGroupBox *m_pGroupModifiers;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QComboBox *m_pComboBoxShift;
    QLabel *label_3;
    QComboBox *m_pComboBoxCtrl;
    QLabel *label_4;
    QComboBox *m_pComboBoxAlt;
    QLabel *label_5;
    QComboBox *m_pComboBoxMeta;
    QLabel *label_6;
    QComboBox *m_pComboBoxSuper;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout2;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QHBoxLayout *hboxLayout3;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QGroupBox *m_pGroupFixes;
    QGridLayout *gridLayout3;
    QCheckBox *m_pCheckBoxCapsLock;
    QCheckBox *m_pCheckBoxNumLock;
    QCheckBox *m_pCheckBoxScrollLock;
    QCheckBox *m_pCheckBoxXTest;
    QCheckBox *m_pCheckBoxPreserveFocus;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ScreenSettingsDialogBase)
    {
        if (ScreenSettingsDialogBase->objectName().isEmpty())
            ScreenSettingsDialogBase->setObjectName(QStringLiteral("ScreenSettingsDialogBase"));
        ScreenSettingsDialogBase->resize(434, 437);
        vboxLayout = new QVBoxLayout(ScreenSettingsDialogBase);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_7 = new QLabel(ScreenSettingsDialogBase);
        label_7->setObjectName(QStringLiteral("label_7"));

        hboxLayout->addWidget(label_7);

        m_pLineEditName = new QLineEdit(ScreenSettingsDialogBase);
        m_pLineEditName->setObjectName(QStringLiteral("m_pLineEditName"));

        hboxLayout->addWidget(m_pLineEditName);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        m_pGroupAliases = new QGroupBox(ScreenSettingsDialogBase);
        m_pGroupAliases->setObjectName(QStringLiteral("m_pGroupAliases"));
        m_pGroupAliases->setEnabled(true);
        m_pGroupAliases->setChecked(false);
        gridLayout = new QGridLayout(m_pGroupAliases);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_pLineEditAlias = new QLineEdit(m_pGroupAliases);
        m_pLineEditAlias->setObjectName(QStringLiteral("m_pLineEditAlias"));

        gridLayout->addWidget(m_pLineEditAlias, 0, 0, 1, 1);

        m_pButtonAddAlias = new QPushButton(m_pGroupAliases);
        m_pButtonAddAlias->setObjectName(QStringLiteral("m_pButtonAddAlias"));
        m_pButtonAddAlias->setEnabled(false);

        gridLayout->addWidget(m_pButtonAddAlias, 0, 1, 1, 1);

        m_pListAliases = new QListWidget(m_pGroupAliases);
        m_pListAliases->setObjectName(QStringLiteral("m_pListAliases"));
        m_pListAliases->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(m_pListAliases, 1, 0, 2, 1);

        m_pButtonRemoveAlias = new QPushButton(m_pGroupAliases);
        m_pButtonRemoveAlias->setObjectName(QStringLiteral("m_pButtonRemoveAlias"));
        m_pButtonRemoveAlias->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveAlias, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 126, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);


        hboxLayout1->addWidget(m_pGroupAliases);

        m_pGroupModifiers = new QGroupBox(ScreenSettingsDialogBase);
        m_pGroupModifiers->setObjectName(QStringLiteral("m_pGroupModifiers"));
        m_pGroupModifiers->setChecked(false);
        gridLayout1 = new QGridLayout(m_pGroupModifiers);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_2 = new QLabel(m_pGroupModifiers);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        m_pComboBoxShift = new QComboBox(m_pGroupModifiers);
        m_pComboBoxShift->setObjectName(QStringLiteral("m_pComboBoxShift"));

        gridLayout1->addWidget(m_pComboBoxShift, 0, 1, 1, 1);

        label_3 = new QLabel(m_pGroupModifiers);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        m_pComboBoxCtrl = new QComboBox(m_pGroupModifiers);
        m_pComboBoxCtrl->setObjectName(QStringLiteral("m_pComboBoxCtrl"));

        gridLayout1->addWidget(m_pComboBoxCtrl, 1, 1, 1, 1);

        label_4 = new QLabel(m_pGroupModifiers);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        m_pComboBoxAlt = new QComboBox(m_pGroupModifiers);
        m_pComboBoxAlt->setObjectName(QStringLiteral("m_pComboBoxAlt"));

        gridLayout1->addWidget(m_pComboBoxAlt, 2, 1, 1, 1);

        label_5 = new QLabel(m_pGroupModifiers);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout1->addWidget(label_5, 3, 0, 1, 1);

        m_pComboBoxMeta = new QComboBox(m_pGroupModifiers);
        m_pComboBoxMeta->setObjectName(QStringLiteral("m_pComboBoxMeta"));

        gridLayout1->addWidget(m_pComboBoxMeta, 3, 1, 1, 1);

        label_6 = new QLabel(m_pGroupModifiers);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout1->addWidget(label_6, 4, 0, 1, 1);

        m_pComboBoxSuper = new QComboBox(m_pGroupModifiers);
        m_pComboBoxSuper->setObjectName(QStringLiteral("m_pComboBoxSuper"));

        gridLayout1->addWidget(m_pComboBoxSuper, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 5, 0, 1, 1);


        hboxLayout1->addWidget(m_pGroupModifiers);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        m_pGroupSwitchCorners = new QGroupBox(ScreenSettingsDialogBase);
        m_pGroupSwitchCorners->setObjectName(QStringLiteral("m_pGroupSwitchCorners"));
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout2 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName(QStringLiteral("m_pCheckBoxCornerTopLeft"));

        gridLayout2->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 1);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName(QStringLiteral("m_pCheckBoxCornerTopRight"));

        gridLayout2->addWidget(m_pCheckBoxCornerTopRight, 0, 1, 1, 1);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName(QStringLiteral("m_pCheckBoxCornerBottomLeft"));

        gridLayout2->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 1);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName(QStringLiteral("m_pCheckBoxCornerBottomRight"));

        gridLayout2->addWidget(m_pCheckBoxCornerBottomRight, 1, 1, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout3->addWidget(label);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName(QStringLiteral("m_pSpinBoxSwitchCornerSize"));

        hboxLayout3->addWidget(m_pSpinBoxSwitchCornerSize);


        gridLayout2->addLayout(hboxLayout3, 2, 0, 1, 2);


        hboxLayout2->addWidget(m_pGroupSwitchCorners);

        m_pGroupFixes = new QGroupBox(ScreenSettingsDialogBase);
        m_pGroupFixes->setObjectName(QStringLiteral("m_pGroupFixes"));
        m_pGroupFixes->setChecked(false);
        gridLayout3 = new QGridLayout(m_pGroupFixes);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        m_pCheckBoxCapsLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxCapsLock->setObjectName(QStringLiteral("m_pCheckBoxCapsLock"));

        gridLayout3->addWidget(m_pCheckBoxCapsLock, 0, 0, 1, 1);

        m_pCheckBoxNumLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxNumLock->setObjectName(QStringLiteral("m_pCheckBoxNumLock"));

        gridLayout3->addWidget(m_pCheckBoxNumLock, 1, 0, 1, 1);

        m_pCheckBoxScrollLock = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxScrollLock->setObjectName(QStringLiteral("m_pCheckBoxScrollLock"));

        gridLayout3->addWidget(m_pCheckBoxScrollLock, 2, 0, 1, 1);

        m_pCheckBoxXTest = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxXTest->setObjectName(QStringLiteral("m_pCheckBoxXTest"));
        m_pCheckBoxXTest->setChecked(false);

        gridLayout3->addWidget(m_pCheckBoxXTest, 3, 0, 1, 1);

        m_pCheckBoxPreserveFocus = new QCheckBox(m_pGroupFixes);
        m_pCheckBoxPreserveFocus->setObjectName(QStringLiteral("m_pCheckBoxPreserveFocus"));
        m_pCheckBoxPreserveFocus->setChecked(false);

        gridLayout3->addWidget(m_pCheckBoxPreserveFocus, 4, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem3, 5, 0, 1, 1);


        hboxLayout2->addWidget(m_pGroupFixes);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        m_pButtonBox = new QDialogButtonBox(ScreenSettingsDialogBase);
        m_pButtonBox->setObjectName(QStringLiteral("m_pButtonBox"));
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(m_pLineEditName);
        label_2->setBuddy(m_pComboBoxShift);
        label_3->setBuddy(m_pComboBoxCtrl);
        label_4->setBuddy(m_pComboBoxAlt);
        label_5->setBuddy(m_pComboBoxMeta);
        label_6->setBuddy(m_pComboBoxSuper);
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(ScreenSettingsDialogBase);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), ScreenSettingsDialogBase, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), ScreenSettingsDialogBase, SLOT(reject()));

        m_pComboBoxCtrl->setCurrentIndex(1);
        m_pComboBoxAlt->setCurrentIndex(2);
        m_pComboBoxMeta->setCurrentIndex(3);
        m_pComboBoxSuper->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ScreenSettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ScreenSettingsDialogBase)
    {
        ScreenSettingsDialogBase->setWindowTitle(QApplication::translate("ScreenSettingsDialogBase", "Screen Settings", Q_NULLPTR));
        label_7->setText(QApplication::translate("ScreenSettingsDialogBase", "Screen &name:", Q_NULLPTR));
        m_pGroupAliases->setTitle(QApplication::translate("ScreenSettingsDialogBase", "A&liases", Q_NULLPTR));
        m_pButtonAddAlias->setText(QApplication::translate("ScreenSettingsDialogBase", "&Add", Q_NULLPTR));
        m_pButtonRemoveAlias->setText(QApplication::translate("ScreenSettingsDialogBase", "&Remove", Q_NULLPTR));
        m_pGroupModifiers->setTitle(QApplication::translate("ScreenSettingsDialogBase", "&Modifier keys", Q_NULLPTR));
        label_2->setText(QApplication::translate("ScreenSettingsDialogBase", "&Shift:", Q_NULLPTR));
        m_pComboBoxShift->clear();
        m_pComboBoxShift->insertItems(0, QStringList()
         << QApplication::translate("ScreenSettingsDialogBase", "Shift", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Ctrl", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Alt", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Meta", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Super", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "None", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("ScreenSettingsDialogBase", "&Ctrl:", Q_NULLPTR));
        m_pComboBoxCtrl->clear();
        m_pComboBoxCtrl->insertItems(0, QStringList()
         << QApplication::translate("ScreenSettingsDialogBase", "Shift", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Ctrl", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Alt", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Meta", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Super", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "None", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("ScreenSettingsDialogBase", "Al&t:", Q_NULLPTR));
        m_pComboBoxAlt->clear();
        m_pComboBoxAlt->insertItems(0, QStringList()
         << QApplication::translate("ScreenSettingsDialogBase", "Shift", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Ctrl", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Alt", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Meta", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Super", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "None", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("ScreenSettingsDialogBase", "M&eta:", Q_NULLPTR));
        m_pComboBoxMeta->clear();
        m_pComboBoxMeta->insertItems(0, QStringList()
         << QApplication::translate("ScreenSettingsDialogBase", "Shift", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Ctrl", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Alt", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Meta", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Super", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "None", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("ScreenSettingsDialogBase", "S&uper:", Q_NULLPTR));
        m_pComboBoxSuper->clear();
        m_pComboBoxSuper->insertItems(0, QStringList()
         << QApplication::translate("ScreenSettingsDialogBase", "Shift", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Ctrl", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Alt", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Meta", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "Super", Q_NULLPTR)
         << QApplication::translate("ScreenSettingsDialogBase", "None", Q_NULLPTR)
        );
        m_pGroupSwitchCorners->setTitle(QApplication::translate("ScreenSettingsDialogBase", "&Dead corners", Q_NULLPTR));
        m_pCheckBoxCornerTopLeft->setText(QApplication::translate("ScreenSettingsDialogBase", "Top-left", Q_NULLPTR));
        m_pCheckBoxCornerTopRight->setText(QApplication::translate("ScreenSettingsDialogBase", "Top-right", Q_NULLPTR));
        m_pCheckBoxCornerBottomLeft->setText(QApplication::translate("ScreenSettingsDialogBase", "Bottom-left", Q_NULLPTR));
        m_pCheckBoxCornerBottomRight->setText(QApplication::translate("ScreenSettingsDialogBase", "Bottom-right", Q_NULLPTR));
        label->setText(QApplication::translate("ScreenSettingsDialogBase", "Corner Si&ze:", Q_NULLPTR));
        m_pGroupFixes->setTitle(QApplication::translate("ScreenSettingsDialogBase", "&Fixes", Q_NULLPTR));
        m_pCheckBoxCapsLock->setText(QApplication::translate("ScreenSettingsDialogBase", "Fix CAPS LOCK key", Q_NULLPTR));
        m_pCheckBoxNumLock->setText(QApplication::translate("ScreenSettingsDialogBase", "Fix NUM LOCK key", Q_NULLPTR));
        m_pCheckBoxScrollLock->setText(QApplication::translate("ScreenSettingsDialogBase", "Fix SCROLL LOCK key", Q_NULLPTR));
        m_pCheckBoxXTest->setText(QApplication::translate("ScreenSettingsDialogBase", "Fix XTest for Xinerama", Q_NULLPTR));
        m_pCheckBoxPreserveFocus->setText(QApplication::translate("ScreenSettingsDialogBase", "Fix Preserve Focus", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScreenSettingsDialogBase: public Ui_ScreenSettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSETTINGSDIALOGBASE_H
