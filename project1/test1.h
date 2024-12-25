#ifndef TEST1_H
#define TEST1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Test1;
}
QT_END_NAMESPACE

class Test1 : public QMainWindow
{
    Q_OBJECT

public:
    Test1(QWidget *parent = nullptr);
    ~Test1();

private:
    Ui::Test1 *ui;
};
#endif // TEST1_H
