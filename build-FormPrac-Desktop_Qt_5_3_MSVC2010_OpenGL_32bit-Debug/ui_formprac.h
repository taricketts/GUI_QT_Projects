/********************************************************************************
** Form generated from reading UI file 'formprac.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPRAC_H
#define UI_FORMPRAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPrac
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *firstNameLab;
    QLineEdit *firstName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lastNameLab;
    QLineEdit *lastName;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *FormPrac)
    {
        if (FormPrac->objectName().isEmpty())
            FormPrac->setObjectName(QStringLiteral("FormPrac"));
        FormPrac->resize(402, 269);
        widget = new QWidget(FormPrac);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 341, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter->addWidget(label_2);
        dateEdit = new QDateEdit(splitter);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        splitter->addWidget(dateEdit);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        firstNameLab = new QLabel(widget);
        firstNameLab->setObjectName(QStringLiteral("firstNameLab"));

        horizontalLayout->addWidget(firstNameLab);

        firstName = new QLineEdit(widget);
        firstName->setObjectName(QStringLiteral("firstName"));

        horizontalLayout->addWidget(firstName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lastNameLab = new QLabel(widget);
        lastNameLab->setObjectName(QStringLiteral("lastNameLab"));

        horizontalLayout_2->addWidget(lastNameLab);

        lastName = new QLineEdit(widget);
        lastName->setObjectName(QStringLiteral("lastName"));

        horizontalLayout_2->addWidget(lastName);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(FormPrac);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(140, 180, 195, 30));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        retranslateUi(FormPrac);

        QMetaObject::connectSlotsByName(FormPrac);
    } // setupUi

    void retranslateUi(QWidget *FormPrac)
    {
        FormPrac->setWindowTitle(QApplication::translate("FormPrac", "FormPrac", 0));
        label_2->setText(QApplication::translate("FormPrac", "Birthdate:", 0));
        firstNameLab->setText(QApplication::translate("FormPrac", "First Name:", 0));
        lastNameLab->setText(QApplication::translate("FormPrac", "Last Name:", 0));
        pushButton->setText(QApplication::translate("FormPrac", "Submit", 0));
        pushButton_2->setText(QApplication::translate("FormPrac", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class FormPrac: public Ui_FormPrac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRAC_H
