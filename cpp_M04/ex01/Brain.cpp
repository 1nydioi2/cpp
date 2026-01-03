#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"



Brain::Brain( void )
{
	std::stringstream out;
	std::cout << "Brain Default Construtor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		out << i + 1;
		this->ideas[i] = out.str();
		out.str("");
	}
	return ;
}

Brain::Brain( const Brain& source )
{
	std::cout << "Brain Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor called." << std::endl;

	return ;
}


void	Brain::operator=( const Brain& other )
{
	if ( this == &other )
		return ;
	for ( int i = 0; i < 100; i++ )
		this->ideas[i] = other.ideas[i];

	return ;
}
