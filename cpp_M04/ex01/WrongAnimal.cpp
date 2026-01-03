#include <iostream>
#include <string>
#include "WrongAnimal.hpp"



WrongAnimal::WrongAnimal( void )
:	type( "WrongAnimal" )
{
	std::cout << "WrongAnimal Default Construtor called." << std::endl;

	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& source )
{
	std::cout << "WrongAnimal Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called." << std::endl;

	return ;
}


void	WrongAnimal::operator=( const WrongAnimal& other )
{
	this->type = other.type;

	return ;
}


std::string	WrongAnimal::getType( void ) const
{
	return ( this->type );
}


void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Animal Sound." << std::endl;

	return ;
}
