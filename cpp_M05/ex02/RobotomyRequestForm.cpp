#include <iostream>
#include <string>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



RobotomyRequestForm::RobotomyRequestForm( void )
:	_name( "Wall-E" ),
	_sign( false ),
	_xgrade( 45 ),
	_sgrade( 72 )
{
	std::cout << "RobotomyRequestForm Default Construtor called." << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string name )
:	_name( name ),
	_sign( false ),
	_xgrade( 45 ),
	_sgrade( 72 )
{
	std::cout << "RobotomyRequestForm Complete Construtor called." << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& source )
:	_name( source._name ),
	_sign( source._sign ),
	_xgrade( 45 ),
	_sgrade( 72 )
{
	std::cout << "RobotomyRequestForm Copy Construtor called." << std::endl;

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;

	return ;
}


void	RobotomyRequestForm::operator=( const RobotomyRequestForm& other )
{
	if (this == &other)
		return;
	this->_sign = other._sign;

	return ;
}


const char	*RobotomyRequestForm::GradeTooLowException::what( void ) const throw()
{
	return ( "'s grade is too low." );
}


const char	*RobotomyRequestForm::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high." );
}


std::string	RobotomyRequestForm::getName( void ) const
{
	return ( this->_name );
}

bool	RobotomyRequestForm::getSign( void ) const
{
	return ( this->_sign );
}

int	RobotomyRequestForm::getXGrade( void ) const
{
	return ( this->_xgrade );
}

int	RobotomyRequestForm::getSGrade( void ) const
{
	return ( this->_sgrade );
}


void	RobotomyRequestForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( _sign && b.getGrade() > _xgrade )
			throw ( AForm::GradeTooLowException() );
		else
		{
			time_t timestamp;

			time( &timestamp );
			std::cout << "DZZZZZ..." << std::endl;
			if ( ctime( &timestamp ) % 2 )
				std::cout << _name << "has successfully been robotomized. x)" << std::endl;
			else	
				std::cout << _name << "resisted robotomization. x(" << std::endl;
		}
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return;
}


std::ostream&	operator<<( std::ostream& outstream, const RobotomyRequestForm &target )
{
	outstream << "RobotomyRequestForm ";
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
