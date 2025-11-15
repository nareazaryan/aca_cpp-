#include "OtherCars.h"
#include <iostream>
using namespace std;

// Mercedes

Mercedes::Mercedes(string model, int year, string color, string engineType, int hp, double volume)
    : Car("Mercedes", model, year, color, Engine(engineType, hp, volume)) {}

// McLaren

McLaren::McLaren(string model, int year, string color, string engineType, int hp, double volume)
    : Car("McLaren", model, year, color, Engine(engineType, hp, volume)) {}

// Ferrari

Ferrari::Ferrari(string model, int year, string color, string engineType, int hp, double volume)
    : Car("Ferrari", model, year, color, Engine(engineType, hp, volume)) {}
