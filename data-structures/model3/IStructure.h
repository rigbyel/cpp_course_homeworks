#ifndef ISTRUCTURE_H
#define ISTRUCTURE_H

class IStructure {
public:
    virtual void push(int num) = 0;
    virtual int pop() = 0;
    virtual bool empty() = 0;
};

#endif