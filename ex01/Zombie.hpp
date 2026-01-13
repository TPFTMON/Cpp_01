#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{

private:
    std::string _Name;

public:
    Zombie(std::string name);
    ~Zombie();
    void Announce(void);
};


// Zombie functions:
void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
