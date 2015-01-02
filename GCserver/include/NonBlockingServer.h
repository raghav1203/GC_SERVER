#ifndef NONBLOCKINGSERVER_H
#define NONBLOCKINGSERVER_H

#include "IoHandlerAdapter.h"

class NonBlockingServer
{
    public:
        virtual bool start(IoHandlerAdapter& adaptor) = 0;
        virtual void stop() = 0;
    protected:
    private:
};

#endif // NONBLOCKINGSERVER_H
