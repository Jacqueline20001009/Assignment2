#include "Computer.h"
#include <iostream>
#include "RandomComputer.h"
using namespace std;
#include <string>



RandomComputer::RandomComputer()
{
}
char RandomComputer::makeMove(){
    int count=0;
    char array[3]={'P','S','R'};
    Name = "RandomComputer";
   input=array[rand()%3];
    
        return input;
     

}
RandomComputer::~RandomComputer()
{
}
