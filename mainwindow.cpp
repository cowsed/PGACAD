#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "UI/console.h"
#include <QDialog>
#include <QLabel>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->centralwidget->hide();
    about = new AboutDialog(this);
    //    ui->dockWidgetContents_2
}

void MainWindow::Exit() {
    std::puts("Exitting");
    this->close();
}

void MainWindow::ShowAbout() {
    about->exec();
}

MainWindow::~MainWindow() {
    delete ui;
}
