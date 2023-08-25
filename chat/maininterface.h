#ifndef MAININTERFACE_H
#define MAININTERFACE_H

#include <QWidget>

namespace Ui {
class mainInterface;
}

class mainInterface : public QWidget
{
    Q_OBJECT

public:
    explicit mainInterface(QWidget *parent = nullptr);
    ~mainInterface();

private:
    Ui::mainInterface *ui;
};

#endif // MAININTERFACE_H
