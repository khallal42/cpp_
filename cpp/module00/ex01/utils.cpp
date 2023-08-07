#include "my_awesome_phonebook.hpp"

int	ft_isdigit(std::string c)
{
    int i;

    i = 0;
    while(c[i])
    {
	    if (c[i] < 48 || c[i] > 57)
		    return (0);
        i++;
    }
	return (1);
}

void    Contact::check_empty(std::string *no_empty, std::string k)
{
    std::cout << k;
    std::getline(std::cin, *no_empty); 
    if(k == "phone number : ")
    {
        
        while((*no_empty).empty() == 1 || !ft_isdigit(*no_empty))
        {
            if((*no_empty).empty() == 1)
                std::cout << "contact can’t have empty fields.\n";
            else
                std::cout << "digit\n";
            std::cout << k;
            std::getline(std::cin, *no_empty);
        }
    }
    while((*no_empty).empty() == 1)
    {
        std::cout << "contact can’t have empty fields.\n";
        std::cout << k;
        std::getline(std::cin, *no_empty);
    }
   
}

int   Contact::ft()
{
    std::cout << "first name : ";
    std::getline(std::cin, first_name);
    std::cout << "last name : ";
    std::getline(std::cin, last_name);
    std::cout << "nickname : ";
    std::getline(std::cin, nickname);
    std::cout << "darkest_secret : ";
    std::getline(std::cin, darkest_secret);
    std::cout << "phone number : ";
    std::getline(std::cin, phone_num);
    if (std::cin.eof() || std::cin.fail())
    {
        std::cout << "End of input reached or failure occurred." << std::endl;
        exit(0);
    }
    if (first_name.empty() || last_name.empty() || nickname.empty() || phone_num.empty() || !ft_isdigit(phone_num) || darkest_secret.empty())
    {
        std::cout << "can't save thit contact \n";
        return (0);
    }
    return (1);
}
