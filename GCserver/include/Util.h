#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>

using namespace std;

class Util
{
    public:
        static void logInfo(string log);
        static void logDebug(string log);
        static void logWarn(string log);
        static void logError(string log);
    protected:
    private:
};

#endif // UTIL_H
