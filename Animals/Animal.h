#ifndef ANIMAL_H
#define ANIMAL_H

#include <cstring>
#include <iostream>
using namespace std;

class Animal {
protected:
  string name;
  string sound;
  int age;
  double weight;

public:
  Animal(string name, string sound, int age, double weight);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);

  Animal(Animal &&other) noexcept;
  Animal &operator=(Animal &&other) noexcept;

  string getName() const;
  string getSound() const;
  int getAge() const;
  double getWeight() const;

  void setName(const string &n);
  void setSound(const string &s);
  void setAge(int a);
  void setWeight(double w);

  void Info() const;
  friend ostream &operator<<(ostream &os, const Animal &a);

  ~Animal();
};

#endif