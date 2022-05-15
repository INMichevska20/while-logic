#ifndef PVPWINDOW_H
#define PVPWINDOW_H

#include <QDialog>
#include <iostream>
#include "pvpgameplay.h"

namespace Ui {
class PvPwindow;
}

class PvPwindow : public QDialog
{
    Q_OBJECT

public:
    explicit PvPwindow(QWidget *parent = nullptr);
    void ChooseCard();
    void SelectCard();
    ~PvPwindow();

private:
    Ui::PvPwindow *ui;
    QIcon selected;
    QIcon removeCard;
};

#endif // PVPWINDOW_H
