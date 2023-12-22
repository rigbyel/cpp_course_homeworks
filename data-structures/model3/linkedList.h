#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "IStructure.h"
#include "node.h"

class LinkedList : public IStructure{
public:
    Node* head;
    Node* tail;

    LinkedList();
    void push(int value);
    int pop();
    void print();
    bool empty();
};

#endif