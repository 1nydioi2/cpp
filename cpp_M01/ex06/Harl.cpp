#include "externals.hpp"
#include "Harl.hpp"



Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}


void	Harl::complain( std::string level )
{
	std::string	const levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	char		const lvls[4] = {'D', 'I', 'W', 'E'};

	void		(Harl::*ptmf[4])( void ) const =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	char	lvl = 'd';
	
	for (unsigned short i = 0; i < 4; i++)
		if (level == levels[i])
			lvl = lvls[i];
	switch (lvl)
	{
		case 'D':
		{
			(this->*ptmf[0])();
			__attribute__ ((fallthrough));
		}
		case 'I':
		{
			(this->*ptmf[1])();
			__attribute__ ((fallthrough));
		}
		case 'W':
		{
			(this->*ptmf[2])();
			__attribute__ ((fallthrough));
		}
		case 'E':
		{
			(this->*ptmf[3])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return ;
}

void	Harl::debug( void ) const
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

	return ;
}

void	Harl::info( void ) const
{	
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;	

	return ;
}

void	Harl::warning( void ) const
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;

	return ;
}

void	Harl::error( void ) const
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;

	return ;
}
