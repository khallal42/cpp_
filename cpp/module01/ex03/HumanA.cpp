#include "HumanA.hpp"

HumanA::HumanA(std::string nam, Weapon& a) : name(nam) ,  creat(a)
{  
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << *creat.getType() << std::endl;
}