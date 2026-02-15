#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
public:
	void		announce( void );
	std::string	get_name(void) const;
	void		set_name(std::string);
	
	Zombie(std::string new_name);
	Zombie(void);
	~Zombie(void);
private:
	std::string name;
};

Zombie		*zombieHorde( int N, std :: string name);

#endif