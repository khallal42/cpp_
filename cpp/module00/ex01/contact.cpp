#include "my_awesome_phonebook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::ft_print_s()
{
    std::cout << "first name : ";
    std::cout << first_name << "\n";
    std::cout << "last name : ";
    std::cout << last_name << "\n";
    std::cout << "nickname : ";
    std::cout << nickname << "\n";
    std::cout << "darkest secret : ";
    std::cout << darkest_secret << "\n";
    std::cout << "phone number : ";
    std::cout << phone_num << "\n";
}

std::string Contact::getname()
{
    return(first_name);
}

void Contact::ft_print(void)
{
    if (first_name.length() < 10)
    {
        std::cout << std::setw(10);
        std::cout << first_name ;
        std::cout << "|";
    }
    else
        std::cout << first_name.substr(0, 9) << "." << "|";
    if (last_name.length() < 10)
    {
        std::cout << std::setw(10);
        std::cout << last_name;
        std::cout << "|";
    }
    else
        std::cout << last_name.substr(0, 9) << "." <<  "|";
    if (nickname.length() < 10)
    {
        std::cout << std::setw(10);
        std::cout << nickname;
        std::cout << "\n";
    }
    else
        std::cout << nickname.substr(0, 9) << "." << "\n";
}