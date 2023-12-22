#ifndef FRACT_H
#define FRACT_H

class Fract {
public:
    int num, denom;

    Fract(int num1, int num2);
    Fract(float number);
    Fract operator +(const Fract& number);
    Fract operator *(const Fract& number);
    void print_usual();
    void print_hybrid();

private: 
    int nod();
    void reduce();
};

#endif