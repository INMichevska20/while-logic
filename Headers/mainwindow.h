#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pvpwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PvPButton_clicked();

    void on_PvEButton_clicked();

    void on_SettingsButton_clicked();

private:
    Ui::MainWindow *ui;
    PvPwindow *pvp;
};
#endif // MAINWINDOW_H
