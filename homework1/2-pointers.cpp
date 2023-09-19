#include <iostream>

int main(){
    double **p = 0;
    double *ptr = new double {2};
    
    p = &ptr;
    std::cout << **p << std::endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}