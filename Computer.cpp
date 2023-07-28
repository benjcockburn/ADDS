#include "Computer.h"
#include <cstdlib>
#include <ctime>

Computer::Computer() {
    name = "Computer";
}

char Computer::makeMove() {
    char moves[] = {'R', 'P', 'S'};
    int randomIndex = rand() % 3;
    return moves[randomIndex];
}

std::string Computer::getName() {
    return name;
}
