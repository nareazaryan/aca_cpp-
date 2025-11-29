
#include "Car.h"
#include <iostream>
using namespace std;

int Car::count = 0;

Car::Car(string name, string model, int year, string color, string engineType)
    : c_name(name), c_model(model), c_year(year), c_color(color),
      c_engineType(engineType) {
  count++;
};

Car::Car(const Car &other) {
  c_name = other.c_name;
  c_model = other.c_model;
  c_year = other.c_year;
  c_color = other.c_color;
  c_engineType = other.c_engineType;
  count++;
  cout << "Copy constructor called!" << endl;
}

Car &Car::operator=(const Car &other) {
  if (this != &other) {
    c_name = other.c_name;
    c_model = other.c_model;
    c_year = other.c_year;
    c_color = other.c_color;
    c_engineType = other.c_engineType;
    cout << "Assignment operator called!" << endl;
  }
  return *this;
}

int Car::GetCount() { return count; }

string Car::GetName() { return c_name; }

string Car::GetModel() { return c_model; }

int Car::GetYear() { return c_year; }

void Car::ChangingColor(string new_color) { c_color = new_color; }

void Car::DisplayInfo() const {
  cout << "Name: " << c_name << endl;
  cout << "Model: " << c_model << endl;
  cout << "Year: " << c_year << endl;
  cout << "Color: " << c_color << endl;
  cout << "Engine Type: " << c_engineType << endl;
}

Car::~Car(){count--;};