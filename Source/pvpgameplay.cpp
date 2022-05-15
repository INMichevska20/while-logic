#include "Headers/pvpgameplay.h"
#define SIZE1 6
#define SIZE2 5

PvPgameplay::PvPgameplay()
{
    initPixmaps();
    srand(time(NULL));
}

bool* PvPgameplay::generateCards(int size) {
    bool* arr = new bool[size];

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 2;
    }

    return arr;
}

void PvPgameplay::initPixmaps() {
    baseCard = new QPixmap("Design/Medium_1.png");
    baseCardFlipped = new QPixmap("Design/Medium_2.png");
    emptyCard = new QPixmap("Design/Placeborder.png");
    available = new QPixmap("Design/Placeholder.png");
    XOR1 = new QPixmap("Design/XOR_1.png");
    XOR0 = new QPixmap("Design/XOR_0.png");
    AND1 = new QPixmap("Design/AND_1.png");
    AND0 = new QPixmap("Design/AND_0.png");
    OR1 = new QPixmap("Design/OR_1.png");
    OR0 = new QPixmap("Design/OR_0.png");
}

void PvPgameplay::printBase(QPushButton * arr[]) {
    bool* cards = generateCards(SIZE1);
    int m = 0, n = 0;
    for(int i = 0; i < SIZE1; i++) {
        if(cards[i])
        {
            QIcon* q = new QIcon();
            q->addPixmap(*baseCard);
            arr[i]->setIcon(*q);
            baseValue[m][n] = 1;
            m++;
            baseValue[m][n] = 0;
            n++;
        }
        else
        {
            QIcon* q = new QIcon();
            q->addPixmap(*baseCardFlipped);
            arr[i]->setIcon(*q);
            baseValue[m][n] = 0;
            m++;
            baseValue[m][n] = 1;
            n++;
        }
    }
}

void PvPgameplay::printPlayerCards(QPushButton * arr[])
{
    for(int i = 0; i < SIZE2; i++)
    {
        QIcon* q = new QIcon();
        int a = rand() % 6;

        switch(a)
        {
            case 0:
                q->addPixmap(*XOR1);
                arr[i]->setIcon(*q);
                break;
            case 1:
                q->addPixmap(*XOR0);
                arr[i]->setIcon(*q);
                break;
            case 2:
                q->addPixmap(*OR1);
                arr[i]->setIcon(*q);
                break;
            case 3:
                q->addPixmap(*OR0);
                arr[i]->setIcon(*q);
                break;
            case 4:
                q->addPixmap(*AND1);
                arr[i]->setIcon(*q);
                break;
            case 5:
                q->addPixmap(*AND0);
                arr[i]->setIcon(*q);
                break;
        }
    }
}
