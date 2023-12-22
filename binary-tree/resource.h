#define RESOURCE_H

template <typename T>
class Node {
public:
    T key;
    Node* left;
    Node* right;

    Node(T value);
    Node();
    Node<T>* insert(Node* node, T value);
    Node* search(Node* root, T value);

};


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
        return search(root->left, value);
    }
    else {
        return search(root->right, value);
    }
}

template <typename T>
Node<T>* Node<T>::insert(Node<T>* node, T value) {
    if (node == NULL)
        return new Node(value);
    if (value < node->key)
        node->left = insert(node->left, value);
    else if (value > node->key)
        node->right = insert(node->right, value);

    return node;
}
