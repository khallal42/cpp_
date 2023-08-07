#include "my_awesome_phonebook.hpp"

int main()
{
    std::string k;
    PhoneBook    phone;

    while (1)
    {
        std::cout << "ENTER : " << std::endl;
        std::cout << "ADD OR SEARCH OR EXIT" << std::endl;
        std::getline(std::cin, k);
        if (std::cin.eof() || std::cin.fail())
        {
            std::cout << "End of input reached or failure occurred." << std::endl;
            exit(0);
        }
        if(k == "ADD")
        {
            if(phone.ft1())
                phone.increment();
        }
        else if (k == "SEARCH")
        {
            phone.print_con();
        }
        else if (k == "EXIT")
            exit(0);
    }
}