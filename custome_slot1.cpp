#include <QCoreApplication>
#include "custom_slot1.moc.h" 
/* 
moc custom_slot1.h -o custom_slot1.moc.h (说明: 这一步预编译不可以省略,强制多文件)
g++ -g -fPIC `pkg-config --cflags --libs Qt5WebEngineWidgets` custome_slot1.cpp -o bin/custome_slot1
*/
int main(int argc,char * argv[]){
    QCoreApplication app(argc,argv);
    Newspaper newspaper("一份新报纸");
    Reader reader;
    QObject::connect(&newspaper,&Newspaper::newPaper,&reader,&Reader::receiveNewspaper);
    newspaper.send();
    return app.exec();
}