#ifndef TEST1_H
#define TEST1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class test1;
}
QT_END_NAMESPACE

class test1 : public QMainWindow
{
    Q_OBJECT

public:
    test1(QWidget *parent = nullptr);
    ~test1();

private:
    Ui::test1 *ui;
};
#endif // TEST1_H
