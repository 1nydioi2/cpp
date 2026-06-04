#pragma once
#include <iostream>
#include <string>



class	ScalarConverter
{
	public:
		virtual void	abstract() = 0;
		static	void	convert( std::string literal );
};
