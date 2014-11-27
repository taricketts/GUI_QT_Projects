#include "mainwindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *mainWindow = new QWidget();
    mainWindow->setWindowTitle("Test");

    QSlider *slider = new QSlider(Qt::Horizontal);
    QSpinBox *spin = new QSpinBox;
    spin->setRange(1,50);
    slider->setRange(1, 50);
    QObject::connect(spin, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spin, SLOT(setValue(int)));
    spin->setValue(10);

    //Setting the layout and how things are displayed.

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(spin);
    layout->addWidget(slider);
    mainWindow->setLayout(layout);
    mainWindow->show();

    return a.exec();
}
