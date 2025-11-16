#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"

class Zoo {
private:
  Animal **m_animals;
  int m_capacity;
  int m_size;

public:
  Zoo(int capacity);
  ~Zoo();

  void AddAnimal(Animal *a);
  void MakeVoices() const;
};

#endif