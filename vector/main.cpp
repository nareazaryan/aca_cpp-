#include <iostream>
#include "vec/vector.hpp"

int main() {
    Vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (size_t i = 0; i < v.get_size(); ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    Vector<int> v2 = v;   

    for (size_t i = 0; i < v2.get_size(); ++i) {
        std::cout << v2[i] << " ";
    }

    std::cout << std::endl;

      try {
        std::cout << v.at(20) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

        std::cout << std::endl;


    return 0;
}
