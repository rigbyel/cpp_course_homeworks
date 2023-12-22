#include "queue.h"
#include "stack.h"
#include <iostream>

int main() {
    Stack myStack;
    int a = 18;
    myStack.push(a);
    std::cout << myStack.getLast() << std::endl;
    std::cout << myStack.pop() << std::endl;
    std::cout << myStack.pop() << std::endl;

    Queue myQueue;
    int b = 800;
    myQueue.push(b);
    std::cout << myQueue.getFirst() << std::endl;
    std::cout << myQueue.pop() << std::endl;
    std::cout << myQueue.pop() << std::endl;
    return 0;
}