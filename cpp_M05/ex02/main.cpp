#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



void	testF( AForm &f, Bureaucrat &b )
{
	std::cout << std::endl;
	
	std::cout << f << std::endl;

	b.signForm( f );
	b.executeForm( f );
	
	std::cout << std::endl;

	return ;
}


int main()
{

	Bureaucrat pr_zei( "Professor Zei, Anthropologist", 2 );

	ShrubberyCreationForm	hazel( "Hazel" );
	testF( hazel, pr_zei );
	
	RobotomyRequestForm		robbie( "Robbie" );
	testF( robbie, pr_zei );
	
	PresidentialPardonForm	sauvage( "Sauvage" );
	testF( sauvage, pr_zei );


	return 0;
}
