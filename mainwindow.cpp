#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "UI/helpmenus.h"
#include <QDialog>
#include <QLabel>
#include <QMessageBox>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::Exit() {
    std::puts("Exitting");
    this->close();
}

//void MainWindow::ShowAbout() {
//    show_about_popup();
//}
//
MainWindow::~MainWindow() {
    delete ui;
}
