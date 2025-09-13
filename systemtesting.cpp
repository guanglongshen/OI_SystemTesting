#include "systemtesting.h"
#include "./ui_systemtesting.h"

SystemTesting::SystemTesting(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SystemTesting)
{
    ui->setupUi(this);
}

SystemTesting::~SystemTesting()
{
    delete ui;
}
