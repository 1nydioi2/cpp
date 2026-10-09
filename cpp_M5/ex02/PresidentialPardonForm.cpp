#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm( void )
:	AForm( "Francois Besse", 5, 25 )
{
	std::cout << "PresidentialPardonForm Default Construtor called." << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name )
:	AForm( name, 5, 25 )
{
	std::cout << "PresidentialPardonForm Complete Construtor called." << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const AForm& source )
:	AForm( source.getName(), 5, 25 )
{
	std::cout << "PresidentialPardonForm Copy Construtor called." << std::endl;
	setSign( source.getSign() );

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;

	return ;
}


bool	PresidentialPardonForm::execute( Bureaucrat const & b ) const
{
	bool ret = 0;

	try
	{
		if ( b.getGrade() > getXGrade() )
			throw ( GradeTooLowException() );
		else if ( getSign() )
		{
			std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
			ret = 1;
		}
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return ( ret );
}


std::ostream&	operator<<( std::ostream& outstream, const PresidentialPardonForm &target )
{
	outstream << "PresidentialPardonForm ";
	outstream << target.getName();
	if ( target.getSign() )
		outstream << ", signed";
	else
		outstream << ", unsigned";
	outstream << ", grade required for execution : ";
	outstream << target.getXGrade();
	outstream << ", grade required for signing : ";
	outstream << target.getSGrade();
	outstream << ".";

	return ( outstream );
}
