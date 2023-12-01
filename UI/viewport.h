#pragma once

#include <QWidget>

namespace Ui {
class Viewport;
}

class Viewport : public QWidget
{
    Q_OBJECT

public:
    explicit Viewport(QWidget *parent = nullptr);
    ~Viewport();

private:
    Ui::Viewport *ui;
};

