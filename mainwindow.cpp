#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDialog>
#include <QLabel>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    about = new AboutDialog(this);
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
