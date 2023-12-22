#include <iostream>
#include "resource.h"

using namespace std;

int main() {

    Node<int> myNode{ 8 };
    cout << myNode.key << endl;

    myNode.insert(&myNode, 4);
    myNode.insert(&myNode, 18);
    myNode.insert(&myNode, 9);

    cout << (myNode.search(&myNode, 9))->key << endl;
    cout << (myNode.search(&myNode, 1000));
    return 0;

}