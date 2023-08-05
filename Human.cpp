#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human() {}

Move *Human::makeMove()
{
    std::string move;
    std::cout << "Enter Move: ";
    std::cin >> move;
    return new Move(move);
}

// std::string Human::getName()
// {
//     return name;
// }
