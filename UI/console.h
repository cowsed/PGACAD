#pragma once

#include <QWidget>

namespace Ui {
class Console;
}

class Console : public QWidget {
    Q_OBJECT

public:
    explicit Console(QWidget *parent = nullptr);
    ~Console();
public slots:
    void RunCommand();

private:
    Ui::Console *ui;
};
