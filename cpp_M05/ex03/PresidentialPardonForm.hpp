#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string name );
		PresidentialPardonForm( const AForm& source );
		~PresidentialPardonForm( void );

		bool		execute( Bureaucrat const & executor ) const;
};

std::ostream&	operator<<( std::ostream& out, const PresidentialPardonForm& other );
