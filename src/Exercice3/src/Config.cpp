#include "Config.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
bool Config::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) return false;

    string line;
    while (getline(file, line)) {
        auto pos = line.find('=');
        if (pos != string::npos)
            data[line.substr(0, pos)] = line.substr(pos + 1);
    }
    return true;
}

string Config::getValue(const string& key) const {
    auto it = data.find(key);
    if (it != data.end()) return it->second;
    return "";
}

