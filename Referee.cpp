
   
#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

using namespace std;
Referee::Referee(){

    
}
char Referee::refGame(player *player1,player *player2){
    char result=' ';
    char N1= player1->makeMove();
    char N2=player2->makeMove();

    if(N1==N2){
        return 'T';
    }
    else if(N1=='S'&& N2=='P' || N1=='P'&& N2=='R' || N1=='R'&& N2=='S'){
        return 'W';
    }
    else{
        return 'L';
    }
    

    
}
Referee::~Referee(){

}