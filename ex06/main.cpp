/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:13:31 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 15:14:55 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
