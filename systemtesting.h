#ifndef SYSTEMTESTING_H
#define SYSTEMTESTING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SystemTesting;
}
QT_END_NAMESPACE

class SystemTesting : public QMainWindow
{
    Q_OBJECT

public:
    SystemTesting(QWidget *parent = nullptr);
    ~SystemTesting();

private:
    Ui::SystemTesting *ui;
};
#endif // SYSTEMTESTING_H
