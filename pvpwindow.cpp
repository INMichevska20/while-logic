#include "pvpwindow.h"
#include "ui_pvpwindow.h"
#include "pvpgameplay.h"

PvPwindow::PvPwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PvPwindow)
{
    ui->setupUi(this);
    QPushButton* arr[] = {ui->baseCard1, ui->baseCard2, ui->baseCard3, ui->baseCard4, ui->baseCard5, ui->baseCard6};
    PvPgameplay* gamePlay = new PvPgameplay();
    gamePlay->printCards(arr);

    connect(ui->pushButton_37, &QPushButton::clicked, this, &PvPwindow::ChooseCard);
    connect(ui->player1_1_1, &QPushButton::clicked, this, &PvPwindow::SelectCard);
    connect(ui->player1_1_2, &QPushButton::clicked, this, &PvPwindow::SelectCard);
    connect(ui->player1_1_3, &QPushButton::clicked, this, &PvPwindow::SelectCard);
    connect(ui->player1_1_4, &QPushButton::clicked, this, &PvPwindow::SelectCard);
    connect(ui->player1_1_5, &QPushButton::clicked, this, &PvPwindow::SelectCard);
    connect(ui->player1_2_1, &QPushButton::clicked, this, &PvPwindow::SelectCard);

}

void PvPwindow::ChooseCard() {
    QPushButton* q = (QPushButton*) sender();
    selected = q->icon(); //selected dyrji izbranata karta, kogato cyknem kartata vzemame neiniq icon
}

void PvPwindow::SelectCard() {
    //TODO: check if the card putting is allowed!
    QPushButton* q = (QPushButton*) sender();
    q->setIcon(selected); //za da moje posle da go slojim tuk
}


PvPwindow::~PvPwindow()
{
    delete ui;
}
