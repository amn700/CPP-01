#include "harl.hpp"

Harl::Harl( void ) {return;}
Harl::~Harl( void ){return;}

void Harl ::  debug( void )  {std::cout << DEBUG_TEXT << std::endl;};
void Harl ::  info( void )   {std::cout << INFO_TEXT << std::endl;};
void Harl ::  warning( void ){std::cout << WARNING_TEXT << std::endl;};
void Harl ::  error( void )  {std::cout << ERROR_TEXT << std::endl;};

void Harl:: complain( std::string level )
{
    void (Harl ::*func_ptr[4])(void);
    func_ptr[0] = &Harl ::debug;
    func_ptr[1] = &Harl ::info;
    func_ptr[2] = &Harl ::warning;
    func_ptr[3] = &Harl ::error;
    std::string type[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (level == type[i])
        {
            (this->*func_ptr[i])();
            return;
        }
    }
    std::cout << RANDOM_TEXT << std::endl;
    return ;
}