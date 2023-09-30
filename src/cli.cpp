#include "cli.hpp"
#include "logic.hpp"
#include <array>
#include <iostream>
#include <string>

Cli::Cli(Logic* logicptr)
{
    logic = logicptr;
}

void Cli::run(){
    std::cout << "running1";
    logic->startGame();
    printGrid();
    while (logic->running)
    {
        std::cout<<"Current player: " << logic->player << "\n input coordinates to play x y: \n";
        unsigned int x;
        unsigned int y;
        std::cin >> x >> y;

        if (logic->play(x-1, y-1) == false)
        {
            std::cout << "Invalid input or cell already played. Try again. \n";
        }

        printGrid();
        if (logic->won)
        {
            std::cout << "Winner: " << logic->winner << "\n";
        }
        if (logic->draw)
        {
            std::cout << "Draw \n";
        }


    }

}

void Cli::printGrid()
{
    gridToPrint = logic->grid;
    for(int i = 0; i < 3; i++){
        std::cout<<gridToPrint[0][i] << gridToPrint[1][i] << gridToPrint[2][i] << "\n";
    }
}