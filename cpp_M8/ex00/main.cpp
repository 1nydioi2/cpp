#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include "easyfind.hpp"



int	main( void )
{
	std::list<int>	l;
	l.assign( 1, 2 );


	int res = 0;
	res = easyfind( l, 5 );
	std::cout << res << std::endl;
	
	
	/*
	std::stack<int>				s = {6, 7};
	std::queue<int>				q = {8, 9};
	std::priority_queue<int>	pq = {10, 11};
	std::vector<int>			v = {0, 1};
	std::deque<int>				d = {2, 3};

	res = easyfind( v, 0 );
	std::cout << res << std::endl;
	
	res = easyfind( d, 1 );
	std::cout << res << std::endl;
	
	
	res = easyfind( s, 4 );
	std::cout << res << std::endl;
	
	res = easyfind( q, 9 );
	std::cout << res << std::endl;
	
	res = easyfind( pq, 11 );
	std::cout << res << std::endl;
	*/
	return( 0 );
}
