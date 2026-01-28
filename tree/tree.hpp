#pragma once
#include <iostream>
#include "../queue/queue.hpp"

template <typename T>
class Tree {
public:
    struct Node {
        T data;
        Node* left;
        Node* right;

        Node(const T& val) : data(val), left(nullptr), right(nullptr) {}
        Node(T&& val) : data(std::move(val)), left(nullptr), right(nullptr) {}
    };

    Tree() : root(nullptr) {
        
    }

    ~Tree() {
        clear(root);
        std::cout << "Destructor called!" << std::endl;
    }

    void insert(const T& value) {
        if (!root) {
            root = new Node(value);
            return;
        }

        Queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* cur = q.front();
            q.pop();

            if (!cur->left) {
                cur->left = new Node(value);
                return;
            } else {
                q.push(cur->left);
            }

            if (!cur->right) {
                cur->right = new Node(value);
                return;
            } else {
                q.push(cur->right);
            }
        }
    }

private:
    Node* root;

    static void clear(Node* node) {
        if (!node) return;
        clear(node->left);
        clear(node->right);
        delete node;
    }
};
