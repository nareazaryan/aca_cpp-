#include <iostream>
#include "forward.hpp" 

int main() {
    node<int>* head = new node<int>(5);
    head->next = new node<int>(15);
    head->next->next = new node<int>(25);

    ForwardIterator<int> it = head;
    ForwardIterator<int> end = nullptr;

    std::cout << "iterator testing: ";
    for (; it != end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    node<int>* current = head;
    while (current != nullptr) {
        node<int>* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}