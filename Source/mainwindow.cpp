#include "Headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PvPButton_clicked()
{
    pvp = new PvPwindow(this);
    pvp->show();
    this->hide();
}

void MainWindow::on_PvEButton_clicked()
{
    ui->PvEButton->setText("Coming soon");
    ui->PvEButton->setStyleSheet("font-size: 25px; background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(89, 89, 89, 255), stop:0.5 rgba(76, 76, 76, 255), stop:1 rgba(89, 89, 89, 255));");
}


void MainWindow::on_SettingsButton_clicked()
{
    ui->SettingsButton->setText("Coming soon");
    ui->SettingsButton->setStyleSheet("font-size: 25px; background-color: qlineargradient(spread:reflect, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(89, 89, 89, 255), stop:0.5 rgba(76, 76, 76, 255), stop:1 rgba(89, 89, 89, 255));");
}

