#pragma once
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"


class	WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );	
		WrongCat( const WrongCat& source );	
		~WrongCat( void );

		void	operator=( const WrongCat& other );

		void	makeSound( void ) const;
};
