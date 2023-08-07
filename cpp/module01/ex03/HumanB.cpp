#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& b)
{
    creat = &b;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    if (this->creat)
        std::cout << name << " attacks with their " << *creat->getType() << std::endl;
    else
        std::cout << name << " attacks with their Hands " << std::endl;
}