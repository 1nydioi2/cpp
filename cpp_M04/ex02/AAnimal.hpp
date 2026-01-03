#pragma once
#include <iostream>
#include <string>



class	AAnimal
{
	public:
		AAnimal( void );	
		AAnimal( const AAnimal& source );	
		virtual ~AAnimal( void );

		void	operator=( const AAnimal& other );

		std::string	getType( void ) const;

		virtual	void	makeSound( void ) const = 0;


	protected:
		std::string type;
};
