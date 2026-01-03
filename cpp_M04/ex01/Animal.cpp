#include <iostream>
#include <string>
#include "Animal.hpp"



Animal::Animal( void )
:	type( "Animal" )
{
	std::cout << "Animal Default Construtor called." << std::endl;

	return ;
}

Animal::Animal( const Animal& source )
{
	std::cout << "Animal Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called." << std::endl;

	return ;
}


void	Animal::operator=( const Animal& other )
{
	this->type = other.type;

	return ;
}


std::string	Animal::getType( void ) const
{
	return ( this->type );
}


void	Animal::makeSound( void ) const
{
	std::cout << "Animal Sound." << std::endl;

	return ;
}
