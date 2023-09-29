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
    checkWin();
    if (player == 'X') player = 'O';
    if (player == 'O') player = 'X';
    return true;
}
void Logic::checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] == grid[i][1] == grid[i][2])
        {
            won = true;
            winner = player;
            return;
        }
        else if (grid[0][i] == grid[1][i] == grid[2][i])
        {
            won = true;
            winner = player;
            return;
        }
    }
    if ((grid[0][0] == grid[1][1] == grid[2][2]) or (grid[0][2] == grid[1][1] == grid[2][0]))
    {
        won = true;
        winner = player;
        return;
    }
    for (std::array<std::array<char, 3>, 3>::iterator column = grid.begin(); column != grid.end(); column++)
    {
        for (std::array<char, 3>::iterator row = column->begin(); row != column->end(); row++)
        {
            if (*row == '-') return;
        }
    }
    draw == true;
    return;
}