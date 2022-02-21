#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QDebug>

//https://artandlogic.com/2013/09/qt-5-and-c11-lambdas-are-your-friend/
//https://wiki.qt.io/New_Signal_Slot_Syntax
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    window.resize(800, 600);
    window.setWindowTitle("第一个应用");
    window.show();

    QPushButton *button1 = new QPushButton(&window);
    button1->setText("hello1");
    button1->show();

    // window.connect(button1, &QPushButton::clicked, qApp, &QApplication::quit);

    //这里要捕获指针、对像引用    
    // QObject::connect(button1, &QPushButton::clicked, qApp, [button1,&window]() {
    QObject::connect(button1, &QPushButton::clicked, qApp, [&]() {
        qDebug() << ".....gdb看不到这里的输出呢, 在terminal_tab查看.....";
        button1->setText("hello2");
        window.setWindowTitle("changed");
    });


    return app.exec();
}