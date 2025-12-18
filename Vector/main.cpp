#include <iostream>
#include "Vector.h"

int main() {
    Vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (unsigned i = 0; i < v.get_size(); ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    Vector<int> v2 = v;   

    for (unsigned i = 0; i < v2.get_size(); ++i) {
        std::cout << v2[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
