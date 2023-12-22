#ifndef FIFO_H
#define FIFO_H

#include <vector>
#include <exception>
#include <iostream>
#include "lifo.h"

class Fifo : public Lifo {
public:
    void push(int num);
};


#endif
