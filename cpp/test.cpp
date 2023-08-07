#include <iostream>

class con{
    private :
        int i;
        int h;
    public :
        con(): i(0), h(0)
        {}
        con(int i, int h):i(i), h(h)
        {}
        void print_cl()
        {
            std::cout << i << "\t" << h << std::endl;
        }
};

int main()
{
    con c1;
    con c2(8, 9);
    con c3(c2);
    con c4 = c2;
    c4.print_cl();
}