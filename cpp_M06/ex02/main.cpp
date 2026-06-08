#include <iostream>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base *	generate( void )
{
	Base *p;
	time_t timestamp = time( NULL );

	if ( timestamp.tm_sec < 3 )
		p = new A;
	else if ( timestamp.tm_sec < 6 )
		p = new B;
	else
		p = new C;

	return ( p );
}

void	identify( Base *p )
{
	std::cout << "ptr : " << typeid( *p ) << std::endl;

	return;
}

void	identify( Base &p )
{
	std::cout << "ref : " << typeid( p ) << std::endl;

	return;
}

int main()
{
	Base *x = generate();

	identify( x );
	identify( &(*x) );
	delete x;

	return ( 0 );
}
