#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
public:
	// static Zombie		*newZombie( std::string name );
	static Zombie		*zombieHorde( int N, std :: string name);
	void		announce( void );
	std::string	get_name(void) const;
	
	Zombie(std::string new_name);
	Zombie(void);
	~Zombie(void);
private:
	std::string name;
};

#endif