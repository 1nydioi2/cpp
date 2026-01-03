#include <iostream>
#include <string>
#include "Cat.hpp"



Cat::Cat( void )
:	AAnimal()
{
	std::cout << "Cat Default Construtor called." << std::endl;
	type = "Cat";
	_brain = new Brain();

	return ;
}

Cat::Cat( const Cat& source )
:	AAnimal()
{
	std::cout << "Cat Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called." << std::endl;
	delete _brain;

	return ;
}


void	Cat::operator=( const Cat& other )
{
	if ( this == &other )
		return ;
	this->type = other.type;
	_brain = new Brain( *other._brain );

	return ;
}


void	Cat::makeSound( void ) const
{
	std::cout << "Nyaa." << std::endl;

	return ;
}

std::string	Cat::getIdea( unsigned int nb ) const
{
	if ( nb < 100 )
		return ( this->_brain->ideas[nb] );

	return ( "" );
}
