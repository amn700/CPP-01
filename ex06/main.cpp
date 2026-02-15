#include "harl.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        return std::cout << "Harl didnt complain ?????" << std::endl, 1;
    else if (argc > 2)
        return std::cout << "Harl complained tooooo much !!!" << std::endl, 1;
    Harl test;
    test.complain(argv[1]);
    return 0;
}