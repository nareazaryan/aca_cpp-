#include "Zoo.h"

int main() {
    Zoo z(5);

    Animal* d = new Dog(13.5);
    Animal* c = new Cat(4.0);
    Animal* s = new Snake(2.7);

    z.AddAnimal(d);
    z.AddAnimal(c);
    z.AddAnimal(s);
    
    if (*d > *c){
      
      cout << "Dog > Cat" << endl;
    }
    else {
      cout << "Cat > Dog" << endl;
    }
    if(*c < *s) 
    {cout << "Snake > Cat" << endl;    }
    else {
      cout << "Cat > Snake" << endl;
    }
    if(*d == *s) {
      cout << "Dog == Snake" << endl;
    } 
    else {
      cout << "Not equal" << endl;
    }

    z.MakeVoices();

    return 0;
}
