#ifndef AVALANCHE_h
#define AVALANCHE_h
#include"Computer.h"
#include "Avalanche.h"
class Avalanche:public Computer
{

public:
    Avalanche();
    char makeMove();
    ~Avalanche();
};
#endif

