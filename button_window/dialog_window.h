#ifndef DIALOG_WINDOW_H
#define DIALOG_WINDOW_H

#include <QDialog>

namespace Ui {
class Dialog_window;
}

class Dialog_window : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_window(QWidget *parent = nullptr);
    ~Dialog_window();

private:
    Ui::Dialog_window *ui;
};

#endif // DIALOG_WINDOW_H
