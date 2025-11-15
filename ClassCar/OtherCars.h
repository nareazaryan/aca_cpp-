#ifndef OTHERCARS_H
#define OTHERCARS_H
#include "Car.h"
#include "Engine.h"
#include <iostream>
using namespace std;

class Mercedes : public Car {
public:
  Mercedes(string model, int year, string color, string engineType, int hp, double volume);
};

class McLaren: public Car {
    public:
    McLaren(string model, int year, string color, string engineType, int hp, double volume);
};

class Ferrari: public Car{
    public: 
    Ferrari(string model, int year, string color, string engineType, int hp, double volume);
};

#endif