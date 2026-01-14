#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << "zombie named \"" << this->_name << "\" HAS BEEN DESTROYED.\n";
}

void    Zombie::setName(const std::string& name){
    this->_name = name;
}

void    Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
