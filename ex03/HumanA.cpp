
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type)
{
    this->setname(name);
    this->setweapon(type);
}

void    HumanA::setname(std::string name)
{
    this->name = name;
}

void    HumanA::setweapon(Weapon type)
{
    Weapon weapon_type(type);
    this->weapon_type = weapon_type;
}

std::string HumanA::getname()
{
    return (this->name);
}

std::string HumanA::getweapon()
{
    return (this->weapon_type.gettype());
}

void    HumanA::attack()
{
    std::cout << this->getname() << " attacks with their " << this->getweapon() << std::endl;
}