#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



PresidentialPardonForm::PresidentialPardonForm( void )
:	_name( "Francois Besse" ),
	_sign( false ),
	_xgrade( 5 ),
	_sgrade( 25 )
{
	std::cout << "PresidentialPardonForm Default Construtor called." << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name )
:	_name( name ),
	_sign( false ),
	_xgrade( 5 ),
	_sgrade( 25 )
{
	std::cout << "PresidentialPardonForm Complete Construtor called." << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& source )
:	_name( source._name ),
	_sign( source._sign ),
	_xgrade( 5 ),
	_sgrade( 25 )
{
	std::cout << "PresidentialPardonForm Copy Construtor called." << std::endl;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm Destructor called." << std::endl;

	return ;
}


void	PresidentialPardonForm::operator=( const PresidentialPardonForm& other )
{
	if (this == &other)
		return;
	this->_sign = other._sign;

	return ;
}


const char	*PresidentialPardonForm::GradeTooLowException::what( void ) const throw()
{
	return ( "'s grade is too low." );
}


const char	*PresidentialPardonForm::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high." );
}


std::string	PresidentialPardonForm::getName( void ) const
{
	return ( this->_name );
}

bool	PresidentialPardonForm::getSign( void ) const
{
	return ( this->_sign );
}

int	PresidentialPardonForm::getXGrade( void ) const
{
	return ( this->_xgrade );
}

int	PresidentialPardonForm::getSGrade( void ) const
{
	return ( this->_sgrade );
}


void	PresidentialPardonForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( _sign && b.getGrade() > _xgrade )
			throw ( AForm::GradeTooLowException() );
		else
			std::cout << _name << "Has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return;
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
