#include <iostream>
#include "queue.h"
#include "linkedList.h"
#include "stack.h"

template <typename T>
T reverse(T& container) {
    Stack tempStack;

    while (!container.empty()) {
        tempStack.push(container.pop());
    }
    
    while (!tempStack.empty()) {
        container.push(tempStack.pop());
    }

    return container;
}

template <typename T>
void printContainer(const T& container) {
    T tempContainer = container;

    while (!tempContainer.empty()) {
        std::cout << tempContainer.pop() << " ";
    }

    std::cout << std::endl;
}

int main() {
    Queue myQueue;

    // Заполняем очередь значениями от 1 до 5
    for (int i = 1; i <= 5; ++i) {
        myQueue.push(i);
    }

    std::cout << "До вызова reverse: ";
    printContainer(myQueue);

    // Вызываем функцию reverse для очереди
    reverse(myQueue);

    std::cout << "После вызова reverse: ";
    printContainer(myQueue);

    return 0;
}