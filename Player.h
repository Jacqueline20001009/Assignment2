#ifndef Player_h
#define Player_h

#include<iostream>
#include "Player.h"
using namespace std;

class Player
{

public:
    Player();
   virtual char makeMove() = 0;//pure virtual
   string Name;
   char input;
    string getName();
    ~Player();

};
#endif
