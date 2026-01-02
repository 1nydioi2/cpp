#pragma once
#include <iostream>
#include <string>



class	Animal
{
	public:
		Animal( void );	
		Animal( const Animal& source );	
		virtual ~Animal( void );

		void	operator=( const Animal& other );

		std::string	getType( void ) const;

		virtual	void	makeSound( void ) const;


	protected:
		std::string type;
};
