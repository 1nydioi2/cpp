#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



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


void	PresidentialPardonForm::operator=( const AForm& other )
{
	if (this == &other)
		return;
	setSign( other.getSign() );

	return ;
}


void	PresidentialPardonForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( getSign && b.getGrade() > getXGrade() )
			throw ( AForm::GradeTooLowException() );
		else
			std::cout << getName() << "Has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return;
}


std::ostream&	operator<<( std::ostream& outstream, const AForm &target )
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
