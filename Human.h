#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

class Human : public Player
{
public:
    Human(std::string name);
    Human();
    char makeMove() override;
    std::string getName() override;

private:
    std::string name;
};

#endif // HUMAN_H
