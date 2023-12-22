#include <iostream>
#include "fifo.h"
#include "lifo.h"

int main() {
    Lifo myStack;
    int a = 18;
    myStack.push(a);
    std::cout << myStack.getItem() << std::endl;
    std::cout << myStack.pop() << std::endl;

    Fifo myQueue;
    int b = 81;
    myQueue.push(b);
    std::cout << myQueue.getItem() << std::endl;
    std::cout << myQueue.pop() << std::endl;
    std::cout << myQueue.pop() << std::endl;
    return 0;
}