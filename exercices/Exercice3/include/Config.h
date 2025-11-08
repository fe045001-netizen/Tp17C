#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <map>
using namespace std;

class Config {
private:
    map<string, string> data;

public:
    bool loadFromFile(const string& filename);
    string getValue(const string& key) const;
};

#endif

