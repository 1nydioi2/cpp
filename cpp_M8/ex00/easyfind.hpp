template < typename T >
short int	easyfind( T c, int n )
{
	for (size_t i = 0; i < c.size(); i++)
	{
		if ( c.front() == n )	
			return ( 0 );
		else
			c.pop_front();
	}
	
	return ( 1 );
}
