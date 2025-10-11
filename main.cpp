#include <cstdlib>
#include <iostream>
using namespace std;

void *operator new(size_t size) {
  cout << "Costum made new operator" << endl;
  void *p = malloc(size);
  if (!p)
    return nullptr;
  return p;
}

void operator delete(void *p) {
  cout << "Custom made delete operator" << endl;
  free(p);
}

void operator delete[](void *p) {
  cout << "Custom made delete[] operator" << endl;
  free(p);
}

int main(){

}