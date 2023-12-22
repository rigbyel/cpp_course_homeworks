#include <iostream>
#include "linkedList.h"

int main() {
    LinkedList myLL;
    myLL.push(1);
    myLL.push(2);
    myLL.push(3);
    
    myLL.print();
    std::cout << myLL.pop() << std::endl;

    try {
        myLL.pop();
        myLL.pop();
        myLL.pop();
    }
     catch(const char* exception){
        std::cout << "Error: " << exception << "\n";
    }
}