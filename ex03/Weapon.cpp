/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:55:08 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 17:22:06 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
    settype(weapon_type);
}

std::string Weapon::gettype()
{
    return (this->type);
}

void    Weapon::settype(std::string newtype)
{
    this->type = newtype;
}
