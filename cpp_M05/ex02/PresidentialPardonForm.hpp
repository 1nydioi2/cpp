#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	PresidentialPardonForm
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string name );
		PresidentialPardonForm( const AForm& source );
		~PresidentialPardonForm( void );

		void			operator=( const AForm& other );
		
		void		execute( Bureaucrat const & executor );
};

std::ostream&	operator<<( std::ostream& out, const AForm& other );
