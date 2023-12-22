#include "linkedList.h"
#include <iostream>
#include <exception>

LinkedList::LinkedList() : head(nullptr), tail(nullptr){}

void LinkedList::push(int value) {
    Node* newNodePtr = new Node(value);
    if (head == nullptr) {
        head = newNodePtr;
    }
    if(tail != nullptr){
        tail->next = newNodePtr;
    }
    tail = newNodePtr;
}

int LinkedList::pop() {
    int temp;
    if (tail == nullptr){
        throw std::logic_error("empty list");
    }
    if (head == tail) {
        temp = tail->value;
        delete tail;
        head = tail = nullptr;
        return temp;
    }

    Node* currentNodePtr = head;
    while(currentNodePtr->next != tail){
        currentNodePtr = currentNodePtr->next;
    }

    currentNodePtr->next = nullptr;
    temp = tail->value;
    delete tail;
    tail = currentNodePtr;
    return temp;
}

bool LinkedList::empty() {
    return tail == nullptr;
}

void LinkedList::print() {
    if (head == nullptr){
        std::cout << "empty list";
    }
    Node* currentNodePtr = head;
    while (currentNodePtr) { 
        std::cout << currentNodePtr->value << " ";
        currentNodePtr = currentNodePtr->next;
    }
    std::cout << "\n";
}