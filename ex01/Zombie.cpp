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

void Zombie :: announce( void )
{
    std::cout << get_name() << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie* Zombie :: newZombie( std::string name )
// {
//     Zombie *z = new Zombie;
//     if (!z)
//         return NULL;
//     z->name = name;
//     return z;
// }

Zombie * Zombie :: zombieHorde( int N, std :: string name)
{
    Zombie * horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].name = name;
    return horde;
}
