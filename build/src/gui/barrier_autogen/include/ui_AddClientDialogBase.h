/********************************************************************************
** Form generated from reading UI file 'AddClientDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTDIALOGBASE_H
#define UI_ADDCLIENTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClientDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_pLabelHead;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_pCheckBoxIgnoreClient;
    QDialogButtonBox *m_pDialogButtonBox;

    void setupUi(QDialog *AddClientDialog)
    {
        if (AddClientDialog->objectName().isEmpty())
            AddClientDialog->setObjectName(QStringLiteral("AddClientDialog"));
        AddClientDialog->resize(400, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddClientDialog->sizePolicy().hasHeightForWidth());
        AddClientDialog->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(AddClientDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 381, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_pLabelHead = new QLabel(gridLayoutWidget);
        m_pLabelHead->setObjectName(QStringLiteral("m_pLabelHead"));
        m_pLabelHead->setWordWrap(true);

        gridLayout->addWidget(m_pLabelHead, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(AddClientDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 381, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_pCheckBoxIgnoreClient = new QCheckBox(horizontalLayoutWidget);
        m_pCheckBoxIgnoreClient->setObjectName(QStringLiteral("m_pCheckBoxIgnoreClient"));

        horizontalLayout->addWidget(m_pCheckBoxIgnoreClient);

        m_pDialogButtonBox = new QDialogButtonBox(horizontalLayoutWidget);
        m_pDialogButtonBox->setObjectName(QStringLiteral("m_pDialogButtonBox"));
        sizePolicy.setHeightForWidth(m_pDialogButtonBox->sizePolicy().hasHeightForWidth());
        m_pDialogButtonBox->setSizePolicy(sizePolicy);
        m_pDialogButtonBox->setOrientation(Qt::Horizontal);
        m_pDialogButtonBox->setStandardButtons(QDialogButtonBox::Ignore);
        m_pDialogButtonBox->setCenterButtons(false);

        horizontalLayout->addWidget(m_pDialogButtonBox);


        retranslateUi(AddClientDialog);
        QObject::connect(m_pDialogButtonBox, SIGNAL(accepted()), AddClientDialog, SLOT(accept()));
        QObject::connect(m_pDialogButtonBox, SIGNAL(rejected()), AddClientDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddClientDialog);
    } // setupUi

    void retranslateUi(QDialog *AddClientDialog)
    {
        AddClientDialog->setWindowTitle(QApplication::translate("AddClientDialog", "Dialog", Q_NULLPTR));
        m_pLabelHead->setText(QApplication::translate("AddClientDialog", "TextLabel", Q_NULLPTR));
        m_pCheckBoxIgnoreClient->setText(QApplication::translate("AddClientDialog", "Ignore auto connect clients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClientDialog: public Ui_AddClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTDIALOGBASE_H
