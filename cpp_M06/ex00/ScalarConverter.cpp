#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "ScalarConverter.hpp"



void	literal_char( std::string literal )
{
	std::stringstream	lit;

	std::cout << "char: " << literal[0] << std::endl;	
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(literal[0]) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << std::endl;

	return ;
}

void	literal_int( std::string literal )
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

	if ( liti < std::numeric_limits<int>::max() && liti > std::numeric_limits<int>::min() )
		std::cout << "int: " << liti << std::endl;
	else
		std::cout << "int: Out of limits" << std::endl;

	std::cout << std::fixed;

	if ( litd < std::numeric_limits<float>::max() && litd > -std::numeric_limits<float>::max() )
		std::cout << "float: " << litf << 'f' << std::endl;
	else
		std::cout << "float: Out of limits" << litd << std::endl;

	if ( litd < std::numeric_limits<double>::max() && litd > -std::numeric_limits<double>::max() )
		std::cout << "double: " << litd << std::endl;
	else
		std::cout << "double: Out of limits" << std::endl;

	return ;


}

void	literal_float( std::string literal )
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
	
	if ( liti < std::numeric_limits<int>::max() && liti > std::numeric_limits<int>::min() )
		std::cout << "int: " << liti << std::endl;
	else
		std::cout << "int: Out of limits" << std::endl;

	std::cout << std::fixed;

	if ( litd < std::numeric_limits<float>::max() && litd > -std::numeric_limits<float>::max() )
	{	
		//std::cout << std::setprecision( std::numeric_limits<float>::digits10 );
		std::cout << "float: " << litf << 'f' << std::endl;
	}
	else
		std::cout << "float: Out of limits" << litd << std::endl;
	
	if ( litd < std::numeric_limits<double>::max() && litd > -std::numeric_limits<double>::max() )
	{	
		//std::cout << std::setprecision( std::numeric_limits<double>::digits10 );
		std::cout << "double: " << litd << std::endl;
	}
	else
		std::cout << "double: Out of limits" << std::endl;

	return ;
}

void	literal_double( std::string literal )
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

	if ( liti < std::numeric_limits<int>::max() && liti > std::numeric_limits<int>::min() )
		std::cout << "int: " << liti << std::endl;
	else
		std::cout << "int: Out of limits" << std::endl;

	std::cout << std::fixed;

	if ( litd < std::numeric_limits<float>::max() && litd > -std::numeric_limits<float>::max() )
	{	
		//std::cout << std::setprecision( std::numeric_limits<float>::digits10 );
		std::cout << "float: " << litf << 'f' << std::endl;
	}
	else
		std::cout << "float: Out of limits" << litd << std::endl;

	if ( litd < std::numeric_limits<double>::max() && litd > -std::numeric_limits<double>::max() )
	{	
		//std::cout << std::setprecision( std::numeric_limits<double>::digits10 );
		std::cout << "double: " << litd << std::endl;
	}
	else
		std::cout << "double: Out of limits" << std::endl;

	return;
}

void	fork( std::string literal )
{
	if ( literal.length() == 1 && ( literal[0] < '0' || literal[0] > '9' ) )
			literal_char( literal );
	else if ( literal.find( '.' ) == std::string::npos && literal.find('f') == std::string::npos )
		literal_int( literal );
	else if ( literal.find('f') != std::string::npos )
		literal_float( literal );
	else
		literal_double( literal );

	return ;
}

void	ScalarConverter::convert( std::string literal )
{
	fork( literal );

	return ;
}
