#ifndef MOVE_H
#define MOVE_H

#include "Player.h"
#include "string"
#include "Referee.h"

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

class Move {
public:
    Move();

private:
    std::string compareMoves(std::string move1, std::string move2);
    std::string getName();
};

#endif // MOVE_H