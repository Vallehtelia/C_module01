/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:09:06 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 18:08:23 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "\n[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "\n[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "\n[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "\n[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string message[4] = {"debug" , "info", "warning", "error"};
    void        (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (i == 3 && level != message[i])
        {
            std::cout << "Enter level of complain 'debug, info, warning or error'" << std::endl;
            break ;
        }
        if (level == message[i])
        {
            (this->*ptr[i])();
            break ;
        }
    }
}
