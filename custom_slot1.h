#include <QObject>

class Newspaper : public QObject {
    Q_OBJECT
   public:
    Newspaper(const QString& name) : m_name(name) {}
    void send() {
        emit newPaper(m_name);
    }
   signals:
    void newPaper(const QString& name); //这个函数只是充当信号用 => 相当于回调的协议格式

   private:
    QString m_name;
}; //class 结束有 ';' 号


#include <QDebug>
class Reader : public QObject{
    Q_OBJECT
public:
    Reader(){}
// public slots: //现在普通函数就可以接收信号了么, 不再需要slots声明了？
// https://stackoverflow.com/questions/47196736/are-public-slots-sections-still-necessary-in-qt5 (说明: 可以用，声明更好的样子)
    void receiveNewspaper(const QString & name){
        qDebug() << "收到报纸信息: " << name;
    }
};
