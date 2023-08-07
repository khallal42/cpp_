#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon{
    private :
        std::string type;
    public :
        std::string *getType(){
            return (&type);
        }
        void setType(std::string type){
            this->type = type;
        }
        Weapon();
        Weapon(std::string type);
        ~Weapon();
};

#endif