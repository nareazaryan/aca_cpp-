#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    Animal();
    virtual ~Animal();

    virtual void Voice() const; 
};



class Dog : public Animal {
public:
    Dog();
    ~Dog();
    void Voice() const override;
};

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    void Voice() const override;
};

class Snake : public Animal {
public:
    Snake();
    ~Snake();
    void Voice() const override;
};

#endif
