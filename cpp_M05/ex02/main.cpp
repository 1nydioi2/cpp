#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



void	testF( AForm &f, Bureaucrat &b )
{
	std::cout << f << std::endl;

	b.signForm( f );
	
	std::cout << std::endl;

	b.executeForm

	return ;
}


int main()
{

	Bureaucrat joseph( "Joseph", 24 );
	testB( joseph );

	Bureaucrat laurene( "Laurene", 42 );
	testB( laurene );

	Bureaucrat anon;
	testB( anon );

	ShrubberyCreationForm	oak( "oak" ), birch( "birch" ), hazel( "hazel" );
	testF( oak, joseph );
	testF( birch, laurene );
	testF( hazel, ano );
	
	RobotomyRequestForm		joe( "joe" ), lolo( "lolo" ), ano( "ano" );
	testF( joe, joseph );
	testF( lolo, laurene );
	testF( ano, anon );
	
	PresidentialPardonForm	joee( "joee" ), loloo( "loloo" ), anoo( "anoo" );
	testF( joee, joseph );
	testF( loloo, laurene );
	testF( anoo, anon );

	Bureaucrat	przei( "Professor Zei, Anthropoloogist", 2, 2 );

	testF( anoo, przei );


	return 0;
}
