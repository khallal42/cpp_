#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N < 0)
        return NULL;
    Zombie*  creat = new Zombie[N];

    for(int i = 0; i < N ; i++)
        creat[i].setname(name);
    return (creat);
}