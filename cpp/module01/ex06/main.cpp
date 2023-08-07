#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    Harl    a;
    int i = a.complain(av[1]);

    switch (i)
    {
        case 0 : 
            a.print_fun(i);
            break ;
        case 1 :
            a.print_fun(i);
            break ;
        case 2 : 
            a.print_fun(i);
            break ;
        case 3 : 
            a.print_fun(i);
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}