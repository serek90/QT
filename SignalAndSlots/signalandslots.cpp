#include "signalandslots.h"
#include "ui_signalandslots.h"

SignalAndSlots::SignalAndSlots(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignalAndSlots)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));

    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

SignalAndSlots::~SignalAndSlots()
{
    delete ui;
}
