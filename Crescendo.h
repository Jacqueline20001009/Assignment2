#ifndef CRESCENDO_h
#define CRESCENDO_h
#include "Computer.h"
#include "Crescendo.h"
#include <iostream>

class Crescendo:public Computer
{
   
public:
    Crescendo();
    char makeMove();
    ~Crescendo();
};
#endif

