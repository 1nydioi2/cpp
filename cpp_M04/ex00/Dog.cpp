#include <iostream>
#include <string>
#include "Dog.hpp"



Dog::Dog( void )
:	Animal()
{
	type = "Dog";
	std::cout << "Dog Default Construtor called." << std::endl;

	return ;
}

Dog::Dog( const Dog& source )
:	Animal()
{
	std::cout << "Dog Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called." << std::endl;

	return ;
}


void	Dog::operator=( const Dog& other )
{
	this->type = other.type;

	return ;
}


void	Dog::makeSound( void ) const
{
	std::cout << "Barf." << std::endl;

	return ;
}
