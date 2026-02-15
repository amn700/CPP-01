#include "HumanA.hpp"

HumanA :: HumanA( std::string str, Weapon &weapon ) :w(weapon)
{
    name = str;
}

void HumanA :: attack ( void )
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << w.getType() << std::endl;
    return;
}

HumanA :: ~HumanA( void )
{
    std::cout << name << ": dies.\n" ;
    return;
}
