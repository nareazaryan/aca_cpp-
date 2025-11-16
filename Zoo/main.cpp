#include "Zoo.h"

int main() {
  Zoo z(5);

  z.AddAnimal(new Dog());
  z.AddAnimal(new Cat());
  z.AddAnimal(new Snake());


  z.MakeVoices();

  return 0;
}
