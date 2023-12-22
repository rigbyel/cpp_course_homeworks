#include "datastruct.h"
#include <iostream>
#include <exception>


int DataStruct::pop() {
    if (data.size() == 0) {
            throw std::logic_error("Empty");
        }
        int last = data[data.size()-1];
        data.pop_back();
        return last;
};

bool DataStruct::empty() {
    return data.size() == 0;
}

void DataStruct::push(int num) { }