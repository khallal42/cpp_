#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie  creat(name);
    creat.announce();
}