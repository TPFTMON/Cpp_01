#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : _name(name) {
}

Zombie::~Zombie(){
    std::cout << "zombie named \"" << this->_name << "\" HAS BEEN DESTROYED.\n";
}

void    Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

// Zombie::Zombie(const std::string& name){
//     this->_name = name;
// }
