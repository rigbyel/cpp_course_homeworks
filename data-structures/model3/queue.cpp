#include "queue.h"

void Queue::push(int num) {
    data.insert(data.begin(), num);
}