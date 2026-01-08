#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->_Name = name;
}

Zombie::~Zombie(){
    std::cout << "zombie named \"" << this->_Name << "\" HAS BEEN DESTROYED.\n";
}

void    Zombie::Announce(void){
    std::cout << this->_Name << ": BraiiiiiiinnnzzzZ...\n";
}
