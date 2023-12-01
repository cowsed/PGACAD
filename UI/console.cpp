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

    ui->cmdOutput->append("<font color='" + p.brightText().color().name() + "'>  " + cmd
                          + "</font>");
    AddError("Commands not supported yet");
}

void Console::AddError(const QString &str) {
    ui->cmdOutput->append("<font color='#ff0000'>" + str + "</font>");
}

Console::~Console() {
    delete ui;
}
