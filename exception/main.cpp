#include <iostream>
#include "MyVector.h"

int main() {
    MyVector vec;

    std::cout << "=== Testing MyVector with Custom Exception ===" << std::endl << std::endl;

    // Test 1: Adding valid elements
    std::cout << "Test 1: Adding valid elements" << std::endl;
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

    // Test 2: Attempting to add a negative value
    std::cout << "Test 2: Attempting to add negative value" << std::endl;
    try {
        vec.addElement(-5);
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test 3: Accessing element by valid index
    std::cout << "Test 3: Accessing element at index 1" << std::endl;
    try {
        int value = vec.getElement(1);
        std::cout << "Element at index 1: " << value << std::endl;
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test 4: Accessing element by invalid index
    std::cout << "Test 4: Accessing element at invalid index 10" << std::endl;
    try {
        int value = vec.getElement(10);
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test 5: Removing element by valid index
    std::cout << "Test 5: Removing element at index 0" << std::endl;
    try {
        vec.removeElement(0);
        std::cout << "Successfully removed element" << std::endl;
        vec.printAll();
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test 6: Removing element by invalid index
    std::cout << "Test 6: Attempting to remove element at invalid index 10" << std::endl;
    try {
        vec.removeElement(10);
    } catch (const MyException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
