#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human() : name("Human") {}
Human::Human(std::string input) : name(input) {}

std::string Human::getName() { return name; }

Move *Human::makeMove()
{
    std::string move;
    // std::cout << "Enter Move: ";
    std::cin >> move;
    return new Move(move);
}

// std::string Human::getName()
// {
//     return name;
// }
