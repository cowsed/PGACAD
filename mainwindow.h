#pragma once

#include "UI/aboutdialog.h"
#include <QMainWindow>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Exit();
    void ShowAbout();

private:
    Ui::MainWindow *ui;
    AboutDialog *about;
};
