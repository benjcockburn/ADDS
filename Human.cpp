#include "Human.h"
#include <iostream>

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

Human::Human(std::string name) : name(name) {}

Human::Human() : name("Human") {}

Move Human::makeMove()
{
    char move;
    // std::cout << name << "Enter move:";
    std::cin >> move;

    // std::cout << move;
    return move;
}

std::string Human::getName()
{
    return name;
}
