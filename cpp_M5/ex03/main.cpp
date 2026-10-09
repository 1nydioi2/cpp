#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main()
{
	Bureaucrat joseph( "Joseph", 24 );
	Intern marco;
	
	std::cout << std::endl;

	AForm *form = marco.makeForm( "ShrubberyCreationForm", "Ebony" );
	
	std::cout << std::endl;
	
	if ( form != NULL )
	{
		joseph.signForm( *form );
		joseph.executeForm( *form );
	
		std::cout << std::endl;
	
		delete ( form );
	}

	return ( 0 );
}
