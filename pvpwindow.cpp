#include "pvpwindow.h"
#include "ui_pvpwindow.h"

PvPwindow::PvPwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PvPwindow)
{
    ui->setupUi(this);
}

PvPwindow::~PvPwindow()
{
    delete ui;
}
