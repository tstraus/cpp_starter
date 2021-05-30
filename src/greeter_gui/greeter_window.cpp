#include "greeter_window.h"
#include "ui_greeter_window.h"
#include <QMessageBox>

GreeterWindow::GreeterWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->greetButton, &QPushButton::pressed, [&]() { greet(ui->nameEdit->text()); });
}

GreeterWindow::~GreeterWindow()
{
    delete ui;
}

void GreeterWindow::greet(const QString& name)
{
    greeter.greet(name.toStdString());
    QMessageBox::information(this, "Hello", QString("Hola ") + name + QString("!"), QMessageBox::Ok);
}
