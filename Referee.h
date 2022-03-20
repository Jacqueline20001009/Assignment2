#ifndef Referee_h
#define Referee_h

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
class Referee
{
    
   public: 
    Referee();
    char refGame(Player *Player1,Player *Player2);//Player1 is computer term and Player2 is Human term
    ~Referee();
    

};
#endif