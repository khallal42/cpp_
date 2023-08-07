#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string s1 = av[2];
        if(s1.empty())
            exit(1);
        std::string s2 = av[3];
        std::string r = av[1];
        size_t found;
        std::ifstream   filename(r);
        if(filename.is_open())
        {
            std::string read;
            r += ".replace";
            std::ofstream   file(r);
            if(file.is_open())
            {
                while(std::getline(filename, read))
                {
                    found = read.find(s1); 
                    while(found != std::string::npos)
                    {
                        read.erase(found, s1.length());
                        read.insert(found, s2);
                        found = read.find(s1, found + s2.length()); 
                    }
                    file << read << std::endl;
                }
            }
            else
                std::cout << "file : " << r << "not open" << std::endl;
        }
        else
            std::cout << "file : " << av[1] << "not exit" << std::endl;
    }
    else
        std::cout << "bad argument" << std::endl;
}
