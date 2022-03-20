#ifndef Player_h
#define Player_h

#include<iostream>
#include "player.h"
using namespace std;

class player
{

public:
    player();
   virtual char makeMove() = 0;//pure virtual
   string Name;
   char input;
    string getName();
    ~player();

};
#endif
