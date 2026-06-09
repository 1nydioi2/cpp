#pragma once
#include <iostream>
#include <string>



class	ScalarConverter
{
	public:
		static void	convert( std::string literal );
	

	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& source );
		~ScalarConverter( void );

		void	operator=( const ScalarConverter& other );
};
