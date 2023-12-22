#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <exception>
#include <iostream>

class Queue {
private:
    std::vector<int> data;
public:
    Queue();
    void push(int num);
    int pop();
    int getFirst();

};


#endif
