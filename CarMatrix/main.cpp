#include <iostream>
#include "Car.h"
#include "Matrixx.h"
using namespace std;


int main() {
    Matrix m(2);
    m.Initialize();   
    m.Print();  

    cout << endl;
     cout << m.getCarCount() << endl;

    return 0;
}