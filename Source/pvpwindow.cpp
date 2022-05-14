#include "Headers/pvpwindow.h"
#include "ui_pvpwindow.h"
#include "Headers/pvpgameplay.h"
#include "Headers/assing_cards.h"

PvPwindow::PvPwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PvPwindow)
{
    ui->setupUi(this);
    QPushButton* base[] = {ui->baseCard1, ui->baseCard2, ui->baseCard3, ui->baseCard4, ui->baseCard5, ui->baseCard6};
    QPushButton* player1Hand[] = {ui->player1_hand1, ui->player1_hand2, ui->player1_hand3,ui->player1_hand4, ui->player1_hand5};
    QPushButton* player2Hand[] = {ui->player2_hand1, ui->player2_hand2, ui->player2_hand3,ui->player2_hand4, ui->player2_hand5};
    PvPgameplay* gamePlay = new PvPgameplay();
    gamePlay->printBase(base);
    gamePlay->printPlayerCards(player1Hand);
    gamePlay->printPlayerCards(player2Hand);

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
