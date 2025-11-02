#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
    std::string name;
    Weapon &w;
    void attack( void );
    HumanA( std::string str, Weapon &weapon );
    ~HumanA( void );
};

#endif