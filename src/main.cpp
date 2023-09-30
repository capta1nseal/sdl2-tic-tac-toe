#include "iostream"
#include "logic.hpp"
#include "cli.hpp"

int main() {
    Logic logic = Logic();
    Cli cli = Cli(&logic);
    cli.run();
    return 0;
}
