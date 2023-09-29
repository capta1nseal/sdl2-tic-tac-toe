#include "logic.hpp"

Logic::Logic()
{
    grid = {{{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}}};
    running = false;
    player = 'X';
    won = false;
    winner = '-';
    draw = false;
}
bool Logic::play(unsigned int x, unsigned int y)
{
    if (draw or won) return false;
    if (!(0<=x<=2 and 0<=x<=2)) return false;
    if (!(grid[x][y]) == '-') return false;

    grid[x][y] = player;
    if (player == 'X') player = 'O';
    if (player == 'O') player = 'X';
    return true;
}