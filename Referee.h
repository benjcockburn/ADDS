#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

class Referee {
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);

private:
    char compareMoves(char move1, char move2);
};

#endif // REFEREE_H
