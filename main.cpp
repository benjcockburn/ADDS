#include <iostream>
#include <ctime>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main()
{
    // Seed the random number generator for computer's move
    // std::srand(static_cast<unsigned int>(std::time(0)));

    // Create players
    Human humanPlayer("First Input");
    Human computerPlayer("Second Input");

    // Create referee
    Referee referee;

    // Play the game
    bool playAgain = true;
    while (playAgain)
    {
        Player *winner = referee.refGame(&humanPlayer, &computerPlayer);

        // if (winner == &humanPlayer)
        // {
        //     std::cout << humanPlayer.getName() << " Wins." << std::endl;
        // }
        // else if (winner == &computerPlayer)
        // {
        //     std::cout << computerPlayer.getName() << " Wins." << std::endl;
        // }
        // else
        // {
        //     std::cout << "It's a Tie." << std::endl;
        // }

        // Ask if the user wants to play again
        char playAgainChoice;
        std::cout << "Play again? (Y/N): ";
        std::cin >> playAgainChoice;

        if (toupper(playAgainChoice) != 'Y')
        {
            playAgain = false;
        }
    }

    return 0;
}
