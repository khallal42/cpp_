#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Zombie created Default" << std::endl;
}

Zombie::Zombie(std::string name) {
    std::cout << "Zombie created arguments" << std::endl;
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " destrooyed\n";
}

void Zombie::announce(void) {
    std::cout << name << " : " << "BraiiiiiinnnzzzZ..." << std::endl;
}
