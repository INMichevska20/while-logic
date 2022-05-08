#include "pvpgameplay.h"
#define SIZE 6

PvPgameplay::PvPgameplay()
{
    initPixmaps();
}

bool* PvPgameplay::generateCards(int size) {
    bool* arr = new bool[size];
    srand(time(NULL));

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 2;
    }

    return arr;
}

void PvPgameplay::initPixmaps() {
    card01 = new QPixmap("Medium_1.png");
    card01Flipped = new QPixmap("Medium_2.png");
}

void PvPgameplay::printCards(QPushButton * arr[]) {
    bool* cards = generateCards(SIZE);

    for(int i = 0; i < SIZE; i++) {
        if(cards[i])
        {
            QIcon* q = new QIcon();
            q->addPixmap(*card01);
            arr[i]->setIcon(*q);
        }
        else
        {
            QIcon* q = new QIcon();
            q->addPixmap(*card01Flipped);
            arr[i]->setIcon(*q);
        }
    }
}
