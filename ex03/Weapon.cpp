#include "Weapon.hpp"

std::string Weapon:: getType( void ) const
{
    return type;
}

void Weapon :: setType(std::string weapon)
{
    type = weapon;
    return ;
}

Weapon :: Weapon( void )
{
    return ;
}
Weapon :: ~Weapon( void )
{
    return ;
}

Weapon :: Weapon( std::string init_weapon )
{
    type = init_weapon;
}

