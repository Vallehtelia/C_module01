/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:13:39 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 18:17:29 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
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
    if (i == 4)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
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
