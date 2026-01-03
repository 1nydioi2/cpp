#include <iostream>
#include <string>
#include "AAnimal.hpp"



AAnimal::AAnimal( void )
:	type( "AAnimal" )
{
	std::cout << "AAnimal Default Construtor called." << std::endl;

	return ;
}

AAnimal::AAnimal( const AAnimal& source )
{
	std::cout << "AAnimal Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal Destructor called." << std::endl;

	return ;
}


void	AAnimal::operator=( const AAnimal& other )
{
	this->type = other.type;

	return ;
}


std::string	AAnimal::getType( void ) const
{
	return ( this->type );
}


void	AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal Sound." << std::endl;

	return ;
}
