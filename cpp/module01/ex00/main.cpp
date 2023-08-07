#include "Zombie.hpp"

int main()
{
    Zombie *b;

    b = newZombie("mahdi"); 
    b->announce();
    randomChump("KHALIFA");
    delete b;
}