#include "HumanB.hpp"

HumanB :: HumanB( std::string str)
{
    name = str;
    w = NULL;
}

void HumanB :: attack ( void )
{
    std::cout << name;
    std::cout << " attacks with their ";
    if (w)
        std::cout << w->getType() << std::endl;
    else
        std::cout << "hands" << std::endl;
    return;
}

HumanB :: ~HumanB( void )
{
    return;
}

void HumanB :: setWeapon( Weapon &weapon )
{
    w = &weapon;
}
