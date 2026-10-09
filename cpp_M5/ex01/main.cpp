#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"



void	testF( Form &f, Bureaucrat &b )
{
	std::cout << f << std::endl;
	std::cout << b << std::endl;

	b.signForm( f );
	
	std::cout << std::endl;

	return ;
}


int main()
{

	Bureaucrat joseph( "Joseph", 24 );
	Bureaucrat laurene( "Laurene", 42 );
	Bureaucrat ano;

	Form	drawj( "Draw", 24, 42 ), drawl( "Draw", 24, 42 ), drawa( "Draw", 24, 42 );
	Form	tapj( "Tap", 42, 24 ), tapl( "Tap", 42, 24 ), tapa( "Tap", 42, 24 );
	Form	blankj, blankl, blanka;
	

	std::cout << std::endl;
	std::cout << std::endl;
	

	testF( drawj, joseph );
	testF( drawl, laurene );
	testF( drawa, ano );
	
	testF( tapj, joseph );
	testF( tapl, laurene );
	testF( tapa, ano );
	
	testF( blankj, joseph );
	testF( blankl, laurene );
	testF( blanka, ano );


	Form	wrong( "Wrong", 0, 151 );
	testF( wrong, ano );


	return 0;
}
