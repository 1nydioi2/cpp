#include <iostream>
#include <string>
#include "WrongCat.hpp"



WrongCat::WrongCat( void )
:	WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat Default Construtor called." << std::endl;

	return ;
}

WrongCat::WrongCat( const WrongCat& source )
:	WrongAnimal()
{
	std::cout << "WrongCat Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called." << std::endl;

	return ;
}


void	WrongCat::operator=( const WrongCat& other )
{
	this->type = other.type;

	return ;
}


void	WrongCat::makeSound( void ) const
{
	std::cout << "Myaa." << std::endl;

	return ;
}
