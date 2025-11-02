#include "Zombie.hpp"

int main ()
{
    Zombie z = Zombie("z_one");
    
    z.announce();
    z.randomChump("random zombie");
    Zombie *z2 = z.newZombie("Z_two");
    z2->announce();
    z2->~Zombie();
}
