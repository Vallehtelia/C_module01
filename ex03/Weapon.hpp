/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaalant <vvaalant@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:55:13 by vvaalant          #+#    #+#             */
/*   Updated: 2024/08/25 17:22:08 by vvaalant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class   Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string weapon_type);
        std::string gettype();
        void        settype(std::string newtype);
};

#endif
