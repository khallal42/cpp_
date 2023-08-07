#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
    std::string name;
    Weapon&  creat;
    
    public :
        void attack();
        HumanA(std::string nam, Weapon& a);
        ~HumanA();
};

#endif