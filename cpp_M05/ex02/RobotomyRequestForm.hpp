#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	RobotomyRequestForm
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string name );
		RobotomyRequestForm( const AForm& source );
		~RobotomyRequestForm( void );

		void			operator=( const AForm& other );

		void		execute( Bureaucrat const & executor );
};

std::ostream&	operator<<( std::ostream& out, const AForm& other );
