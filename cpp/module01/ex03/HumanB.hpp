#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
    std::string name;
    Weapon*  creat;
    
    public :
        void attack();
        void setWeapon(Weapon& b);
        HumanB(std::string name);
        ~HumanB();
};

#endif