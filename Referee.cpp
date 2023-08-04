#include "Referee.h"
#include "Move.h"
#include "Player.h"
#include <iostream>

// Worked with people:
// Ben Cockburn        a1850196
// Louis D'Odorico     a1851188
// Josh Brazier        a1851143
// Nick Brown          a1870629

Referee::Referee() {}

Player *Referee::refGame(Player *player1, Player *player2)
{
    
    // char winnerMove = compareMoves(move1, move2);
}

char Referee::compareMoves(char move1, char move2)
{
    if (move1 == move2)
    {
        return '\0'; // Tie
    }

    if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') || (move1 == 'P' && move2 == 'R'))
    {
        return move1;
    }
    else
    {
        return move2;
    }
}
