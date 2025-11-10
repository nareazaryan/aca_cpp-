#ifndef OTHERANIMALS_H
#define OTHERANIMALS_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal {
private:
  string breed;
  bool pet;
  bool trained;

public:
  Dog(string n, string s, int a, double w, string b, bool p, bool t);
  void ShowInfo() const;
  ~Dog();
};

class Cat : public Animal {
private:
  string color;
  bool indoor;

public:
  Cat(string n, string s, int a, double w, string c, bool i);
  void ShowInfo() const;
  ~Cat();
};

class Snake : public Animal {
private:
  double length;
  bool venomous;

public:
  Snake(string n, string s, int a, double w, double l, bool v);
  void ShowInfo() const;
  ~Snake();
};

class Koala : public Animal {
private:
  int sleepHours;
  string favoriteTree;

public:
  Koala(string n, string s, int a, double w, int sh, string ft);
  void ShowInfo() const;
  ~Koala();
};

class Panda : public Animal {
private:
  string favoriteFood;
  int bambooPerDay;

public:
  Panda(string n, string s, int a, double w, string ff, int bpd);
  void ShowInfo() const;
  ~Panda();
};

class Flamingo : public Animal {
private:
  double legLength;
  string color;

public:
  Flamingo(string n, string s, int a, double w, double ll, string c);
  void ShowInfo() const;
  ~Flamingo();
};

#endif