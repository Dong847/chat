#include "letuschat.h"
#include "ui_letuschat.h"

letuschat::letuschat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::letuschat)
{
    ui->setupUi(this);
}

letuschat::~letuschat()
{
    delete ui;
}

