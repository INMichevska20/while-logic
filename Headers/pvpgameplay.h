#ifndef PVPGAMEPLAY_H
#define PVPGAMEPLAY_H
#include <QPushButton>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PvPgameplay
{
public:
    PvPgameplay();
    void printBase(QPushButton* arr[]);
    void printPlayerCards(QPushButton* arr[]);

private:
    bool* generateCards(int size);
    QPixmap *baseCard, *baseCardFlipped, *emptyCard, *available, *XOR1, *XOR0, *AND1, *AND0, *OR1, *OR0;
    void initPixmaps();
    int baseValue[6][6];
};

#endif // PVPGAMEPLAY_H
