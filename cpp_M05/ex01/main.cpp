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

	Form	draw1( "draw", 24, 42 ), draw2( "draw", 24, 42 ), draw3( "draw", 24, 42 );
	testF( draw1, joseph );
	testF( draw2, laurene );
	testF( draw3, ano );
	
	Form	tap1( "tap", 42, 24 ), tap2( "tap", 42, 24 ), tap3( "tap", 42, 24 );
	testF( tap1, joseph );
	testF( tap2, laurene );
	testF( tap3, ano );
	
	Form	blank1, blank2, blank3;
	testF( blank1, joseph );
	testF( blank2, laurene );
	testF( blank3, ano );

	Form	wrong( "wrong", 0, 151 );
	testF( wrong, ano );


	return 0;
}
