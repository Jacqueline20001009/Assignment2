#ifndef HUMAN_h
#define HUMAN_h
#include "Player.h"
#include "Human.h"
#include <iostream>
class Human:public Player
{
    
public:
    Human();
    string name;
    char makeMove();
    ~Human();

};
#endif
