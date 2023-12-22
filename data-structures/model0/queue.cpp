#include "queue.h"

void Queue::push(int num) {
    data.insert(data.begin(), num);
}

Queue::Queue() {}

int Queue::pop() {
    int last = getFirst();
    data.pop_back();
    return last;
}

int Queue::getFirst() {
    if (data.size() == 0) {
        throw std::logic_error("Queue is empty");
    }
    return data[data.size()-1];
}