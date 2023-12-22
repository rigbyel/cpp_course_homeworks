#include "stack.h"

void Stack::push(int num) {
    data.push_back(num);
}

int Stack::pop() {
        if (data.size() == 0) {
            throw std::logic_error("Empty");
        }
        int last = data[data.size()-1];
        data.pop_back();
        return last;
}
