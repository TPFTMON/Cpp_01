#include <iostream>
#include <string>

int main(void)
{
    std::string brain_string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &brain_string;
    std::string &stringREF = brain_string;

    std::cout << "The memory address of the string variable: " << &brain_string << "\n";
    std::cout << "The memory address held by stringPTR:      " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF:      " << &stringREF << "\n\n";

    std::cout << "The value of the string variable:  " << brain_string << "\n";
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF: " << stringREF << "\n";

    return (0);
}
