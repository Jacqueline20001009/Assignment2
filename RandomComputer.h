#ifndef RANDOMCOMPUTER_h
#define RANDOMCOMPUTER_h
#include "Computer.h"
#include <iostream>
#include "RandomComputer.h"
class RandomComputer:public Computer
{
private:
    
public:
    RandomComputer();
    char makeMove();
    ~RandomComputer();
};
#endif
