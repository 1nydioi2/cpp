#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name );
		ShrubberyCreationForm( const AForm& source );
		~ShrubberyCreationForm( void );

		void			operator=( const AForm& other );
	
		void		execute( Bureaucrat const & executor );
};


