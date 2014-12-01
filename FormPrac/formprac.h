#ifndef FORMPRAC_H
#define FORMPRAC_H

#include <QWidget>

namespace Ui {
class FormPrac;
}

class FormPrac : public QWidget
{
    Q_OBJECT

public:
    explicit FormPrac(QWidget *parent = 0);
    ~FormPrac();

private slots:

    void on_dateEdit_dateChanged(const QDate &date);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormPrac *ui;
    int month, date, year;
    QString first_name;
    QString last_name;
};

#endif // FORMPRAC_H
