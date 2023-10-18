/********************************************************************************
** Form generated from reading UI file 'LogWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOWBASE_H
#define UI_LOGWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogWindowBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QTextEdit *m_pLogOutput;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacer;
    QPushButton *m_pButtonClearLog;
    QPushButton *m_pButtonHide;

    void setupUi(QDialog *LogWindowBase)
    {
        if (LogWindowBase->objectName().isEmpty())
            LogWindowBase->setObjectName(QStringLiteral("LogWindowBase"));
        LogWindowBase->resize(800, 371);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogWindowBase->sizePolicy().hasHeightForWidth());
        LogWindowBase->setSizePolicy(sizePolicy);
        LogWindowBase->setMinimumSize(QSize(400, 0));
        verticalLayout_2 = new QVBoxLayout(LogWindowBase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_pLogOutput = new QTextEdit(LogWindowBase);
        m_pLogOutput->setObjectName(QStringLiteral("m_pLogOutput"));
        QFont font;
        font.setFamily(QStringLiteral("Courier"));
        m_pLogOutput->setFont(font);
        m_pLogOutput->setAutoFillBackground(false);
        m_pLogOutput->setUndoRedoEnabled(false);
        m_pLogOutput->setLineWrapMode(QTextEdit::NoWrap);
        m_pLogOutput->setReadOnly(true);

        verticalLayout_2->addWidget(m_pLogOutput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        m_pButtonClearLog = new QPushButton(LogWindowBase);
        m_pButtonClearLog->setObjectName(QStringLiteral("m_pButtonClearLog"));

        horizontalLayout->addWidget(m_pButtonClearLog);

        m_pButtonHide = new QPushButton(LogWindowBase);
        m_pButtonHide->setObjectName(QStringLiteral("m_pButtonHide"));

        horizontalLayout->addWidget(m_pButtonHide);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(LogWindowBase);

        QMetaObject::connectSlotsByName(LogWindowBase);
    } // setupUi

    void retranslateUi(QDialog *LogWindowBase)
    {
        LogWindowBase->setWindowTitle(QApplication::translate("LogWindowBase", "Log - Barrier", Q_NULLPTR));
        m_pButtonClearLog->setText(QApplication::translate("LogWindowBase", "&Clear Log", Q_NULLPTR));
        m_pButtonHide->setText(QApplication::translate("LogWindowBase", "&Hide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogWindowBase: public Ui_LogWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOWBASE_H
