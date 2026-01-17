#include "Harl.hpp"

int main(){
    Harl HARL;

    HARL.complain("DEBUG");
    HARL.complain("INFO");
    HARL.complain("WARNING");
    HARL.complain("ERROR");
    HARL.complain("Some random bullshit");

    HARL.complain("Or whatever");

    return (0);
}
