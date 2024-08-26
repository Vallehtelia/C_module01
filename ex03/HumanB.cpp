/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:54:51 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 17:22:11 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
    std::cout << "HumanA " << name << " created with no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->_weapon = &type;
}

void    HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->gettype() << std::endl;
    else
        std::cout << this->_name << " attacks with their fists!" << std::endl;
}
