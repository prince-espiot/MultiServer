#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QObject>
#include <QDebug>
#include "mythread.h"

class MyServer : public QTcpServer
{
  Q_OBJECT
public:
  explicit MyServer(QObject *parent = nullptr);
  void StartServer();

 signals:

public slots:

protected:
 void incomingConnection(qintptr socketDescriptor);
};

#endif // MYSERVER_H
