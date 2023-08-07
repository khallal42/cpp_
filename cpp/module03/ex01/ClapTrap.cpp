#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTRAP default condtructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parametre constructor called" << std::endl;
    this->name = name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_points == 0)
        std::cout << "ClapTrap " << name << " can't attack " << target << " cause energy point = 0" << std::endl;
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing ";
        std::cout << attack_damage << " points of damage !" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0)
        std::cout << "ClapTrap " << name << " already dead" << std::endl;
    else if(amount > hit_points)
    {
        hit_points = 0;
        std::cout << "ClapTrap " << name << " is dead" <<  std::endl;
    }
    else{
        std::cout << "ClapTrap " << name << " take damage" << std::endl;
        hit_points -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(hit_points == 0)
        std::cout << "ClapTrap " << name << " already dead" << std::endl;
    else
    {
        if (energy_points != 0)
        {
            std::cout << "ClapTrap " << name << " berepaired" << std::endl;
            hit_points += amount;
            energy_points -= 1;
        }
        else
            std::cout << "ClapTrap " << name << " can't beRepaired cause energy points = 0" << std::endl;
    }
}