/********************************************************************************
** Form generated from reading UI file 'AboutDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOGBASE_H
#define UI_ABOUTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QSpacerItem *spacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_pLabelBarrierVersion;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *m_pLabelBuildDate;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonOk;

    void setupUi(QDialog *AboutDialogBase)
    {
        if (AboutDialogBase->objectName().isEmpty())
            AboutDialogBase->setObjectName(QStringLiteral("AboutDialogBase"));
        AboutDialogBase->setWindowModality(Qt::ApplicationModal);
        AboutDialogBase->setEnabled(true);
        AboutDialogBase->resize(450, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialogBase->sizePolicy().hasHeightForWidth());
        AboutDialogBase->setSizePolicy(sizePolicy);
        AboutDialogBase->setMinimumSize(QSize(450, 300));
        AboutDialogBase->setMaximumSize(QSize(450, 300));
        AboutDialogBase->setModal(true);
        gridLayout = new QGridLayout(AboutDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(AboutDialogBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMargin(1);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        spacerItem = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(spacerItem, 3, 1, 1, 2);

        label_2 = new QLabel(AboutDialogBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/image/about.png")));
        label_2->setMargin(0);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        spacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacer, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AboutDialogBase);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        m_pLabelBarrierVersion = new QLabel(AboutDialogBase);
        m_pLabelBarrierVersion->setObjectName(QStringLiteral("m_pLabelBarrierVersion"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLabelBarrierVersion->sizePolicy().hasHeightForWidth());
        m_pLabelBarrierVersion->setSizePolicy(sizePolicy2);
        m_pLabelBarrierVersion->setMargin(1);

        horizontalLayout->addWidget(m_pLabelBarrierVersion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(AboutDialogBase);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        m_pLabelBuildDate = new QLabel(AboutDialogBase);
        m_pLabelBuildDate->setObjectName(QStringLiteral("m_pLabelBuildDate"));

        horizontalLayout_2->addWidget(m_pLabelBuildDate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonOk = new QPushButton(AboutDialogBase);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));

        horizontalLayout_2->addWidget(buttonOk);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);


        retranslateUi(AboutDialogBase);
        QObject::connect(buttonOk, SIGNAL(clicked()), AboutDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialogBase);
    } // setupUi

    void retranslateUi(QDialog *AboutDialogBase)
    {
        AboutDialogBase->setWindowTitle(QApplication::translate("AboutDialogBase", "About Barrier", Q_NULLPTR));
        label_3->setText(QApplication::translate("AboutDialogBase", "<p>\n"
"Keyboard and mouse sharing application. Cross platform and open source.<br /><br />\n"
"Copyright \302\251 2018 Debauchee Open Source Group<br />\n"
"Copyright \302\251 2012-2016 Symless Ltd.<br />\n"
"Copyright \302\251 2002-2012 Chris Schoeneman, Nick Bolton, Volker Lanz.<br /><br />\n"
"Barrier is released under the GNU General Public License (GPLv2).<br /><br />\n"
"Barrier is based on CosmoSynergy by Richard Lee and Adam Feder.<br />\n"
"The Barrier GUI is based on QSynergy by Volker Lanz.\n"
"</p>", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("AboutDialogBase", "Version:", Q_NULLPTR));
        m_pLabelBarrierVersion->setText(QApplication::translate("AboutDialogBase", "Unknown", Q_NULLPTR));
        label_5->setText(QApplication::translate("AboutDialogBase", "Build Date: ", Q_NULLPTR));
        m_pLabelBuildDate->setText(QApplication::translate("AboutDialogBase", "Unknown", Q_NULLPTR));
        buttonOk->setText(QApplication::translate("AboutDialogBase", "&Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialogBase: public Ui_AboutDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOGBASE_H
