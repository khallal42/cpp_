#include "Zombie.hpp"

int main()
{
    Zombie* b;
    int num_zombie = 5;

    b = zombieHorde(num_zombie, "khalifa");
    for(int i = 0; b && i < num_zombie; i++)
        b[i].announce();
    delete [] b;
}