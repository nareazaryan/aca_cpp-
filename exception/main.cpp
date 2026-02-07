#include <iostream>
#include "MyVector.h"

int main() {
    MyVector vec;

    std::cout << "Adding valid elements" << std::endl;
    try {
        vec.addElement(10);
        vec.addElement(20);
        vec.addElement(30);
        std::cout << "Successfully added elements" << std::endl;
        vec.printAll();
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Adding negative elements" << std::endl;
    try {
        vec.addElement(-5);
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
