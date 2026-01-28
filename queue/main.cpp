#include <iostream>
#include "queue.hpp"

int main() {
    Queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    std::cout << "Front: " << q.front() << std::endl; // 5
    std::cout << "Size: " << q.size() << std::endl;   // 3

    q.pop();

    std::cout << "Front after pop: " << q.front() << std::endl; // 10
    std::cout << "Size after pop: " << q.size() << std::endl;  // 2

    return 0;
}
