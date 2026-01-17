#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon rock_a = Weapon("rock");

        HumanA bob("Bob", rock_a);
        bob.attack();
        rock_a.setType("big rock");
        bob.attack();
    }
    {
        Weapon rock_b = Weapon("rock");

        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(rock_b);
        jim.attack();
        rock_b.setType("big rock");
        jim.attack();
    }
    return (0);
}

// int main()
// {
//     {
//         Weapon club = Weapon("crude spiked club");

//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     {
//         Weapon club = Weapon("crude spiked club");

//         HumanB jim("Jim");
//         jim.setWeapon(club);
//         jim.attack();
//         club.setType("some other type of club");
//         jim.attack();
//     }
//     return 0;
// }

