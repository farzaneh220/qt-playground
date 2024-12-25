/********************************************************************************
** Form generated from reading UI file 'test1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST1_H
#define UI_TEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test1
{
public:
    QWidget *centralwidget;
    QListWidget *mylist;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *test1)
    {
        if (test1->objectName().isEmpty())
            test1->setObjectName("test1");
        test1->resize(800, 600);
        centralwidget = new QWidget(test1);
        centralwidget->setObjectName("centralwidget");
        mylist = new QListWidget(centralwidget);
        mylist->setObjectName("mylist");
        mylist->setGeometry(QRect(300, 20, 256, 192));
        test1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(test1);
        statusbar->setObjectName("statusbar");
        test1->setStatusBar(statusbar);
        menubar = new QMenuBar(test1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        test1->setMenuBar(menubar);

        retranslateUi(test1);

        QMetaObject::connectSlotsByName(test1);
    } // setupUi

    void retranslateUi(QMainWindow *test1)
    {
        test1->setWindowTitle(QCoreApplication::translate("test1", "test1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test1: public Ui_test1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST1_H
