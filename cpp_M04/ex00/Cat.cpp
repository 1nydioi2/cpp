#include <iostream>
#include <string>
#include "Cat.hpp"



Cat::Cat( void )
:	Animal()
{
	type = "Cat";
	std::cout << "Cat Default Construtor called." << std::endl;

	return ;
}

Cat::Cat( const Cat& source )
:	Animal()
{
	std::cout << "Cat Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called." << std::endl;

	return ;
}


void	Cat::operator=( const Cat& other )
{
	this->type = other.type;

	return ;
}


void	Cat::makeSound( void ) const
{
	std::cout << "Nyaa." << std::endl;

	return ;
}
