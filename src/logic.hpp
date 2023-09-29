#ifndef _LOGIC_
#define _LOGIC_

#include <array>

class Logic
{
public:
    Logic();
    bool play(unsigned int x, unsigned int y);
    void checkWin();

private:


    std::array<std::array<char, 3>, 3> grid;
    bool running;
    char player;
    bool won;
    char winner;
    bool draw;
};

#endif;