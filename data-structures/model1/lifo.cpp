#include "lifo.h"

void Lifo::push(int num) {
    data.push_back(num);
}

Lifo::Lifo() {}

int Lifo::pop() {
    int last = getItem();
    data.pop_back();
    return last;
}

int Lifo::getItem() {
    if (data.size() == 0) {
        throw std::logic_error("Empty");
    }
    return data[data.size()-1];
}