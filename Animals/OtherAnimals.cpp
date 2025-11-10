#include "OtherAnimals.h"
#include <iostream>
using namespace std;

// Dog

Dog::Dog(string n, string s, int a, double w, string b, bool p, bool t)
    : Animal(n, s, a, w), breed(b), pet(p), trained(t) {}

void Dog::ShowInfo() const {
  cout << "Dog's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Breed: " << breed << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Pet: " << (pet ? "Yes" : "No") << endl;
  cout << "Trained: " << (trained ? "Yes" : "No") << endl;
}

Dog::~Dog() { cout << "Dog destructor called" << endl; }

// Cat

Cat::Cat(string n, string s, int a, double w, string c, bool i)
    : Animal(n, s, a, w), color(c), indoor(i) {}

void Cat::ShowInfo() const {
  cout << "Cat's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Color: " << color << endl;
  cout << "Indoor: " << (indoor ? "Yes" : "No") << endl;
}
Cat::~Cat() { cout << "Cat destructor called" << endl; }

// Snake

Snake::Snake(string n, string s, int a, double w, double l, bool v)
    : Animal(n, s, a, w), length(l), venomous(v) {}

void Snake::ShowInfo() const {
  cout << "Snake's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Lenght: " << length << endl;
  cout << "Venomous: " << (venomous ? "Yes" : "No") << endl;
}

Snake::~Snake() { cout << "Snake destructor called" << endl; }

// Koala

Koala::Koala(string n, string s, int a, double w, int sh, string ft)
    : Animal(n, s, a, w), sleepHours(sh), favoriteTree(ft) {}

void Koala::ShowInfo() const {
  cout << "Koala's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Sleep hours: " << sleepHours << endl;
  cout << "Favorite tree: " << favoriteTree << endl;
}

Koala::~Koala() { cout << "Koala destructor called" << endl; }

// Panda

Panda::Panda(string n, string s, int a, double w, string ff, int bpd)
    : Animal(n, s, a, w), favoriteFood(ff), bambooPerDay(bpd) {}

void Panda::ShowInfo() const {
  cout << "Panda's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Favorite food: " << favoriteFood << endl;
  cout << "Bamboo per day: " << bambooPerDay << endl;
}

Panda::~Panda() { cout << "Panda destructor called" << endl; }

// Flamingo

Flamingo::Flamingo(string n, string s, int a, double w, double ll, string c)
    : Animal(n, s, a, w), legLength(ll), color(c) {}

void Flamingo::ShowInfo() const {
  cout << "Flamino's info" << endl;
  cout << "Name : " << name << endl;
  cout << "Sound: " << sound << endl;
  cout << "Age: " << age << endl;
  cout << "Weight: " << weight << " kg" << endl;
  cout << "Leg lenght: " << legLength << endl;
  cout << "Color: " << color << endl;
}

Flamingo::~Flamingo() { cout << "Flamingo destructor called" << endl; }
