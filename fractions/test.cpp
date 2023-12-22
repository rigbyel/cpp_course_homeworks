#include <iostream>
#include "fract.h"
#include <string>



int main() {
    Fract f1(-10,4);
    Fract f2(1,4);
    Fract f3 = f1 + f2;

    f1.print_usual();
    f1.print_hybrid();
    f3.print_usual();
}