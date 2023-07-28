#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

class Player
{
public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif // PLAYER_H
