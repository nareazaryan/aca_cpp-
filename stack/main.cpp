#include "stack.hpp"
#include <iostream>
using namespace std;

int main() {
    Stack<int> s;

    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top element: " << s.top() << endl; // 15

    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 10

    cout << "Stack size: " << s.size() << endl; // 2

    while (!s.isEmpty()) {
        cout << "Popping: " << s.top() << endl;
        s.pop();
    }

    return 0;
}
