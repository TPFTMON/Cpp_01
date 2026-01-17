#include "Zombie.hpp"

int main()
{
    int               N = 13;
    const std::string name = "Alfred";
    Zombie            *zombies = zombieHorde(N, name);
    if (!zombies){
        std::cout << "Stop doing negatives and 0. Thanks.\n";
        return (1);
    }

    for (int i = 0; i < N; i++){
        std::cout << "Zombie " << i + 1 << ":\n";
        zombies[i].announce();
    }

    std::cout << "\n+++++++++++++++++++++++++++NEW NAMES+++++++++++++++++++++++++++++++:\n";
    zombies[1].setName("Bfred");
    zombies[2].setName("Cfred");
    zombies[3].setName("Dfred");
    zombies[4].setName("Efred");
    zombies[5].setName("Bilbo");
    zombies[6].setName("FRRRRRRROD");
    zombies[7].setName("Fared");
    zombies[8].setName("George");
    zombies[9].setName("Fred");
    zombies[10].setName("Bishop");
    zombies[11].setName("UwU");
    zombies[12].setName("The last one...");

    for (int i = 0; i < N; i++){
        std::cout << "Zombie " << i + 1 << ":\n";
        zombies[i].announce();
    }

    delete[] zombies;
    return (0);
}

