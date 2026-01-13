#include "Zombie.hpp"


int main(/*int argc, char const *argv[]*/)
{
    Zombie zombie = Zombie("Fred");
    zombie.Announce();

    Zombie *Bob = newZombie("Bob");
    Bob->Announce();
    delete Bob;

    randomChump("Greg");

    return (0);
}
