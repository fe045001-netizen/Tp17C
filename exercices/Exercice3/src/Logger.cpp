#include "Logger.h"
using namespace std;
Logger* Logger::instance = nullptr;

Logger* Logger::getInstance() {
    if (!instance)
        instance = new Logger();
    return instance;
}

void Logger::log(const string& message) {
    cout << "[LOG] " << message << std::endl;
}

