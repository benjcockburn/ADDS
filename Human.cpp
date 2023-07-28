#include "Human.h"
#include <iostream>

Human::Human(std::string name) : name(name) {}

char Human::makeMove()
{
    char move;
    std::cout << name << ", enter your move (R for Rock, P for Paper, S for Scissors): ";
    std::cin >> move;
    return toupper(move);
}

std::string Human::getName()
{
    return name;
}
