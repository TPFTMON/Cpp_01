#include "Zombie.hpp"

int main()
{
    Zombie zombie("Fred");
    zombie.announce();


    Zombie *Bob = newZombie("Bob");
    Bob->announce();
    delete Bob;

    randomChump("Greg");

    return (0);
}

    // Zombie zombie = Zombie("Fred");
    // zombie.announce();
