#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <string>
using namespace std;

class Engine {
private:
    string e_type;
    int e_horsepower;
    double e_volume;

public:
    Engine();
    Engine(string type, int hp, double volume);
    ~Engine();

    void ShowEngine() const;
};

#endif
