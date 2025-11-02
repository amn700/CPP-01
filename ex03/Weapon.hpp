#ifndef WEAPON_hpp
#define WEAPON_hpp

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	std::string		getType( void ) const;
	void			setType( std::string weapon );

	Weapon( std::string init_weapon );
	Weapon( void );
	~Weapon( void );
};

#endif