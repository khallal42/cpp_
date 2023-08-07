#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();
    public :
        int complain(std::string level);
        void print_fun(int index);
};

#endif