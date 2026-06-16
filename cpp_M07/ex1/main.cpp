#include <iostream>
#include "iter.hpp"



template< typename T >
void	increment_cell( T& cell )
{
	array += 1; 

	return;
}

template< typename T >
void	print_cell( T& cell ) const
{
	std::cout << cell << std::endl; 


	return;
}

int	main( void )
{
	int		ari[] = { 4, 2 };
	char	arc[] = { 'N', 'i', 'n', 'j', 'a', '\0' };

	iter( &ari, 2, &increment_cell );
	iter( &arc, 6, &print_cell );

	return( 0 );
}
