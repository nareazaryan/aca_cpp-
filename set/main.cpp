#include "set.hpp"
#include <iostream>
#include <string>

template <typename T>
void printVector(const std::vector<T>& v) {
    for (const auto& x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Integer set
    Set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(1);
    s.insert(9);
    s.insert(3); // duplicate

    std::cout << "Size: " << s.size() << std::endl;

    std::cout << "Contains 5? " << (s.contains(5) ? "Yes" : "No") << std::endl;
    std::cout << "Contains 10? " << (s.contains(10) ? "Yes" : "No") << std::endl;

    std::cout << "Inorder: ";
    printVector(s.inorder());

    std::cout << "Preorder: ";
    printVector(s.preorder());

    std::cout << "Postorder: ";
    printVector(s.postorder());

    // String set
    Set<std::string> strSet = {"apple", "banana", "cherry"};

    std::cout << "\nString set inorder: ";
    printVector(strSet.inorder());

    std::cout << "Contains banana? "
              << (strSet.contains("banana") ? "Yes" : "No") << std::endl;

    return 0;
}
