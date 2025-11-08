#include "Logger.h"
#include "Config.h"
#include <iostream>

int main() {
    Logger::getInstance()->log("Test");

    Config cfg;
    if (cfg.loadFromFile("config.txt")) {
        std::cout << "Valeur de 'username' : " << cfg.getValue("username") << std::endl;
    } else {
        std::cout << "Impossible " << std::endl;
    }

    return 0;
}

