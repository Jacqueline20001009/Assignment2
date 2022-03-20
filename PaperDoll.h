#ifndef PAPERDOLL_h
#define PAPERDOLL_h
#include "Computer.h"
#include "PaperDoll.h"
#include <iostream>

class PaperDoll:public Computer
{
private:
   int count;

public:
    PaperDoll();
  char makeMove();
    ~PaperDoll();
};
#endif
