#include <iostream>
#include <string>
#include "ScalarConverter.hpp"



void	ScalarConverter::convert( std::string literal )
{
	if ( std::stoi( literal ) > 32 && < 127 )
		std::cout << "char: " << std::stoi( literal ) << "." << std::endl;
	else
		std::cout << "char: Non displayable." << std::endl;
	std::cout << literal "int: " << std::stoi( literal ) << "." << literal.stoi() << std::endl;
	std::cout << literal "float: " << std::stoi( literal ) << "." << std::endl;
	std::cout << literal "double: " << std::stoi( literal ) << "." << std::endl;

	return ;
}
