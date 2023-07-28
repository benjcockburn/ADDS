#include "Computer.h"
#include <cstdlib>
#include <ctime>

Computer::Computer()
{
    name = "Computer";
}

char Computer::makeMove()
{
    char moves = 'R';

    return moves;
}

std::string Computer::getName()
{
    return name;
}
