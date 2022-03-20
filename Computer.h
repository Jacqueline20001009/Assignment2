#ifndef COMPUTER_h
#define COMPUTER_h
#include <iostream>
#include "Computer.h"
#include "Player.h"
using namespace std;


class Computer:public player
{

public:
    Computer();
    virtual char makeMove();
    ~Computer();
};
#endif

