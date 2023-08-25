#ifndef INQUIRE_H
#define INQUIRE_H

#include <QWidget>

namespace Ui {
class inquire;
}

class inquire : public QWidget
{
    Q_OBJECT

public:
    explicit inquire(QWidget *parent = nullptr);
    ~inquire();

private:
    Ui::inquire *ui;
};

#endif // INQUIRE_H
