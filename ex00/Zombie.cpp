#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie(void)
{
    delete();
    std::cout <<get_name()<< ": ";
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

Zombie* Zombie :: newZombie( std::string name )
{
    Zombie *z = (Zombie *) malloc(sizeof(Zombie));
    if (!z)
        return NULL;
    z->name = name;
    return z;
}

void Zombie:: randomChump( std::string name )
{
    Zombie rando = Zombie(name);
    rando.announce();
}
