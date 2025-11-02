#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
public:
	Zombie		*newZombie( std::string name );
	void		randomChump( std::string name );
	void		announce( void );
	std::string	get_name(void) const;
	
	Zombie(std::string new_name);
	~Zombie(void);
private:
	std::string name;
	Zombie(void);
};

#endif