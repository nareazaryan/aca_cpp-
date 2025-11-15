#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "Engine.h"
using namespace std;

class Car {
private:
  string c_name;
  string c_model;
  int c_year;
  string c_color;
  Engine c_engine;

public:
  Car(string name, string model, int year, string color, Engine engine);
  ~Car();
  string GetName();
  string GetModel();
  int GetYear();
  void ChangingColor(string new_color);
  void DisplayInfo() const;
  Car(const Car &other);
  Car &operator=(const Car &other);
};

#endif