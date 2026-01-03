#include <iostream>
#include <string>
#include <sstream>
#include "Brain.hpp"



Brain::Brain( void )
{
	std::string s;
	std::stringstream out;
	std::cout << "Brain Default Construtor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		out << i + 1;
		s = out.str();
		this->ideas[i] = s;
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
	for ( int i = 0; i < 100; i++ )
		this->ideas[i] = other.ideas[i];

	return ;
}
