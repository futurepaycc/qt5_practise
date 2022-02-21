#include <QApplication>
#include <QPushButton>
#include <QWidget>

/* 
make source=button1
*/

class MyWindow : public QWidget {
   public:
    MyWindow(QWidget *parent = 0);
};

MyWindow::MyWindow(QWidget *parent) : QWidget(parent) {
    QPushButton *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50, 40, 75, 30);
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

int test1_single_button(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MyWindow window;

    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();

    return app.exec();
}

int main(int argc,char * argv[]){
    test1_single_button(argc,argv);
}