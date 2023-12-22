#ifndef STACK_H
#define STACK_H

#include <vector>
#include <exception>
#include <iostream>

class Stack {
private:
    std::vector<int> data;
public:
    Stack();
    void push(int num);
    int pop();
    int getLast();

};


#endif
