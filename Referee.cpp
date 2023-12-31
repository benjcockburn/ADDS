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
    Move *move1 = player1->makeMove();
    Move *move2 = player2->makeMove();

    std::string winnerMove = compareMoves(move1->getName(), move2->getName());

    if (winnerMove == move1->getName())
    {
        std::cout << player1->getName() << std::endl;
        return player1;
    }
    else if (winnerMove == move2->getName())
    {
        std::cout << player2->getName() << std::endl;
        return player2;
    }
    else
    {
        std::cout << "Tie" << std::endl;
        return nullptr;
    }
}

std::string Referee::compareMoves(std::string move1, std::string move2)
{
    if (move1 == move2)
    {
        return ""; // Tie
    }

    if ((move1 == "Rock" && move2 == "Scissors") ||
        (move1 == "Scissors" && move2 == "Paper") ||
        (move1 == "Paper" && move2 == "Rock") ||

        (move1 == "Monkey" && (move2 == "Ninja" || move2 == "Robot")) ||
        (move1 == "Robot" && (move2 == "Ninja" || move2 == "Zombie")) ||
        (move1 == "Pirate" && (move2 == "Robot" || move2 == "Monkey")) ||
        (move1 == "Ninja" && (move2 == "Pirate" || move2 == "Zombie")) ||
        (move1 == "Zombie" && (move2 == "Pirate" || move2 == "Monkey")))
    {
        return move1;
    }
    else
    {
        return move2;
    }
}
