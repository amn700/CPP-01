#include "Zombie.hpp"

int main ()
{
    Zombie z = Zombie("z_one");
    
    z.announce();
    randomChump("random zombie");
    Zombie *z2 = newZombie("Z_two");
    z2->announce();
    std::cout << "something "<< std::endl;
    delete z2;
}
