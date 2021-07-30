#ifndef COUNTER_H
#define COUNTER_H

#include <QMainWindow>

namespace Ui {
class counter;
}

class counter : public QMainWindow
{
    Q_OBJECT

public:
    explicit counter(QWidget *parent = 0);
    ~counter();

private:
    Ui::counter *ui;
};

#endif // COUNTER_H
