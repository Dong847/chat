#ifndef LETUSCHAT_H
#define LETUSCHAT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class letuschat; }
QT_END_NAMESPACE

class letuschat : public QWidget
{
    Q_OBJECT

public:
    letuschat(QWidget *parent = nullptr);
    ~letuschat();

private:
    Ui::letuschat *ui;
};
#endif // LETUSCHAT_H
