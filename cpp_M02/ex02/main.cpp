#include "Fixed.hpp"



int	main( void )
{
	Fixed a( 42 );
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	
	std::cout << "(b < a) = " << (b < a) << std::endl;
	std::cout << "(b > a) = " << (b > a) << std::endl;
	std::cout << "(b <= a) = " << (b <= a) << std::endl;
	std::cout << "(b >= a) = " << (b >= a) << std::endl;
	std::cout << "(b == a) = " << (b == a) << std::endl;
	std::cout << "(b != a) = " << (b != a) << std::endl;
	
	std::cout << "b + a = " << b + a << std::endl;
	std::cout << "b - a = " << b - a << std::endl;
	std::cout << "b / a = " << b / a << std::endl;
	std::cout << "b * a = " << b * a << '\n' << std::endl;
	
	a = 0;
	std::cout << "a = " << a << '\n' << std::endl;
	
	std::cout << "++a = " << ++a << '\n' << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	std::cout << "a++ = " << a++ << '\n' << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	std::cout << "--a = " << --a << '\n' << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	std::cout << "a-- = " << a-- << '\n' << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	
	
	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << '\n' << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;

	return ( 0 );
}
