#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>
using namespace std;
class Logger {
private:
    static Logger* instance;
    Logger() {} 

public:
    static Logger* getInstance();
    void log(const string& message);
};

#endif

