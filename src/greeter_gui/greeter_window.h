#include <QMainWindow>

#include "greeter.hpp"

namespace Ui
{
class MainWindow;
}

class GreeterWindow : public QMainWindow
{
    Q_OBJECT

  public:
    GreeterWindow(QWidget* parent = nullptr);

    ~GreeterWindow();

  private:
    void greet(const QString& name);

    Ui::MainWindow* ui;
    greeter::Greeter greeter;
};
