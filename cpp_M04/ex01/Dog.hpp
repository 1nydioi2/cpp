#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog( void );	
		Dog( const Dog& source );	
		~Dog( void );

		void	operator=( const Dog& other );

		void		makeSound( void ) const;
		std::string	getIdea( unsigned int nb ) const;
	private:
		Brain	*_brain;
};
