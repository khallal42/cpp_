#ifndef MY_ANWESOME_PHONBOOK_HPP
#define MY_ANWESOME_PHONBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact{
    private :
        std::string  first_name; //attribiot
        std::string  last_name;
        std::string  nickname;
        std::string  phone_num;
        std::string  darkest_secret;
    public :
       void    check_empty(std::string *no_empty, std::string k);
       int ft();
       std::string getname();
       void ft_print(void);
       void ft_print_s();
       Contact();
       ~Contact();
};

class PhoneBook{
    private :
        Contact info[8];
        int index;
    public :
        int    ft1();
        void increment(void);
        void print_con(void);
        PhoneBook();
        ~PhoneBook();
};

int	ft_isdigit(std::string c);

#endif