#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name );
		ShrubberyCreationForm( const AForm& source );
		~ShrubberyCreationForm( void );
	
		bool		execute( Bureaucrat const & executor ) const;
};

std::ostream&	operator<<( std::ostream& out, const ShrubberyCreationForm& other );
