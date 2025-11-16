#include <iostream>
#include "Zoo.h"
using namespace std;

Zoo::Zoo(int capacity)
    : m_capacity(capacity), m_size(0)
{
    m_animals = new Animal*[m_capacity];
}

Zoo::~Zoo() {
    for (int i = 0; i < m_size; ++i) {
        delete m_animals[i]; 
    }
    delete[] m_animals;
}

void Zoo::AddAnimal(Animal* a) {
    if (m_size < m_capacity) {
        m_animals[m_size++] = a;
    } else {
        cout << "Zoo is full!" << endl;
        delete a; 
    }
}

void Zoo::MakeVoices() const {
    for (int i = 0; i < m_size; ++i) {
        m_animals[i]->Voice(); 
    }
}
