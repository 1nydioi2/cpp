#include <iostream>
#include <sys/time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base *	generate( void )
{
	struct timeval	tv;
	gettimeofday(&tv, NULL);

	Base	*p;
	int		r = tv.tv_usec % 3;

	if (r < 1 )
		p = new A;
	else if ( r < 2 )
		p = new B;
	else
		p = new C;

	return ( p );
}

void	identify( Base *p )
{
	std::cout << "ptr : ";
	if ( dynamic_cast<A*>(p) )
		std::cout << "Object type is A." << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "Object type is B." << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "Object type is C." << std::endl;
	else
		std::cout << "Object type is Base." << std::endl;

	return;
}

void	identify( Base &p )
{
	std::cout << "ref : ";
	try
	{
		Base&	x = dynamic_cast< A& >( p );
		std::cout << "Object type is A." << std::endl;
		(void)x;
	}
	catch ( const std::exception& e )
	{
		try
		{
			Base&	x = dynamic_cast< B& >( p );
			std::cout << "Object type is B." << std::endl;
			(void)x;
		}
		catch ( const std::exception& e )
		{
			try
			{
				Base&	x = dynamic_cast< C& >( p );
				std::cout << "Object type is C." << std::endl;
				(void)x;
			}
			catch ( const std::exception& e )
			{
				std::cout << "Object type is Base." << std::endl;
			}
		}
	}

	return;
}


int main()
{
	Base*	x = generate();
	Base*	y = generate();
	Base&	z = *y;

	identify( x );
	identify( z );
	
	delete x;
	delete y;

	return ( 0 );
}
