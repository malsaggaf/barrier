/********************************************************************************
** Form generated from reading UI file 'SettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOGBASE_H
#define UI_SETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *m_pGroupGeneral;
    QFormLayout *formLayout;
    QLabel *m_pLabel_27;
    QComboBox *m_pComboLanguage;
    QLabel *m_pLabel_19;
    QLineEdit *m_pLineEditScreenName;
    QLabel *m_pLabelElevate;
    QComboBox *m_pComboElevate;
    QCheckBox *m_pCheckBoxMinimizeToTray;
    QCheckBox *m_pCheckBoxAutoHide;
    QCheckBox *m_pCheckBoxAutoStart;
    QGroupBox *m_pGroupNetworking;
    QGridLayout *gridLayout_3;
    QLabel *m_pLabel_21;
    QLabel *m_pLabel_20;
    QSpinBox *m_pSpinBoxPort;
    QLineEdit *m_pLineEditInterface;
    QCheckBox *m_pCheckBoxEnableCrypto;
    QCheckBox *checkbox_require_client_certificate;
    QGroupBox *m_pGroupLog;
    QGridLayout *gridLayout_2;
    QCheckBox *m_pCheckBoxLogToFile;
    QPushButton *m_pButtonBrowseLog;
    QComboBox *m_pComboLogLevel;
    QLabel *m_pLabel_3;
    QLineEdit *m_pLineEditLogFilename;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialogBase)
    {
        if (SettingsDialogBase->objectName().isEmpty())
            SettingsDialogBase->setObjectName(QStringLiteral("SettingsDialogBase"));
        SettingsDialogBase->resize(368, 428);
        verticalLayout = new QVBoxLayout(SettingsDialogBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_pGroupGeneral = new QGroupBox(SettingsDialogBase);
        m_pGroupGeneral->setObjectName(QStringLiteral("m_pGroupGeneral"));
        m_pGroupGeneral->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pGroupGeneral->sizePolicy().hasHeightForWidth());
        m_pGroupGeneral->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(m_pGroupGeneral);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        m_pLabel_27 = new QLabel(m_pGroupGeneral);
        m_pLabel_27->setObjectName(QStringLiteral("m_pLabel_27"));
        sizePolicy.setHeightForWidth(m_pLabel_27->sizePolicy().hasHeightForWidth());
        m_pLabel_27->setSizePolicy(sizePolicy);
        m_pLabel_27->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, m_pLabel_27);

        m_pComboLanguage = new QComboBox(m_pGroupGeneral);
        m_pComboLanguage->setObjectName(QStringLiteral("m_pComboLanguage"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_pComboLanguage);

        m_pLabel_19 = new QLabel(m_pGroupGeneral);
        m_pLabel_19->setObjectName(QStringLiteral("m_pLabel_19"));
        m_pLabel_19->setMinimumSize(QSize(75, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, m_pLabel_19);

        m_pLineEditScreenName = new QLineEdit(m_pGroupGeneral);
        m_pLineEditScreenName->setObjectName(QStringLiteral("m_pLineEditScreenName"));
        m_pLineEditScreenName->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, m_pLineEditScreenName);

        m_pLabelElevate = new QLabel(m_pGroupGeneral);
        m_pLabelElevate->setObjectName(QStringLiteral("m_pLabelElevate"));

        formLayout->setWidget(2, QFormLayout::LabelRole, m_pLabelElevate);

        m_pComboElevate = new QComboBox(m_pGroupGeneral);
        m_pComboElevate->setObjectName(QStringLiteral("m_pComboElevate"));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_pComboElevate);

        m_pCheckBoxMinimizeToTray = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxMinimizeToTray->setObjectName(QStringLiteral("m_pCheckBoxMinimizeToTray"));

        formLayout->setWidget(3, QFormLayout::LabelRole, m_pCheckBoxMinimizeToTray);

        m_pCheckBoxAutoHide = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxAutoHide->setObjectName(QStringLiteral("m_pCheckBoxAutoHide"));

        formLayout->setWidget(4, QFormLayout::LabelRole, m_pCheckBoxAutoHide);

        m_pCheckBoxAutoStart = new QCheckBox(m_pGroupGeneral);
        m_pCheckBoxAutoStart->setObjectName(QStringLiteral("m_pCheckBoxAutoStart"));

        formLayout->setWidget(5, QFormLayout::LabelRole, m_pCheckBoxAutoStart);


        verticalLayout->addWidget(m_pGroupGeneral);

        m_pGroupNetworking = new QGroupBox(SettingsDialogBase);
        m_pGroupNetworking->setObjectName(QStringLiteral("m_pGroupNetworking"));
        gridLayout_3 = new QGridLayout(m_pGroupNetworking);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        m_pLabel_21 = new QLabel(m_pGroupNetworking);
        m_pLabel_21->setObjectName(QStringLiteral("m_pLabel_21"));

        gridLayout_3->addWidget(m_pLabel_21, 1, 0, 1, 1);

        m_pLabel_20 = new QLabel(m_pGroupNetworking);
        m_pLabel_20->setObjectName(QStringLiteral("m_pLabel_20"));

        gridLayout_3->addWidget(m_pLabel_20, 0, 0, 1, 1);

        m_pSpinBoxPort = new QSpinBox(m_pGroupNetworking);
        m_pSpinBoxPort->setObjectName(QStringLiteral("m_pSpinBoxPort"));
        m_pSpinBoxPort->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pSpinBoxPort->sizePolicy().hasHeightForWidth());
        m_pSpinBoxPort->setSizePolicy(sizePolicy1);
        m_pSpinBoxPort->setMaximum(65535);
        m_pSpinBoxPort->setValue(24800);

        gridLayout_3->addWidget(m_pSpinBoxPort, 0, 1, 1, 1);

        m_pLineEditInterface = new QLineEdit(m_pGroupNetworking);
        m_pLineEditInterface->setObjectName(QStringLiteral("m_pLineEditInterface"));
        m_pLineEditInterface->setEnabled(true);

        gridLayout_3->addWidget(m_pLineEditInterface, 1, 1, 1, 1);

        m_pCheckBoxEnableCrypto = new QCheckBox(m_pGroupNetworking);
        m_pCheckBoxEnableCrypto->setObjectName(QStringLiteral("m_pCheckBoxEnableCrypto"));

        gridLayout_3->addWidget(m_pCheckBoxEnableCrypto, 2, 0, 1, 2);

        checkbox_require_client_certificate = new QCheckBox(m_pGroupNetworking);
        checkbox_require_client_certificate->setObjectName(QStringLiteral("checkbox_require_client_certificate"));

        gridLayout_3->addWidget(checkbox_require_client_certificate, 3, 0, 1, 2);


        verticalLayout->addWidget(m_pGroupNetworking);

        m_pGroupLog = new QGroupBox(SettingsDialogBase);
        m_pGroupLog->setObjectName(QStringLiteral("m_pGroupLog"));
        sizePolicy.setHeightForWidth(m_pGroupLog->sizePolicy().hasHeightForWidth());
        m_pGroupLog->setSizePolicy(sizePolicy);
        m_pGroupLog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_pGroupLog->setFlat(false);
        gridLayout_2 = new QGridLayout(m_pGroupLog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_pCheckBoxLogToFile = new QCheckBox(m_pGroupLog);
        m_pCheckBoxLogToFile->setObjectName(QStringLiteral("m_pCheckBoxLogToFile"));

        gridLayout_2->addWidget(m_pCheckBoxLogToFile, 1, 0, 1, 1);

        m_pButtonBrowseLog = new QPushButton(m_pGroupLog);
        m_pButtonBrowseLog->setObjectName(QStringLiteral("m_pButtonBrowseLog"));
        m_pButtonBrowseLog->setEnabled(false);

        gridLayout_2->addWidget(m_pButtonBrowseLog, 1, 2, 1, 1);

        m_pComboLogLevel = new QComboBox(m_pGroupLog);
        m_pComboLogLevel->setObjectName(QStringLiteral("m_pComboLogLevel"));

        gridLayout_2->addWidget(m_pComboLogLevel, 0, 1, 1, 2);

        m_pLabel_3 = new QLabel(m_pGroupLog);
        m_pLabel_3->setObjectName(QStringLiteral("m_pLabel_3"));
        m_pLabel_3->setMinimumSize(QSize(75, 0));

        gridLayout_2->addWidget(m_pLabel_3, 0, 0, 1, 1);

        m_pLineEditLogFilename = new QLineEdit(m_pGroupLog);
        m_pLineEditLogFilename->setObjectName(QStringLiteral("m_pLineEditLogFilename"));
        m_pLineEditLogFilename->setEnabled(false);

        gridLayout_2->addWidget(m_pLineEditLogFilename, 1, 1, 1, 1);


        verticalLayout->addWidget(m_pGroupLog);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SettingsDialogBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        m_pLabel_27->setBuddy(m_pComboLanguage);
        m_pLabel_19->setBuddy(m_pLineEditScreenName);
        m_pLabel_21->setBuddy(m_pLineEditInterface);
        m_pLabel_20->setBuddy(m_pSpinBoxPort);
        m_pLabel_3->setBuddy(m_pComboLogLevel);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_pComboLanguage, m_pLineEditScreenName);
        QWidget::setTabOrder(m_pLineEditScreenName, m_pComboElevate);
        QWidget::setTabOrder(m_pComboElevate, m_pCheckBoxMinimizeToTray);
        QWidget::setTabOrder(m_pCheckBoxMinimizeToTray, m_pCheckBoxAutoHide);
        QWidget::setTabOrder(m_pCheckBoxAutoHide, m_pCheckBoxAutoStart);
        QWidget::setTabOrder(m_pCheckBoxAutoStart, m_pSpinBoxPort);
        QWidget::setTabOrder(m_pSpinBoxPort, m_pLineEditInterface);
        QWidget::setTabOrder(m_pLineEditInterface, m_pCheckBoxEnableCrypto);
        QWidget::setTabOrder(m_pCheckBoxEnableCrypto, m_pComboLogLevel);
        QWidget::setTabOrder(m_pComboLogLevel, m_pCheckBoxLogToFile);
        QWidget::setTabOrder(m_pCheckBoxLogToFile, m_pLineEditLogFilename);
        QWidget::setTabOrder(m_pLineEditLogFilename, m_pButtonBrowseLog);

        retranslateUi(SettingsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialogBase, SLOT(reject()));

        m_pComboElevate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialogBase)
    {
        SettingsDialogBase->setWindowTitle(QApplication::translate("SettingsDialogBase", "Settings", Q_NULLPTR));
        m_pGroupGeneral->setTitle(QApplication::translate("SettingsDialogBase", "General", Q_NULLPTR));
        m_pLabel_27->setText(QApplication::translate("SettingsDialogBase", "&Language:", Q_NULLPTR));
        m_pLabel_19->setText(QApplication::translate("SettingsDialogBase", "Sc&reen name:", Q_NULLPTR));
        m_pLabelElevate->setText(QApplication::translate("SettingsDialogBase", "Elevate", Q_NULLPTR));
        m_pComboElevate->clear();
        m_pComboElevate->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialogBase", "As Needed", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Always", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Never", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        m_pComboElevate->setToolTip(QApplication::translate("SettingsDialogBase", "Specify when the Barrier service should run at an elevated privilege level", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_pCheckBoxMinimizeToTray->setText(QApplication::translate("SettingsDialogBase", "Minimize to System &Tray", Q_NULLPTR));
        m_pCheckBoxAutoHide->setText(QApplication::translate("SettingsDialogBase", "&Hide on startup", Q_NULLPTR));
        m_pCheckBoxAutoStart->setText(QApplication::translate("SettingsDialogBase", "Start &Barrier on startup", Q_NULLPTR));
        m_pGroupNetworking->setTitle(QApplication::translate("SettingsDialogBase", "Networking", Q_NULLPTR));
        m_pLabel_21->setText(QApplication::translate("SettingsDialogBase", "&Address:", Q_NULLPTR));
        m_pLabel_20->setText(QApplication::translate("SettingsDialogBase", "P&ort:", Q_NULLPTR));
        m_pCheckBoxEnableCrypto->setText(QApplication::translate("SettingsDialogBase", "Enable &SSL", Q_NULLPTR));
        checkbox_require_client_certificate->setText(QApplication::translate("SettingsDialogBase", "Require client certificate", Q_NULLPTR));
        m_pGroupLog->setTitle(QApplication::translate("SettingsDialogBase", "Logging", Q_NULLPTR));
        m_pCheckBoxLogToFile->setText(QApplication::translate("SettingsDialogBase", "Log to file:", Q_NULLPTR));
        m_pButtonBrowseLog->setText(QApplication::translate("SettingsDialogBase", "Browse...", Q_NULLPTR));
        m_pComboLogLevel->clear();
        m_pComboLogLevel->insertItems(0, QStringList()
         << QApplication::translate("SettingsDialogBase", "Error", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Warning", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Note", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Info", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Debug", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Debug1", Q_NULLPTR)
         << QApplication::translate("SettingsDialogBase", "Debug2", Q_NULLPTR)
        );
        m_pLabel_3->setText(QApplication::translate("SettingsDialogBase", "&Logging level:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialogBase: public Ui_SettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOGBASE_H
