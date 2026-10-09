#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string name );
		RobotomyRequestForm( const AForm& source );
		~RobotomyRequestForm( void );

		bool		execute( Bureaucrat const & executor ) const;
};

std::ostream&	operator<<( std::ostream& out, const RobotomyRequestForm& other );
