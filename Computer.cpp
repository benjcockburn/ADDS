#include "Computer.h"
#include "Move.h"
#include <cstdlib>
#include <ctime>

Computer::Computer()
{
    name = "Computer";
}

Move *Computer::makeMove()
{
    std::string move = "Rock";
    // int randomIndex = rand() % 8;
    return new Move(move);
}

std::string Computer::getName()
{
    return name;
}
