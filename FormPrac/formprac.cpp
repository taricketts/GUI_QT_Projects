#include "formprac.h"
#include "ui_formprac.h"

FormPrac::FormPrac(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPrac)
{
    ui->setupUi(this);
    month = 1;
    date = 1;
    year = 2000;
    //ui->label->setText(QString::number(month) + " " + QString::number(date)
    //                   + " " + QString::number(year));
    first_name = "";
    last_name = "";
}

FormPrac::~FormPrac()
{
    delete ui;
}

\

void FormPrac::on_dateEdit_dateChanged(const QDate &date)
{
    this->month = date.month();
    this->date = date.day();
    this->year = date.year();
    QString m = QString::number(month);
    QString d = QString::number(this->date);
    QString y = QString::number(year);

    //ui->label->setText(m + " " + d + " " + y);
}

void FormPrac::on_pushButton_clicked()
{
    first_name = ui->firstName->text();
    last_name = ui->lastName->text();
    //ui->test->setText(first_name + " " + last_name);
    /*
     * Leave this area for the actual data submission.
     * Of course, this is all testing so there will most
     * likely be none of that.
     */
    close();
}

void FormPrac::on_pushButton_2_clicked()
{
    ui->firstName->setText("");
    ui->lastName->setText("");
    first_name = "";
    last_name = "";
    //Try adding something that resets the date widget.

}
/*
 * Some of the things above are commented out because I was making sure that the
 * instance variables were setting correctly.
 */
