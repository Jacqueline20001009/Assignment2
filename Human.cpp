#include <iostream>
#include <string>
using namespace std;
#include "Human.h"


Human::Human(){
     Name="HPlayer";
}
char Human::makeMove(){
    cout<<"Enter move: ";
     cin>>input;
     return input;

}
 Human::~Human(){

 }