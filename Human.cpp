#include "Human.h"
#include <iostream>

Human::Human(std::string name) : name(name) {}

Human::Human() : name("Human") {}

char Human::makeMove()
{
    char move;
    std::cout << name << "Enter move:";
    std::cin >> move;

    std::cout << move;
    return 'S';
}

std::string Human::getName()
{
    return name;
}
