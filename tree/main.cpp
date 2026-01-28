#include <iostream>
#include "tree.hpp"

int main() {
    Tree<int> t;

    std::cout << "Inserting elements\n";

    for (int i = 1; i <= 7; i++) {
        t.insert(i);
    }

    std::cout << "Tree built successfully\n";

   
    return 0;
}
