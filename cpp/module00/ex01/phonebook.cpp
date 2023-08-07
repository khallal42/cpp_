#include "my_awesome_phonebook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}
PhoneBook::~PhoneBook()
{

}

int PhoneBook::ft1()
{
    if(info[index].ft())
        return (1);
    return (0);
}

void PhoneBook::print_con(void)
{
    std::string k;
    int index;

    if(info[0].getname().empty())
    {
        std::cout << "we don't have any contact\n";
        return ;
    }   
    for(int i = 0; i < 8; i++)
    {
        if(info[i].getname().empty())
            break ;
        std::cout << i << "         " << "|";
        info[i].ft_print();
    }
    while (1)
    {
        std::cout << "enter index : ";
        std::getline(std::cin, k);
        if (std::cin.eof() || std::cin.fail())
        {
            std::cout << "End of input reached or failure occurred." << std::endl;
            exit(0);
        }
        if (!ft_isdigit(k))
        {
            std::cout << "index is number";
            return ;
        }
        else
        {
            if(k.empty())
                continue ;
            else
            {
            index = std::stoi(k);
            if(info[index].getname().empty() == 0)
                info[index].ft_print_s();
            else
            {
                std::cout << "your index not valide\n";
                return ;
            }
            }
        }
            
    }
}

void PhoneBook::increment(void)
{
    if(index == 7)
        index = 0;
    else
        index++;
}