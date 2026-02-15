#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie :: Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
    std::cout <<get_name()<< ": ";
    std::cout <<"aghh"<< std::endl;
}

std::string Zombie :: get_name( void ) const
{
    return name;
}

void Zombie :: set_name( std :: string name)
{
    this->name = name;
}

void Zombie :: announce( void )
{
    std::cout << get_name() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie * zombieHorde( int N, std :: string name)
{
    Zombie * horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].set_name(name);
    return horde;
}
