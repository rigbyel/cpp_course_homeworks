#include <iostream>
#include "stack.h"
#include "queue.h"

int main() {
    Stack myStack;
    int a = 18;
    myStack.push(a);
    std::cout << myStack.pop() << std::endl;

    Queue myQueue;
    int b = 81;
    myQueue.push(b);
    std::cout << myQueue.pop() << std::endl;
    return 0;
}