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
Tournament::Tournament()
{
    
}
player * Tournament::run(array<player *, 8>  competitors){

    array<player *, 4>  fourcompetitors;
    array<player *, 2>  twocompetitors;
int count=0;
 Referee aPlayer;
int i;
char result;
for ( i = 0; i < 7;i=i+2)
{
    for(int j=0;j<5;j++) {
        result = aPlayer.refGame(competitors[i], competitors[i + 1]);
        if (result == 'W') {
            count++;
        } else if (result == 'L') {
            count--;
        }

    }
    if (count>=0)
    {
        fourcompetitors[i/2]=competitors[i];
    }
    else{
        fourcompetitors[i/2]=competitors[i+1];
    }
    count=0;
}

for ( i = 0; i < 3; i=i+2)
{
    for(int j=0;j<5;j++) {
        result = aPlayer.refGame(fourcompetitors[i], fourcompetitors[i + 1]);
        if (result == 'W') {
            count++;
        } else if (result == 'L') {
            count--;
        }
    }
    if (count >= 0) {
        twocompetitors[i / 2] = fourcompetitors[i];
    } else {
        twocompetitors[i / 2] = fourcompetitors[i + 1];
    }
    count=0;

}
for ( int j = 0; j < 5; j++) {

    result = aPlayer.refGame(twocompetitors[0], twocompetitors[1]);
    if (result == 'W') {
        count++;
    } else if (result == 'L') {
        count--;
    }
}
    if (count>=0)
    {
        return twocompetitors[0];
    }
    else{
       return  twocompetitors[1];
    }
}

Tournament::~Tournament()
{
}
