#include <iostream>
#include "Bureaucrat.hpp"



int main()
{
	Bureaucrat joseph( "Joseph", 150);
	Bureaucrat laurene( "Laurene", 1);
	Bureaucrat ano;

	std::cout << std::endl;

	std::cout << joseph << std::endl;
	joseph.lowerGrade(1);
	joseph.raiseGrade(2);

	std::cout << laurene << std::endl;
	laurene.raiseGrade(1);
	laurene.lowerGrade(2);

	std::cout << ano << std::endl;
	ano.raiseGrade(1);
	ano.lowerGrade(2);
	
	std::cout << std::endl;
	return 0;
}
