#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"



class	Cat : public Animal
{
	public:
		Cat( void );	
		Cat( const Cat& source );	
		~Cat( void );

		void	operator=( const Cat& other );

		void		makeSound( void ) const;
		std::string	getIdea( unsigned int nb ) const;
	private:
		Brain	*_brain;
};
