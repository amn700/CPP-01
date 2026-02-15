#include "harl.hpp"

Harl::Harl( void ) {return;}
Harl::~Harl( void ){return;}

void Harl ::  debug( void )  {std::cout <<"[ DEBUG ]\n"<< DEBUG_TEXT << std::endl;};
void Harl ::  info( void )   {std::cout <<"[ INFO ]\n"<< INFO_TEXT << std::endl;};
void Harl ::  warning( void ){std::cout <<"[ WARNING ]\n"<< WARNING_TEXT << std::endl;};
void Harl ::  error( void )  {std::cout <<"[ ERROR ]\n"<< ERROR_TEXT << std::endl;};

void Harl:: complain( std::string level )
{
    std::string type[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (level == type[i])
            break;
    }
    switch (i)
    {
        case 0:
            this->debug();
            // fall through
        case 1:
            this->info();
            // fall through
        case 2:
            this->warning();
            // fall through
        case 3:
            this->error();
            break;
        default:
            std::cout << RANDOM_TEXT << std::endl;
            break;
    }
    return ;
}
