#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
      QDialog(parent),
      ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::Tool);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
