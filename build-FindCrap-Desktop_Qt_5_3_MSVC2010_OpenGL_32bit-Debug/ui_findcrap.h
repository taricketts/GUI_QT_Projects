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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCrap
{
public:
    QLineEdit *lineEdit;
    QPushButton *goButton;
    QLabel *countLb;
    QTextEdit *textEdit;

    void setupUi(QWidget *FindCrap)
    {
        if (FindCrap->objectName().isEmpty())
            FindCrap->setObjectName(QStringLiteral("FindCrap"));
        FindCrap->resize(637, 325);
        lineEdit = new QLineEdit(FindCrap);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(490, 252, 137, 22));
        goButton = new QPushButton(FindCrap);
        goButton->setObjectName(QStringLiteral("goButton"));
        goButton->setGeometry(QRect(490, 280, 137, 22));
        countLb = new QLabel(FindCrap);
        countLb->setObjectName(QStringLiteral("countLb"));
        countLb->setGeometry(QRect(12, 12, 61, 16));
        textEdit = new QTextEdit(FindCrap);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 10, 371, 291));

        retranslateUi(FindCrap);

        QMetaObject::connectSlotsByName(FindCrap);
    } // setupUi

    void retranslateUi(QWidget *FindCrap)
    {
        FindCrap->setWindowTitle(QApplication::translate("FindCrap", "FindCrap", 0));
        goButton->setText(QApplication::translate("FindCrap", "Go!", 0));
        countLb->setText(QApplication::translate("FindCrap", "WC =  ", 0));
    } // retranslateUi

};

namespace Ui {
    class FindCrap: public Ui_FindCrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H
