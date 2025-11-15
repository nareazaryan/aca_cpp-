#include "Car.h"
#include "Engine.h"
#include "OtherCars.h"
#include <iostream>
using namespace std;

int main() {

  Mercedes m("S-Class", 2023, "Black", "V8 Biturbo", 600, 4.0);
  McLaren mc("720S", 2022, "Orange", "V8 Twin Turbo", 720, 4.0);
  Ferrari f("812 Superfast", 2021, "Red", "V12", 800, 6.5);

  m.DisplayInfo();
  cout << endl;

  mc.DisplayInfo();
  cout << endl;

  f.DisplayInfo();

  return 0;
}
