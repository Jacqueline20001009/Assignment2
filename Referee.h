#ifndef Referee_h
#define Referee_h

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
class Referee
{
    
   public: 
    Referee();
    char refGame(player *player1,player *player2);//player1 is computer term and player2 is Human term
    ~Referee();
    

};
#endif