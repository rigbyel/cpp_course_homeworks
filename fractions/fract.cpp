#include "fract.h"
#include <iostream>
#include <exception>

Fract::Fract(int num1, int num2): num(num1), denom(num2) {
    if ( num2 == 0 ) {
        throw std::range_error("Denominator can't be zero");
    }
    reduce();
}

Fract::Fract(float number) {

}

Fract Fract::operator+(const Fract& number){
    int newdenom = number.denom * denom;
    int newnum = number.num * denom + num * number.denom;

    Fract answer(newnum, newdenom);

    return answer;
}

Fract Fract::operator *(const Fract& number) {
    Fract answer(num*number.num, denom*number.denom);
    answer.reduce();

    return answer;
}

int Fract::nod() {
    int m = 1;
    int max_denom = 1;
    while (m <= abs(num) & m <= abs(denom)) {
        if (num % m == 0 & denom % m == 0) {
            max_denom = m;
        }
        m++;
    } 
    return max_denom;
}

void Fract::reduce() {
    int max_denom = nod();
    num /= max_denom;
    denom /= max_denom;
}

void Fract::print_usual() {
    std::cout << num << "/" << denom << std::endl;
}

void Fract::print_hybrid() {
    int integer = num / denom;
    int  new_num = abs(num - integer*denom);
    std::cout << integer <<" " << new_num << "/" << denom << std::endl;
}