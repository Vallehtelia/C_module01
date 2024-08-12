
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