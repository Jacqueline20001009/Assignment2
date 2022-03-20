#ifndef COMPUTER_h
#define COMPUTER_h
#include <iostream>
#include "Computer.h"
#include "Player.h"
using namespace std;


class Computer:public Player
{

public:
    Computer();
    virtual char makeMove();
    ~Computer();
};
#endif

