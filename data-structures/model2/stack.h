#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <exception>
#include "IStructure.h"
#include <vector>

class Stack: public IStructure {
private:
    std::vector<int> data;
public:
    void push(int num);
    int pop();
};

#endif