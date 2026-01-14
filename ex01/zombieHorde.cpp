#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name){
    if (N <= 0){
        std::cout << "Bro... what is this number of zombies???\n";
        return (NULL);
    }

    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++){
        zombies[i].setName(name);
    }

    return (zombies);
}
