#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <exception>
#include "IStructure.h"
#include <vector>

class Queue: public IStructure {
private:
    std::vector<int> data;
public:
    void push(int num);
    int pop();
};

#endif