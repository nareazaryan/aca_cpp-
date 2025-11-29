#include "Animal.h"
#include "OtherAnimals.h"
#include <iostream>

using namespace std;

int main() {

  Dog d("Rex", "Woof", 3, 25.4, "Labrador", true, true);
  Cat c("Mimi", "Meow", 2, 4.5, "Gray", true);
  Snake s("Slither", "Hiss", 5, 8.0, 2.1, true);
  Koala k("Koko", "Grunt", 4, 10.2, 20, "Eucalyptus");
  Panda p("Po", "Munch", 7, 120.5, "Bamboo", 30);
  Flamingo f("Lola", "Honk", 5, 3.3, 105.0, "Pink");

  d.ShowInfo();
  cout << endl;
  c.ShowInfo();
  cout << endl;

  s.ShowInfo();
  cout << endl;

  k.ShowInfo();
  cout << endl;

  p.ShowInfo();
  cout << endl;

  f.ShowInfo();
  cout << endl;

  

  return 0;
}
