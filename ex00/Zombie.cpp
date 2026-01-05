#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << "HAS BEEN DESTROYED.\n";
}

void    Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
