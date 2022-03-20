#ifndef FISTFULLODOLLARS_h
#define FISTFULLODOLLARS_h
#include "Computer.h"
#include "FistfullODollars.h"
#include <iostream>

class FistfullODollars:public Computer
{
   
public:
    FistfullODollars();
    int count;
    char makeMove();
    ~FistfullODollars();
};
#endif

