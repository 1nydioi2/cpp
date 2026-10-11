#include <iostream>
#include "Span.hpp"



int	main( void )
{
	Span	a;

	Span	b( 12 );
	b.addNumber( 2 );
	b.addNumber( 4 );
	b.printArray();
	std::cout << b.shortestSpan() << '\t' << b.longestSpan() << std::endl;
	
	std::cout << "C---------------------------------\n" << std::endl;
	Span	c( b );
	c.addNumber( -2 );
	c.addNumber( -4 );
	c.printArray();
	std::cout << c.shortestSpan() << '\t' << c.longestSpan() << std::endl;
	
	std::cout << "A---------------------------------\n" << std::endl;
	a = b;
	a.addNumber( std::numeric_limits<int>::min() );
	a.addNumber( std::numeric_limits<int>::max() );
	a.printArray();
	std::cout << a.shortestSpan() << '\t' << a.longestSpan() << std::endl;

	std::cout << "D---------------------------------\n" << std::endl;
	Span	d( 9999999 );
	
	int	array[9999];
	for ( int i = 0; i < 9999; i++ )
		array[i] = i;
	d.addNumberRange( 0, 9998, array );
	d.printArray();
	std::cout << d.shortestSpan() << '\t' << d.longestSpan() << std::endl;

	return( 0 );
}
