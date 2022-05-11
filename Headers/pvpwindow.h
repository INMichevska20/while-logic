#ifndef PVPWINDOW_H
#define PVPWINDOW_H

#include <QDialog>

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
};

#endif // PVPWINDOW_H
