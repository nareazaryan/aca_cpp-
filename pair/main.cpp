#include <iostream>
#include <string>
#include "pair.hpp"

int main() {
    Pair<int, double> p1(3, 4.5);
    Pair<int, double> p2(2, 3.5);

    Pair<int, double> p3 = p1 + p2;

    std::cout << p3.first << " " << p3.second << std::endl;

    if (p1 != p2) {
        std::cout << "not equal" << std::endl;
    }

    Pair<std::string, std::string> p4("Hello ", "Good ");
    Pair<std::string, std::string> p5("World", "Luck");

    Pair<std::string, std::string> p6 = p4 + p5;

    std::cout << p6.first << p6.second << std::endl;

    return 0;
}