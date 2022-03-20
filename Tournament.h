#ifndef TOURNAMENT_h
#define TOURNAMENT_h

#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Computer.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Human.h"
#include "PaperDoll.h"
#include "player.h"
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
   
    player * run(array<player *, 8>  competitors);

    ~Tournament();
};
#endif

