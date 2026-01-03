#pragma once
#include <iostream>
#include <string>



class	WrongAnimal
{
	public:
		WrongAnimal( void );	
		WrongAnimal( const WrongAnimal& source );	
		~WrongAnimal( void );

		void	operator=( const WrongAnimal& other );

		std::string	getType( void ) const;

		void	makeSound( void ) const;


	protected:
		std::string type;
};
