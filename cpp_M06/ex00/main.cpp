#include <iostream>
#include "ScalarConverter.hpp"



int main( int argc, char *argv[])
{
	if ( argc != 2 )
		return ( 1 );

	std::string literal( argv[1] );
	ScalarConverter::convert( literal );
	ScalarConverter a;

	(void) a;

	return ( 0 );
}
