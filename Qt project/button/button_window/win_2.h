#ifndef WIN_2_H
#define WIN_2_H

#include <QDialog>

namespace Ui {
class win_2;
}

class win_2 : public QDialog
{
    Q_OBJECT

public:
    explicit win_2(QWidget *parent = nullptr);
    ~win_2();

private:
    Ui::win_2 *ui;
};

#endif // WIN_2_H
