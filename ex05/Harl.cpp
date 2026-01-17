#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

// private methods:
void    Harl::debug(){
    std::cout << "DEBUG:\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void    Harl::info(){
    std::cout << "INFO:\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void    Harl::warning(){
    std::cout << "WARNING:\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n\n";
}

void    Harl::error(){
    std::cout << "ERROR:\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}


// public methods:
typedef void (Harl::*HarlMembFn)();
// INSTEAD OF:
//   void (Harl::*funcs[4])(void) = {
        // &Harl::debug,
        // &Harl::info,
        // &Harl::warning,
        // &Harl::error
    // };

void    Harl::complain(std::string level){
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    HarlMembFn functions[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++){
        if (level == levels[i]){
            (this->*functions[i])();
            return ;
        }
    }

    std::cout << "ANYTHING ELSE:\n";
    std::cout << "Beware... Harl is about to complain ANYWAY...\n\n";
}
