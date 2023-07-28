#include "Referee.h"
#include <iostream>

Referee::Referee() {}

Player *Referee::refGame(Player *player1, Player *player2)
{
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    char winnerMove = compareMoves(move1, move2);

    if (winnerMove == move1)
    {
        std::cout << player1->getName() << " wins!" << std::endl;
        return player1;
    }
    else if (winnerMove == move2)
    {
        std::cout << player2->getName() << " wins!" << std::endl;
        return player2;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
        return nullptr;
    }
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
