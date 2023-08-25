#include "inquire.h"
#include "ui_inquire.h"

inquire::inquire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inquire)
{
    ui->setupUi(this);
}

inquire::~inquire()
{
    delete ui;
}
