#include "queue.h"

void Queue::push(int num) {
    data.insert(data.begin(), num);
}

int Queue::pop() {
        if (data.size() == 0) {
            throw std::logic_error("Empty");
        }
        int last = data[data.size()-1];
        data.pop_back();
        return last;
}
