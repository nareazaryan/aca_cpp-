#include <iostream>
using namespace std;

// 79: Գրել class List ավելացնել մեր կողմից գրված namespace-ում. Իմպլեմանտացնել
// նրա համար insert push_pront, pop_front մեթոդները

namespace m_List {

struct Node {
  int data;
  Node *next;
};

class List {
  Node *first;
  int size;

public:
  List();
  ~List();

  bool IsEmpty() const;
  void print() const;

  void insert(int x);
  void push_front(int x);
  void pop_front();
};

List::List() {
  first = NULL;
  size = 0;
}

List::~List() {
  while (first != NULL) {
    pop_front();
  }
}

bool List::IsEmpty() const { return first == NULL; }

void List::print() const {
  Node *temp = first;
  cout << "List: ";
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "(size=" << size << ")" << endl;
}

void List::insert(int x) {
  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = NULL;

  if (first == NULL) {
    first = newNode;
    return;
  }

  Node *temp = first;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = newNode;
  size++;
}

void List::push_front(int x) {
  Node *newNode = new Node;
  newNode->data = x;
  newNode->next = first;
  first = newNode;
  size++;
}

void List::pop_front() {
  if (first == NULL)
    return;

  Node *temp = first;
  first = first->next;
  delete temp;
  size++;
}

} // namespace m_List

int main() {

  using namespace m_List;

  List L;

  cout << "Push_front 10" << endl;
  L.push_front(10);
  L.print();

  cout << "Push_front 5" << endl;
  L.push_front(5);
  L.print();

  cout << "Insert 20 at end" << endl;
  L.insert(20);
  L.print();

  cout << "Pop_front" << endl;
  L.pop_front();
  L.print();

  return 0;
}