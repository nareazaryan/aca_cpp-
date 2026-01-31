#pragma once

#include <iterator>

template <typename T> struct node {
  T data;
  node *next;
  node(T val) : data(val), next(nullptr) {}
};

template <typename T> class ForwardIterator {
public:
  ForwardIterator(node<T> *p) : nodePtr(p) {}

  T &operator*() const { return nodePtr->data; }
  T *operator->() const { return &(nodePtr->data); }

  bool operator==(const ForwardIterator &other) const {
    return nodePtr == other.nodePtr;
  }

  bool operator!=(const ForwardIterator &other) const {
    return nodePtr != other.nodePtr;
  }

  ForwardIterator &operator++() {
    if (nodePtr) { // Ստուգում ենք, որ nullptr-ի վրա չկանչենք ->next
      nodePtr = nodePtr->next;
    }
    return *this;
  }

  ForwardIterator operator++(int) {
    ForwardIterator temp = *this;
    if (nodePtr) {
      nodePtr = nodePtr->next;
    }
    return temp;
  }

private:
  node<T> *nodePtr;
};