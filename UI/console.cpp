#include "console.h"
#include "ui_console.h"
#include <iostream>

Console::Console(QWidget *parent) : QWidget(parent), ui(new Ui::Console) {
    ui->setupUi(this);
}

void Console::RunCommand() {
    QString cmd = ui->cmdInput->text();
    ui->cmdInput->setText("");

    QPalette p = palette();
    ui->cmdOutput->append("<font color='" + p.light().color().name() + "'>  " + cmd + "</font>");
    ui->cmdOutput->append("<font color='#ff0000'>Commands not yet supported</font>");
}

Console::~Console() {
    delete ui;
}
