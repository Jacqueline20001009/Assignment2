#include "Computer.h"
#include <iostream>
#include "Crescendo.h"
using namespace std;
#include <string>

Crescendo::Crescendo()
{
    count=0;
}
 char Crescendo:: makeMove(){
     char array[3]={'P','S','R'};

     Name = "Crescendo";
     if(count%3==2){
         input = 'R';
         count++;
     }
     else if (count%3==1)
     {
         input='S';
         count++;
     }
     else if (count%3==0)
     {
         input = 'P';
         count++;
     }
      return input;
     }

    
Crescendo::~Crescendo()
{
}