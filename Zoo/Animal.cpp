#include "Animal.h"
#include <iostream>
using namespace std;

//animal
Animal::Animal() {}

Animal::~Animal() {}   


//dog
Dog::Dog() {}

Dog::~Dog() {}

void Dog::Voice() const {
    cout << "Woof!" << endl;
}


//cat
Cat::Cat() {}

Cat::~Cat() {}

void Cat::Voice() const {
    cout << "Meow!" << endl;
}


//snake
Snake::Snake() {}

Snake::~Snake() {}

void Snake::Voice() const {
    cout << "Hissss!" << endl;
}
