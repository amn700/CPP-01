#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *w;
public:
    void attack( void );
    void setWeapon( Weapon &weapon );

    HumanB( std::string str );
    ~HumanB( void );
};

#endif
