#include "Computer.h"
#include <iostream>
#include "PaperDoll.h"
using namespace std;

PaperDoll::PaperDoll()
{
    count=0;
}
char PaperDoll::makeMove(){
    char array[3]={'P','S','S'};

     Name = "PaperDoll";
     if(count%3==2){
         input = 'S';
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



PaperDoll::~PaperDoll()
{
}

