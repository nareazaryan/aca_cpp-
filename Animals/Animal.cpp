#include "Animal.h"

Animal::Animal(string name = "no name", string sound = " ", int age = 0,
               double weight = 0.0)
    : name(name), sound(sound), age(age), weight(weight) {}

Animal::Animal(const Animal &other) {
  name = other.name;
  sound = other.sound;
  age = other.age;
  weight = other.weight;
}

Animal &Animal::operator=(const Animal &other) {
  if (this != &other) {
    name = other.name;
    sound = other.sound;
    age = other.age;
    weight = other.weight;
  }
  return *this;
}

string Animal::getName() const { return name; }
string Animal::getSound() const { return sound; }
int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }

void Animal::setName(const string &n) { name = n; }
void Animal::setSound(const string &s) { sound = s; }
void Animal::setAge(int a) { age = a; }
void Animal::setWeight(double w) { weight = w; }

void Animal::Info() const {
  cout << "Animal's name: " << name << endl;
  cout << "Animal's sound: " << sound << endl;
  cout << "Animal's age: " << age << endl;
  cout << "Animal's weight: " << weight << endl;
}
ostream &operator<<(ostream &os, const Animal &a) {
  os << "Name: " << a.name << ", Sound: " << a.sound << ", Age: " << a.age
     << ", Weight: " << a.weight << " kg";
  return os;
}

Animal::~Animal() { cout << "Destructor called!" << endl; }