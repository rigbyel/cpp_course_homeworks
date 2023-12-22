#include <iostream>
#include "node.h"

using namespace std;

template <typename T>
Node<T>::Node(T value) : key{ value }, right{ NULL }, left{ NULL } {}

template <typename T>
Node<T>* Node<T>::search(Node<T>* root, T value) {
    if (root == NULL) {
        return root;
    }

    if (root->key == value) {
        return root;
    }

    if (root->key > value) {
        return search(left, value);
    }
    else {
        return search(right, value);
    }
}

template <typename T>
Node<T>* Node<T>::insert(Node<T>* node, T value) {
    if (node == NULL)
        return new Node(value);
    if (key < node->key)
        node->left = insert(node->left, value);
    else if (key > node->key)
        node->right = insert(node->right, value);

    return node;
}

int main() {

    Node<int> myNode{ 8 };
    cout << myNode.key << endl;

    myNode.insert(&myNode, 4);

    cout << myNode.search(&myNode, 21)->key;
    return 0;
}