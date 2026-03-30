#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



AForm::AForm( void )
:	_name( "Blank" ),
	_sign( false ),
	_xgrade( 150 ),
	_sgrade( 150 )
{
	std::cout << "AForm Default Construtor called." << std::endl;

	return ;
}

AForm::AForm( std::string name, int gradex, int grades )
:	_name( name ),
	_sign( false ),
	_xgrade( gradex ),
	_sgrade( grades )
{
	std::cout << "AForm Complete Construtor called." << std::endl;
	try
	{
		if ( gradex > 150 || grades > 150 )
			throw ( AForm::GradeTooLowException() );
		else if ( gradex < 1 || grades < 1 )
			throw ( AForm::GradeTooHighException() );
	}
	catch ( std::exception & e )
	{
		std::cout << _name << e.what() << std::endl;
	}

	return ;
}

AForm::AForm( const AForm& source )
:	_name( source._name ),
	_sign( source._sign ),
	_xgrade( source._xgrade ),
	_sgrade( source._sgrade )
{
	std::cout << "AForm Copy Construtor called." << std::endl;

	return ;
}

AForm::~AForm( void )
{
	std::cout << "AForm Destructor called." << std::endl;

	return ;
}


void	AForm::operator=( const AForm& other )
{
	if (this == &other)
		return;
	this->_sign = other._sign;

	return ;
}


const char	*AForm::GradeTooLowException::what( void ) const throw()
{
	return ( "'s grade is too low." );
}


const char	*AForm::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high." );
}


std::string	AForm::getName( void ) const
{
	return ( this->_name );
}

bool	AForm::getSign( void ) const
{
	return ( this->_sign );
}

int	AForm::getXGrade( void ) const
{
	return ( this->_xgrade );
}

int	AForm::getSGrade( void ) const
{
	return ( this->_sgrade );
}


bool	AForm::beSigned( const Bureaucrat &b )
{
	try
	{
		if ( b.getGrade() > _sgrade )
			throw ( AForm::GradeTooLowException() );
		_sign = true;
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return ( _sign );
}


std::ostream&	operator<<( std::ostream& outstream, const AForm &target )
{
	outstream << "AForm ";
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
