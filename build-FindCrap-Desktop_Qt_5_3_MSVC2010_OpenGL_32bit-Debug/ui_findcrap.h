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
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *FindCrap)
    {
        if (FindCrap->objectName().isEmpty())
            FindCrap->setObjectName(QStringLiteral("FindCrap"));
        FindCrap->resize(400, 300);
        verticalLayout = new QVBoxLayout(FindCrap);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(FindCrap);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FindCrap);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

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
        label->setText(QApplication::translate("FindCrap", "Search for:", 0));
        goButton->setText(QApplication::translate("FindCrap", "Go!", 0));
    } // retranslateUi

};

namespace Ui {
    class FindCrap: public Ui_FindCrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H
