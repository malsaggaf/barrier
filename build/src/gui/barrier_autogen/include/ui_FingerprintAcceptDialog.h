/********************************************************************************
** Form generated from reading UI file 'FingerprintAcceptDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGERPRINTACCEPTDIALOG_H
#define UI_FINGERPRINTACCEPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FingerprintAcceptDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label_sha1;
    QLabel *label_explanation;
    QLabel *label_sha1_fingerprint_full;
    QLabel *label_title;
    QLabel *label_sha256_fingerprint_randomart;
    QLabel *label_sha256_fingerprint_full;
    QLabel *label_sha256;

    void setupUi(QDialog *FingerprintAcceptDialog)
    {
        if (FingerprintAcceptDialog->objectName().isEmpty())
            FingerprintAcceptDialog->setObjectName(QStringLiteral("FingerprintAcceptDialog"));
        FingerprintAcceptDialog->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FingerprintAcceptDialog->sizePolicy().hasHeightForWidth());
        FingerprintAcceptDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(FingerprintAcceptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonBox = new QDialogButtonBox(FingerprintAcceptDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        label_sha1 = new QLabel(FingerprintAcceptDialog);
        label_sha1->setObjectName(QStringLiteral("label_sha1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_sha1->sizePolicy().hasHeightForWidth());
        label_sha1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_sha1, 3, 0, 1, 2);

        label_explanation = new QLabel(FingerprintAcceptDialog);
        label_explanation->setObjectName(QStringLiteral("label_explanation"));
        sizePolicy1.setHeightForWidth(label_explanation->sizePolicy().hasHeightForWidth());
        label_explanation->setSizePolicy(sizePolicy1);
        label_explanation->setWordWrap(true);
        label_explanation->setMargin(10);

        gridLayout->addWidget(label_explanation, 5, 0, 1, 2);

        label_sha1_fingerprint_full = new QLabel(FingerprintAcceptDialog);
        label_sha1_fingerprint_full->setObjectName(QStringLiteral("label_sha1_fingerprint_full"));
        sizePolicy1.setHeightForWidth(label_sha1_fingerprint_full->sizePolicy().hasHeightForWidth());
        label_sha1_fingerprint_full->setSizePolicy(sizePolicy1);
        label_sha1_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha1_fingerprint_full, 4, 0, 1, 2);

        label_title = new QLabel(FingerprintAcceptDialog);
        label_title->setObjectName(QStringLiteral("label_title"));

        gridLayout->addWidget(label_title, 0, 0, 1, 2);

        label_sha256_fingerprint_randomart = new QLabel(FingerprintAcceptDialog);
        label_sha256_fingerprint_randomart->setObjectName(QStringLiteral("label_sha256_fingerprint_randomart"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_sha256_fingerprint_randomart->sizePolicy().hasHeightForWidth());
        label_sha256_fingerprint_randomart->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        font.setBold(true);
        font.setWeight(75);
        label_sha256_fingerprint_randomart->setFont(font);
        label_sha256_fingerprint_randomart->setAlignment(Qt::AlignCenter);
        label_sha256_fingerprint_randomart->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_randomart, 2, 1, 1, 1);

        label_sha256_fingerprint_full = new QLabel(FingerprintAcceptDialog);
        label_sha256_fingerprint_full->setObjectName(QStringLiteral("label_sha256_fingerprint_full"));
        label_sha256_fingerprint_full->setAlignment(Qt::AlignCenter);
        label_sha256_fingerprint_full->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sha256_fingerprint_full, 2, 0, 1, 1);

        label_sha256 = new QLabel(FingerprintAcceptDialog);
        label_sha256->setObjectName(QStringLiteral("label_sha256"));

        gridLayout->addWidget(label_sha256, 1, 0, 1, 2);


        retranslateUi(FingerprintAcceptDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FingerprintAcceptDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FingerprintAcceptDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FingerprintAcceptDialog);
    } // setupUi

    void retranslateUi(QDialog *FingerprintAcceptDialog)
    {
        FingerprintAcceptDialog->setWindowTitle(QApplication::translate("FingerprintAcceptDialog", "Security question", Q_NULLPTR));
        label_sha1->setText(QApplication::translate("FingerprintAcceptDialog", "SHA1 (deprecated, compare to old servers only)", Q_NULLPTR));
        label_explanation->setText(QString());
        label_sha1_fingerprint_full->setText(QString());
        label_title->setText(QApplication::translate("FingerprintAcceptDialog", "Do you trust this fingerprint?", Q_NULLPTR));
        label_sha256_fingerprint_randomart->setText(QString());
        label_sha256_fingerprint_full->setText(QString());
        label_sha256->setText(QApplication::translate("FingerprintAcceptDialog", "SHA256:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FingerprintAcceptDialog: public Ui_FingerprintAcceptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGERPRINTACCEPTDIALOG_H
