#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include "IStructure.h"
#include <vector>

class DataStruct: public IStructure {
protected:
    std::vector<int> data;
public:
    void push(int num);
    int pop(); 
    bool empty();
};

#endif