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