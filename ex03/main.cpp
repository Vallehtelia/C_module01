
#include "HumanA.hpp"

int main()
{
    Weapon  club = Weapon("crude spiked club");

    HumanA bob("bob", club);
    bob.attack();
    club.settype("some other type of weapon");
    bob.attack();
}