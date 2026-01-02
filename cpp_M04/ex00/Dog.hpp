#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"


class	Dog : public Animal
{
	public:
		Dog( void );	
		Dog( const Dog& source );	
		~Dog( void );

		void	operator=( const Dog& other );

		void	makeSound( void ) const;
};
