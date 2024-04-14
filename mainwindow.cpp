#include "mainwindow.h"
#include "ui_mainwindow.h"

extern "C" {
// #include "policy_use_1.h"
// #include "policy_use_2.h"
// #include "policy_use_3.h"

#include "app_logic.h"
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //policy_use_1();
    //policy_use_2();
    //policy_use_3();
    app_main();
}

MainWindow::~MainWindow()
{
    delete ui;
}
