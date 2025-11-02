#include "Zombie.hpp"

int main ()
{
    // Zombie z ("z_one");

    Zombie *horde = Zombie :: zombieHorde(10, "horde");
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    delete[] horde;
}
