#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"


void	testB( Bureaucrat &joe )
{
	std::cout << joe << std::endl;
	
	std::cout << "lowerGrade( 1 ) : ";
	joe.lowerGrade( 1 );
	std::cout << std::endl;
	
	std::cout << "raiseGrade( 2 ) : ";
	joe.raiseGrade( 2 );
	std::cout << std::endl;
	
	std::cout << joe << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}

void	testF( Form &f, Bureaucrat &b )
{
	std::cout << f << std::endl;

	b.signForm( f );
	
	std::cout << std::endl;

	return ;
}


int main()
{

	Bureaucrat joseph( "Joseph", 24 );
	testB( joseph );

	Bureaucrat laurene( "Laurene", 42 );
	testB( laurene );

	Bureaucrat ano;
	testB( ano );

	Form	draw( "draw", 24, 42 );
	testF( draw, joseph );
	testF( draw, laurene );
	testF( draw, ano );
	
	Form	tap( "tap", 148, 2 );
	testF( tap, joseph );
	testF( tap, laurene );
	testF( tap, ano );
	
	Form	blank;
	testF( blank, joseph );
	testF( blank, laurene );
	testF( blank, ano );

	Form	wrong( "wrong", 0, 151 );
	testF( wrong, ano );


	return 0;
}
