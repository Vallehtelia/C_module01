
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl karen;

    if (ac == 2)
    {
        karen.complain(av[1]);
    }
    else
        std::cout << "Enter level of complain 'debug, info, warning or error'" << std::endl;
    return (0);
}