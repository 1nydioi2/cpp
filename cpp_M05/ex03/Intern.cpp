#include <iostream>
#include <string>
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



Intern::Intern( void )
{
	std::cout << "Intern Default Construtor called." << std::endl;

	return ;
}

Intern::~Intern( void )
{
	std::cout << "Intern Destructor called." << std::endl;

	return ;
}


int	tabling( std::string name )
{
	const int		elements = 3;
	const std::string	tab[elements] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm" };

	for ( int i = 0; i < elements; i++ )
	{	
		if ( name == tab[i] )
			return ( i );
	}
	
	return ( -1 );			
}

AForm	*Intern::makeForm( std::string form, std::string target )
{
	switch ( tabling( form ) )
	{
		case 0:
			return ( new ShrubberyCreationForm( target ) );
		break;	
		case 1:
			return ( new RobotomyRequestForm( target ) );
		break;
		case 2:
			return ( new PresidentialPardonForm( target ) );
		break;
		default:
			std::cout << "Error, provided form name does not exist." << std::endl;
	}
	return ( NULL );
}
