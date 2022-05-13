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
    void printCards(QPushButton* arr[]);

private:
    bool* generateCards(int size);
    QPixmap* card01, *card01Flipped;
    void initPixmaps();
};

#endif // PVPGAMEPLAY_H
