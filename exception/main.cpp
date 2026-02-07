#include <iostream>
#include "MyVector.h"

int main() {
    MyVector vec;

    std::cout << "Test1: Adding valid elements" << std::endl;
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

    std::cout << "Test2: Adding negative elements" << std::endl;
    try {
        vec.addElement(-5);
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Test3: Accessing valid index" << std::endl;
    try {
        int value = vec.getElement(1);
        std::cout << "Element at index 1: " << value << std::endl;
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl; 

    std::cout << "Test4: Accessing invalid index" << std::endl;
    try {
        int value = vec.getElement(5);
        std::cout << "Element at index 5: " << value << std::endl   ;   
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }



    return 0;
}
