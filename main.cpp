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
#include <iostream>
#include <array>
#include "Tournament.h"

using namespace std;


int main(){
     Referee aPlayer;
     Tournament tournament;
     array<Player *, 8>  competitors;

     competitors[0]=new Avalanche();
     competitors[1]=new Bureaucrat();
     competitors[2]=new Bureaucrat();
     competitors[3]=new Toolbox();
     competitors[4]=new Toolbox();
     competitors[5]=new Crescendo();
     competitors[6]=new Crescendo();
     competitors[7]=new FistfullODollars();

     cout<<tournament.run(competitors)->getName()<<endl;

}
