#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player
{
public:
    Human();
    Human(std::string input);
    Move *makeMove() override;
    std::string getName() override;

private:
    std::string name;
};

#endif // HUMAN_H
