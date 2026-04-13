#include <iostream>
#include <string>
#include "Intern.hpp"
#include "AForm.hpp"



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


AForm	*Intern::makeForm( std::string form, std::string target )
{


	switch ( form )
	{
		case "":
			AForm	rform();
		break;	
		case "":
			AForm	rform();
		break;
		case "":
			AForm	rform();
		break;
		default:
	}

	return ( &rform )
}
