#ifndef TCPSERVER_H
#define TCPSERVER_H

#include "NonBlockingServer.h"

class TCPServer : public NonBlockingServer
{
public:
    TCPServer();
    virtual ~TCPServer();
    bool start(IoHandlerAdapter& adaptor) override;
    void stop() override;
protected:
private:
};

#endif // TCPSERVER_H
