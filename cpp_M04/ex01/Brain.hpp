#pragma once
#include <string>


class	Brain
{
	public:
		Brain( void );	
		Brain( const Brain& source );	
		~Brain( void );

		void	operator=( const Brain& other );

		std::string	ideas[100];
};
