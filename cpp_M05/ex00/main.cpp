#include <iostream>
#include "Bureaucrat.hpp"



int main()
{
	Bureaucrat joseph( "Joseph", 150 );
	Bureaucrat laurene( "Laurene", 1 );
	Bureaucrat malo( "Malo", 0 );
	std::cout << malo << std::endl;
	Bureaucrat mael( "Mael", -1 );
	std::cout << mael << std::endl;
	Bureaucrat myl( "Myl", 151 );
	std::cout << myl << std::endl;
	Bureaucrat ano;

	std::cout << std::endl;

	std::cout << joseph << std::endl;
	joseph.lowerGrade( 1 );
	joseph.raiseGrade( 2 );
	std::cout << joseph << std::endl;

	std::cout << laurene << std::endl;
	laurene.raiseGrade( 1 );
	laurene.lowerGrade( 2 );
	std::cout << laurene << std::endl;

	std::cout << ano << std::endl;
	ano.raiseGrade( 1 );
	ano.lowerGrade( 2 );
	std::cout << ano << std::endl;
	
	std::cout << std::endl;
	return 0;
}
