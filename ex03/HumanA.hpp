
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon_type;
    public:
        HumanA(std::string name, Weapon &type);
        void        attack();
        void        setname(std::string name);
        void        setweapon(Weapon type);
        std::string getname();
        std::string getweapon();
};

#endif