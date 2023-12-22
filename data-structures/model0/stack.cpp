#include "stack.h"

void Stack::push(int num) {
    data.push_back(num);
}

Stack::Stack() {}

int Stack::pop() {
    int last = getLast();
    data.pop_back();
    return last;
}

int Stack::getLast() {
    if (data.size() == 0) {
        throw std::logic_error("Stack is empty");
    }
    return data[data.size()-1];
}