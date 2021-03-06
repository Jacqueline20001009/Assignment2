#ifndef TOURNAMENT_h
#define TOURNAMENT_h

#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Computer.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Human.h"
#include "PaperDoll.h"
#include "Player.h"
#include "RandomComputer.h"
#include "Referee.h"
#include "Toolbox.h"
#include <iostream>
#include <string>
#include <array>
#include "Tournament.h"

using namespace std;

class Tournament 
{

public:

    Tournament();
   
    Player * run(array<Player *, 8>  competitors);

    ~Tournament();
};
#endif

