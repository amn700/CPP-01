#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
    std::string name;
    Weapon *w;
    void attack( void );
    void setWeapon( Weapon &weapon );

    HumanB( std::string str );
    ~HumanB( void );
};

#endif
