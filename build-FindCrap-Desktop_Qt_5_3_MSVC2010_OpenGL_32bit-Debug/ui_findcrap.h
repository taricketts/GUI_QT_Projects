/********************************************************************************
** Form generated from reading UI file 'findcrap.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCRAP_H
#define UI_FINDCRAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCrap
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *countLb;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *FindCrap)
    {
        if (FindCrap->objectName().isEmpty())
            FindCrap->setObjectName(QStringLiteral("FindCrap"));
        FindCrap->resize(637, 422);
        verticalLayout = new QVBoxLayout(FindCrap);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        countLb = new QLabel(FindCrap);
        countLb->setObjectName(QStringLiteral("countLb"));

        horizontalLayout->addWidget(countLb);

        textEdit = new QTextEdit(FindCrap);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        lineEdit = new QLineEdit(FindCrap);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(FindCrap);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindCrap);

        QMetaObject::connectSlotsByName(FindCrap);
    } // setupUi

    void retranslateUi(QWidget *FindCrap)
    {
        FindCrap->setWindowTitle(QApplication::translate("FindCrap", "FindCrap", 0));
        countLb->setText(QApplication::translate("FindCrap", "WC =  ", 0));
        goButton->setText(QApplication::translate("FindCrap", "Go!", 0));
    } // retranslateUi

};

namespace Ui {
    class FindCrap: public Ui_FindCrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H
