#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define DEBUG_TEXT "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO_TEXT "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_TEXT "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
#define ERROR_TEXT "This is unacceptable! I want to speak to the manager now."
#define RANDOM_TEXT "[ Probably complaining about insignificant problems ]"

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( std::string level );
    Harl(void);
    ~Harl(void);
};

#endif
