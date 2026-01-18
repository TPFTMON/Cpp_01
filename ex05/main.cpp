#include "Harl.hpp"

int main()
{
    Harl HARL;

    HARL.complain("DEBUG");
    HARL.complain("INFO");
    HARL.complain("WARNING");
    HARL.complain("ERROR");
    HARL.complain("SOME RANDOM BULLLSHIT");

    HARL.complain("Or whatever");

    return (0);
}
