
#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string message[4] = {"debug" , "info", "warning", "error"};
    void        (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int         i = 0;

    while (i < 4)
    {
        if (level == message[i])
            break ;
        i++;
    }
    if (i == 3 && message[i] != level)
        return ;
    switch (i)
    {
        case (0):
        {
            for (int j = i; j < 4; j++)
                (this->*ptr[j])();
            break ;
        }
        case (1):
        {
            for (int j = i; j < 4; j++)
                (this->*ptr[j])();
            break ;
        }
        case (2):
        {
            for (int j = i; j < 4; j++)
                (this->*ptr[j])();
            break ;
        }
        case (3):
        {
            for (int j = i; j < 4; j++)
                (this->*ptr[j])();
            break ;
        }
    }
}