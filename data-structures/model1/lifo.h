#ifndef LIFO_H
#define LIFO_H

#include <vector>
#include <exception>
#include <iostream>

class Lifo {
protected:
    std::vector<int> data;
public:
    Lifo();
    void push(int num);
    int pop();
    int getItem();

};


#endif
