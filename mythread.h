#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QIODevice>
#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class MyThread :public QThread
{
  Q_OBJECT
public:
 // MyThread();
  explicit MyThread(int ID , QObject *parent = nullptr);
  void run();

signals:
 void errorOccurred(QTcpSocket::SocketError socketError);

public slots:
  void readyRead();
  void	disconnected();

private:
  QTcpSocket * socket;
  int socketDescriptor;

};

#endif // MYTHREAD_H
