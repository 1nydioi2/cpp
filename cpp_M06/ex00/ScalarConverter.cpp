#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "ScalarConverter.hpp"



void	ScalarConverter::convert( std::string literal )
{
	std::stringstream	lit;
	int					liti;
	float				litf;
	double				litd;

	lit << literal;
	lit >> liti;
	litd = std::atof( literal.c_str() );
	litf = static_cast<float>(litd);
	if ( liti > 32 && liti < 127 )
		std::cout << "char: " << static_cast<char>(liti) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << liti << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << std::setprecision( literal.length() ) << litf << "f" << std::endl;
	std::cout << "double: " << std::setprecision( literal.length() ) << litd << std::endl;

	return ;
}
