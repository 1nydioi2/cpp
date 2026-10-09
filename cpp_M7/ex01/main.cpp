#include <iostream>
#include "iter.hpp"



template< typename T >
void	increment_cell( T& cell )
{
	cell = cell + 1; 

	return;
}

template< typename T >
void	print_cell( const T& cell )
{
	std::cout << cell << std::endl; 

	return;
}

int	main( void )
{
	int		ari[] = { 4, 2 };
	const char	arc[] = { 'N', 'i', 'n', 'j', 'a', '\0' };

	iter( ari, 2, print_cell );
	iter( ari, 2, increment_cell );
	iter( ari, 2, print_cell );
	iter( arc, 6, print_cell );

	return( 0 );
}
