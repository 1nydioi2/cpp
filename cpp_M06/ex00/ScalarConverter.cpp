#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "ScalarConverter.hpp"



void	ScalarConverter::convert( std::string literal )
{
	std::stringstream	lit;
	int			liti;
	float			litf;
	double			litd;

	lit << literal;
	lit >> liti;
	litf = std::atof( literal.c_str() );
	litd = std::atof( literal.c_str() );
	if ( liti > 32 && liti < 127 )
		std::cout << "char: " << static_cast<char>(liti) << "." << std::endl;
	else
		std::cout << "char: Non displayable." << std::endl;
	std::cout << "int: " << liti << "." << std::endl;
	std::cout << "float: " << litf << "." << std::endl;
	std::cout << "double: " << litd << "." << std::endl;

	return ;
}
