#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include "easyfind.hpp"



int	main( void )
{
	int res = 0;


	std::deque<int>	d;
	d.insert( d.begin(), 0 );
	d.insert( ++d.begin(), 1 );
	res = easyfind( d, 2 );
	std::cout << res << std::endl;
	
	std::list<int>	l;
	l.insert( l.begin(), 2 );
	l.insert( ++l.begin(), 3 );
	res = easyfind( l, 3 );
	std::cout << res << std::endl;

	std::vector<int>	v;
	v.insert( v.begin(), 4 );
	v.insert( ++v.begin(), 5 );
	res = easyfind( v, 6 );
	std::cout << res << std::endl;
/*
	std::stack<int>	s;
	s.push( 2 );
	s.push( 3 );
	res = easyfind( s, 2 );
	std::cout << res << std::endl;
	
	std::queue<int>	q;
	q.push( 4 );
	q.push( 5 );
	res = easyfind( q, 3 );
	std::cout << res << std::endl;
*/
	
	return( 0 );
}
