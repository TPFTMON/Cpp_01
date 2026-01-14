#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{

private:
    std::string _name;

public:
    Zombie(const std::string& name);
    ~Zombie();
    void announce(void);
};


// Zombie functions:
void    randomChump(const std::string& name);
Zombie* newZombie(const std::string& name);

#endif
