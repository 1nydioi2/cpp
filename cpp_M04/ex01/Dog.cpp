#include <iostream>
#include <string>
#include "Dog.hpp"



Dog::Dog( void )
:	Animal()
{
	std::cout << "Dog Default Construtor called." << std::endl;
	type = "Dog";
	_brain = new Brain();

	return ;
}

Dog::Dog( const Dog& source )
:	Animal()
{
	std::cout << "Dog Copy Construtor called." << std::endl;
	if ( &source == this)
		return ;
	*this = source;

	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called." << std::endl;
	delete _brain;

	return ;
}


void	Dog::operator=( const Dog& other )
{
	_brain = new Brain( *other._brain );
	this->type = other.type;

	return ;
}


void	Dog::makeSound( void ) const
{
	std::cout << "Barf." << std::endl;

	return ;
}

std::string	Dog::getIdea( unsigned int nb ) const
{
	if ( nb < 100 )
		return ( this->_brain->ideas[nb] );

	return ( "" );
}
