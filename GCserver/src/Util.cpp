#include "Util.h"

void Util::logInfo(string log)
{
    std::cout << "LOG: " << log << '\n';
}

void Util::logDebug(string log)
{
    std::cout << "DEBUG: " << log << '\n';
}

void Util::logWarn(string log)
{
    std::cout << "WARN: " << log << '\n';
}

void Util::logError(string log)
{
    std::cerr << "ERROR: " << log << '\n';
}
