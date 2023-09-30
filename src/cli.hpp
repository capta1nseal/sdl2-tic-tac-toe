#ifndef _CLI_
#define _CLI_

#include "logic.hpp"
#include <array>
#include "iostream"
#include <string>

class Cli
{
public:
    Cli(Logic* logicptr);
    void run();
    void printGrid();

private:
    std::array<std::array<char, 3>, 3> gridToPrint;
    unsigned int coordinates;
    Logic* logic;
};

#endif