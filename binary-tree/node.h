#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
public:
    T key;
    Node* left;
    Node* right;

    Node(T value);
    Node();
    Node* insert(Node* node, T value);
    Node* search(Node* root, T value);

};

#endif