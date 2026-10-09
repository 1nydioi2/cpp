#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>



//REAL sequential
template < typename T >
short int	easyfind( T c, int n )
{
	if ( std::find( c.begin(), c.end(), n ) == c.end() )
		return ( 1 );
	return ( 0 );
}
/*
//stack
template < typename T >
short int	easyfind( std::stack<T> c, int n )
{
	while ( !c.empty() )
	{
		if ( c.top() == n )
			return ( 0 );
		else
			c.pop();
	}

	return ( 1 );
}

//queue
template < typename T >
short int	easyfind( std::queue<T> c, int n )
{
	while ( !c.empty() )
	{
		if ( c.front() == n )
			return ( 0 );
		else
			c.pop();
	}

	return ( 1 );
}*/
