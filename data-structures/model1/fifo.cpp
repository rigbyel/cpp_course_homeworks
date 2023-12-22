#include "fifo.h"

void Fifo::push(int num) {
    data.insert(data.begin(), num);
}