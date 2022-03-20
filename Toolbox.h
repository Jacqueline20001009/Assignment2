#ifndef TOOLBOX_h
#define TOOLBOX_h
#include "Computer.h"
#include "Toolbox.h"
using namespace std;

class Toolbox:public Computer
{

public:
    Toolbox();
   char makeMove();
    ~Toolbox();
};
#endif