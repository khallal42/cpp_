#include "Harl.hpp"

void    Harl::print_fun(int index)
{
    void    (Harl::*ptomfun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = index; i < 4; i++)
        (this->*ptomfun[i])();
}

void    Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << " I love having extra bacon for my 7XL-double-cheese";
    std::cout << "-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough";
    std::cout << " bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been ";
    std::cout << "coming for years whereas you started working here since last month." <<std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::complain(std::string level)
{
    std::string string[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index;

    index = ((level == string[0]) * 0) + ((level == string[1]) * 1) + ((level == string[2]) * 2) + ((level == string[3]) * 3);
    if(index == 0 && level != string[0])
        return (4);
    return (index);
}