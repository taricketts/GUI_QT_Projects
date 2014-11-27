#include "findcrap.h"
#include "ui_findcrap.h"
#include <QTCore/QFile>
#include <QTCore/QTextStream>

FindCrap::FindCrap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindCrap)
{
    ui->setupUi(this);
    total_words = 0;
    getTextFile();
}

FindCrap::~FindCrap()
{
    delete ui;
}

void FindCrap::on_goButton_clicked()
{
    QString word = ui->lineEdit->text();

    while(ui->textEdit->find(word, QTextDocument::FindWholeWords) == true){
        //ui->textEdit->find(word, QTextDocument::FindWholeWords); Not needed I guess. Only shoots out 1's for WC (Word Count)
        total_words++;
    }
    QString total = QString::number(total_words);
    ui->countLb->setText("WC = " + total);
    total_words = 0;
}

void FindCrap::getTextFile(){
    QFile myFile(":/crap.txt"); // ":/" is needed in every case.
    myFile.open(QIODevice::ReadOnly); // only reading file

    QTextStream textStream(&myFile); // knows which file that is being created into stream
    QString line = textStream.readAll(); // reads entire stream and stores
    myFile.close(); // Always close stuff in c++ because memory management

    ui->textEdit->setPlainText(line); // displays in plain text in text area. (larger)
    QTextCursor textCursor = ui->textEdit->textCursor(); // Stores cursor in variable, textCursor function returns cursor of your mouse and stores in textCursor
    textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1); // allows user to see the words they are looking for? (Questionable)

}
