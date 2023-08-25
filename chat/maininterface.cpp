#include "maininterface.h"
#include "ui_maininterface.h"

mainInterface::mainInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainInterface)
{
    ui->setupUi(this);
}

mainInterface::~mainInterface()
{
    delete ui;
}
