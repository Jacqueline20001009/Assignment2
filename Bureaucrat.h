#ifndef BUREAUCRAT_h
#define BUREAUCRAT_h
#include"Computer.h"
#include "Bureaucrat.h"
class Bureaucrat:public Computer
{

public:
    Bureaucrat();
    char makeMove();
    ~Bureaucrat();
};
#endif