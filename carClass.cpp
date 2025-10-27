
// 44: Աբստրակցիայի ենթարկել Car class-ը գրել նվազագույն 5 մեթող և պահել
// նվազագույնը 5 member

//then added 46

//46: Ստեղծել car engine և driver class-ները և ստեղծել նրանց հարաբերությունները

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
  string c_name;
  string c_model;
  int c_year;
  string c_color;
  string c_engineType;

public:
  Car(string name, string model, int year, string color, string engineType);
  ~Car();
  string GetName();
  string GetModel();
  int GetYear();
  void ChangingColor(string new_color);
  void DisplayInfo() const;
};

Car::Car(string name, string model, int year, string color, string engineType)
    : c_name(name), c_model(model), c_year(year), c_color(color),
      c_engineType(engineType){};

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

Car::~Car(){};

class Driver {
private:
  string d_name;
  int d_age;
  Car d_car; // Driver has-a Car

public:
  Driver(const string &name, int age, const Car &c);

  void SetCar(const Car &c);

  void DisplayDriverInfo() const;
};

Driver::Driver(const string &name, int age, const Car &c)
    : d_name(name), d_age(age), d_car(c) {}

void Driver::SetCar(const Car &c) { d_car = c; }

void Driver::DisplayDriverInfo() const {
    cout << "Driver Info" << endl;
    cout << "Name: " << d_name << endl;
    cout << "Age: " << d_age << endl;
    cout << endl;
    d_car.DisplayInfo();
  }



int main() {
  Car myCar("Bmw", "m5", 2025, "black", "diesel");

  myCar.DisplayInfo();
}