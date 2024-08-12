
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
    this->_name = name;
    std::cout << "HumanA " << name << " created with no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->_weapon = &type;
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->gettype() << std::endl;
}