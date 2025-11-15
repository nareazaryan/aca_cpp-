#include <iostream>
#include "Car.h"


Car::Car(string name, string model, int year, string color, Engine engine)
    : c_name(name), c_model(model), c_year(year), c_color(color),
       c_engine(engine) {}

Car::Car(const Car &other) {
  c_name = other.c_name;
  c_model = other.c_model;
  c_year = other.c_year;
  c_color = other.c_color;
  c_engine = other.c_engine;
}

Car &Car::operator=(const Car &other) {
  if (this != &other) { 
    c_name = other.c_name;
    c_model = other.c_model;
    c_year = other.c_year;
    c_color = other.c_color;
    c_engine = other.c_engine;
  }
  return *this;
}

string Car::GetName() { return c_name; }

string Car::GetModel() { return c_model; }

int Car::GetYear() { return c_year; }

void Car::ChangingColor(string new_color) { c_color = new_color; }

void Car::DisplayInfo() const {
  cout << "Name: " << c_name << endl;
  cout << "Model: " << c_model << endl;
  cout << "Year: " << c_year << endl;
  cout << "Color: " << c_color << endl;
  c_engine.ShowEngine();
}

Car::~Car(){};