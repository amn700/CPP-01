#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie(void)
{
    std::cout << get_name() << ": ";
    std::cout <<"aghh"<< std::endl;
    return;
}

std::string Zombie :: get_name( void ) const
{
    return name;
}

void Zombie :: announce( void )
{
    std::cout << get_name() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}

void randomChump( std::string name )
{
    Zombie rando = Zombie(name);
    rando.announce();
}
