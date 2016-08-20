#include "about_sunset.h"
#include "ui_about_sunset.h"

about_sunset::about_sunset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_sunset)
{
    ui->setupUi(this);
}

about_sunset::~about_sunset()
{
    delete ui;
}
