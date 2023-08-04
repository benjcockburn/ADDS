#include "Move.h"
#include <iostream>
#include <string>

Move::Move() {}

std::string Move::getName(){return this->name};

std::string Move::compareMoves(std::string move1, std::string move2)
{

    int Playernum[2] = {0, 7};

    std::string Tempname = "test";

    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            Tempname = move1;
        }
        else{
        Tempname = move2;
    }
    
    if (Tempname=="Rock"){Playernum[i] = 0;}
    else if (Tempname=="Paper"){Playernum[i] = 1;}
    else if (Tempname=="Scissors"){Playernum[i] = 2;}
    else if (Tempname=="Pirate"){Playernum[i] = 3;}
    else if (Tempname=="Monkey"){Playernum[i] = 4;}
    else if (Tempname=="Zombie"){Playernum[i] = 5;}
    else if (Tempname=="Ninja"){Playernum[i] = 6;}
    else if (Tempname=="Robot"){Playernum[i] = 7;}

}
//the array of all posible game matchs 0 = tie 1 = player 1 wins 2 = player 2 wins
int winnerGrid[8][8]={
                    {0, 1, 2, 0, 0, 0, 0, 0},
                    {2, 0, 1, 0, 0, 0, 0, 0}, 
                    {1, 2, 0, 0, 0, 0, 0, 0}, 
                    {0, 0, 0, 0, 2, 1, 1, 2},
                    {0, 0, 0, 1, 0, 1, 2, 2},
                    {0, 0, 0, 2, 2, 0, 1, 1},
                    {0, 0, 0, 2, 1, 2, 0, 1},
                    {0, 0, 0, 1, 1, 2, 2, 0}
} ;

int winner = winnerGrid[Playernum[0]][Playernum[1]];

if (winner == 0){
    return nullptr;
}
else if(winner == 1){
 return move1;
}
else{
    return move2;
}
}