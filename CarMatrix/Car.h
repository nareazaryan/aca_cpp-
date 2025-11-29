#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
private:
  string c_name;
  string c_model;
  int c_year;
  string c_color;
  string c_engineType;

  static int count;

public:
  Car(string name, string model, int year, string color, string engineType);
  ~Car();

  static int GetCount();
  string GetName();
  string GetModel();
  int GetYear();

  void ChangingColor(string new_color);
  void DisplayInfo() const;
  Car(const Car &other);
  Car &operator=(const Car &other);
};

#endif