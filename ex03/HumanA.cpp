
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << name << " created with ";
    std::cout << weapon.gettype() << std::endl;
}

void    HumanA::setweapon(Weapon type)
{
    Weapon weapon_type(type);
    this->_weapon = weapon_type;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.gettype() << std::endl;
}