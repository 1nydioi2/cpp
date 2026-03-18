#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"



Form::Form( void )
:	_name( "Blank" ),
	_sign( false ),
	_xgrade( 150 ),
	_sgrade( 150 )
{
	std::cout << "Form Default Construtor called." << std::endl;

	return ;
}

Form::Form( std::string name, int gradex, int grades )
:	_name( name ),
	_sign( false ),
	_xgrade( gradex ),
	_sgrade( grades )
{
	std::cout << "Form Complete Construtor called." << std::endl;
	try
	{
		if ( gradex > 150 || grades > 150 )
			throw ( Form::GradeTooLowException() );
		else if ( gradex < 1 || grades < 1 )
			throw ( Form::GradeTooHighException() );
	}
	catch ( std::exception & e )
	{
		std::cout << _name << e.what() << std::endl;
	}

	return ;
}

Form::Form( const Form& source )
:	_name( source._name ),
	_sign( source._sign ),
	_xgrade( source._xgrade ),
	_sgrade( source._sgrade )
{
	std::cout << "Form Copy Construtor called." << std::endl;

	return ;
}

Form::~Form( void )
{
	std::cout << "Form Destructor called." << std::endl;

	return ;
}


void	Form::operator=( const Form& other )
{
	if (this == &other)
		return;
	this->_sign = other._sign;

	return ;
}


const char	*Form::GradeTooLowException::what( void ) const throw()
{
	return ( "'s grade is too low." );
}


const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high." );
}


std::string	Form::getName( void ) const
{
	return ( this->_name );
}

bool	Form::getSign( void ) const
{
	return ( this->_sign );
}

int	Form::getXGrade( void ) const
{
	return ( this->_xgrade );
}

int	Form::getSGrade( void ) const
{
	return ( this->_sgrade );
}


bool	Form::beSigned( const Bureaucrat &b )
{
	try
	{
		if ( b.getGrade() > _sgrade )
			throw ( Form::GradeTooLowException() );
		_sign = true;
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return ( _sign );
}


std::ostream&	operator<<( std::ostream& outstream, const Form &target )
{
	outstream << "Form ";
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
