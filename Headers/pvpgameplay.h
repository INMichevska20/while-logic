#ifndef PVPGAMEPLAY_H
#define PVPGAMEPLAY_H
#include <QPushButton>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <iostream>

class PvPgameplay
{
public:
    PvPgameplay();
    void printBase(QPushButton* arr[]);
    void printPlayerCards(QPushButton* arr[]);

private:
    bool* generateCards(int size);
    QPixmap *baseCard, *baseCardFlipped, *empty, *available, *XOR1, *XOR0, *AND1, *AND0, *OR1, *OR0;
    void initPixmaps();
};

#endif // PVPGAMEPLAY_H
