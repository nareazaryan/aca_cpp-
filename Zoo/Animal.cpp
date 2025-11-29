#include "Animal.h"
#include <iostream>
using namespace std;

// animal
Animal::Animal(double w) : weight(w) {}

double Animal::GetWeight() const { return weight; }

void Animal::SetWeight(double w) { weight = w; }

bool Animal::operator<(const Animal &other) const {
  return weight < other.weight;
}

bool Animal::operator>(const Animal &other) const {
  return weight > other.weight;
}

bool Animal::operator==(const Animal &other) const {
  return weight == other.weight;
}


void Animal::Voice() const {
    cout << "Some animal sound" << endl;
}

Animal::~Animal() {}

// dog
Dog::Dog(double w) : Animal(w) {}

Dog::~Dog() {}

void Dog::Voice() const { cout << "Woof!" << endl; }

// cat
Cat::Cat(double w) : Animal(w) {}

Cat::~Cat() {}

void Cat::Voice() const { cout << "Meow!" << endl; }

// snake
Snake::Snake(double w) : Animal(w) {}

Snake::~Snake() {}

void Snake::Voice() const { cout << "Hissss!" << endl; }
