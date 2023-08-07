#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " destrooyed\n";
}

void Zombie::announce(void) {
    std::cout << name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name) {
    this->name = name;
}
