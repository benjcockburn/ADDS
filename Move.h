#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move
{
public:
    Move(std::string name);
    std::string getName();

private:
    std::string name;
};

#endif // MOVE_H
