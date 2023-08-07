#include <iostream>

int main()
{
    std::string k = "HI THIS IS BRAIN";
    std::string *stringPTR = &k;
    std::string &stringREF = k;

    std::cout << &k << "\n" << stringPTR << "\n" << &stringREF << "\n";
    std::cout << k << "\n" << *stringPTR << "\n" << stringREF;
}