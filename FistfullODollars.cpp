#include "Computer.h"
#include <iostream>
#include "FistfullODollars.h"
using namespace std;
#include <string>

FistfullODollars::FistfullODollars()
{
    count=0;
}
 char FistfullODollars:: makeMove(){
     char array[3]={'R','P','P'};

     Name = "FistfullODollars";
     if(count%3==2){
         input = 'P';
         count++;
     }
     else if (count%3==1)
     {
         input='P';
         count++;
     }
     else if (count%3==0)
     {
         input = 'R';
         count++;
     }
      return input;
     }

    
FistfullODollars::~FistfullODollars()
{
}