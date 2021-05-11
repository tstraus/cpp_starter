#include "greeter_window.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    GreeterWindow window;
    window.show();

    return app.exec();
}