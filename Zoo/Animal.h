#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
protected:
  double weight;

public:
  Animal(double w = 0.0);
  virtual ~Animal();

  virtual void Voice() const;

  double GetWeight() const;
  void SetWeight(double w);

  bool operator<(const Animal &other) const;
  bool operator>(const Animal &other) const;
  bool operator==(const Animal &other) const;
};

class Dog : public Animal {
public:
  Dog(double w = 0.0);
  ~Dog();
  void Voice() const override;
};

class Cat : public Animal {
public:
  Cat(double w = 0.0);
  ~Cat();
  void Voice() const override;
};

class Snake : public Animal {
public:
  Snake(double w = 0.0);
  ~Snake();
  void Voice() const override;
};

#endif
