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
    void AddError(const QString &str);

private:
    Ui::Console *ui;
};
