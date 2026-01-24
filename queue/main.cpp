#include <iostream>
#include <../Vector/Vector.hpp>
#include "queue.hpp"
using namespace std;

int main() { 

Queue<int> q;

    cout << "Empty? " << q.empty() << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;

    q.pop(); 

    cout << "After pop, front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;

    Queue<int> q2 = {20, 30};

    cout << "Queues q1 and q2 are equal? " << q.equals(q2) << endl;

    q.clear();

    return 0;
}
