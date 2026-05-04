#include <iostream>
#include "Bureaucrat.hpp"


void	test( Bureaucrat &bur )
{
	std::cout << bur << std::endl;
	
	std::cout << "lowerGrade( 1 ) : ";
	bur.lowerGrade( 1 );
	std::cout << std::endl;
	
	std::cout << "raiseGrade( 2 ) : ";
	bur.raiseGrade( 2 );
	std::cout << std::endl;
	
	std::cout << bur << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;

	return ;
}


int main()
{

	Bureaucrat joseph( "Joseph", 150 );
	test( joseph );

	Bureaucrat laurene( "Laurene", 1 );
	test( laurene );

	Bureaucrat ano;
	test( ano );


	std::cout << std::endl;


	Bureaucrat malo( "Malo", 0 );
	test( malo );

	Bureaucrat mael( "Mael", -1 );
	test( mael );
	
	Bureaucrat myl( "Myl", 151 );
	test( myl );


	return 0;
}
