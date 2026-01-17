#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type){
}

Weapon::~Weapon(){
}

const std::string Weapon::getType(){
    const std::string &typeREF = this->_type;
    return (typeREF);
}

void    Weapon::setType(const std::string new_type){
    this->_type = new_type;
}
