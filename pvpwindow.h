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
    ~PvPwindow();

private:
    Ui::PvPwindow *ui;
};

#endif // PVPWINDOW_H
