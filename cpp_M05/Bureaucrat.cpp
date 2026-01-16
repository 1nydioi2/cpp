#include <iostream>
#include <string>
#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat( void )
:	_name( "Nobody" ),
	_grade( 150 )
{
	std::cout << "Bureaucrat Default Construtor called." << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade )
:	_name( name )
{
	std::cout << "Bureaucrat Complete Construtor called." << std::endl;
	try
	{
		if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException );
		else if ( grade < 1 )
			throw ( Bureaucrat::GradeTooHighException );
		_grade = grade;
	}
	catch ( std::exception & e )
		std::cout << _name << e.what() << std::endl;

	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& source )
{
	std::cout << "Bureaucrat Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat Destructor called." << std::endl;

	return ;
}


void	Bureaucrat::operator=( const Bureaucrat& other )
{
	this->type = other.type;

	return ;
}

std::ostream&	operator<<( std::ostream& outstream, const Bureaucrat &target )
{
	outstream << target.getName();
	outstream << ", bureaucrat grade ";
	outstream << target.getGrade();
	outstream << ".";

	return ( outstream );
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw( void )
{
	return ("'s grade is too low. ( 150 -> 1 )");
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw( void )
{
	return ("'s grade is too high. ( 150 -> 1 )");
}


std::string	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int	Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void	Bureaucrat::raiseGrade( int x )
{
	try
	{
		if ( _grade - x < 1 )
			throw ( Bureaucrat::GradeTooHighException );
		_grade -= x;
	}
	catch ( std::exception & e )
		std::cout << _name << e.what() << std::endl;

	return ;
}

void	lowerGrade( int x )
{
	try
	{
		if ( _grade + x > 150 )
			throw ( Bureaucrat::GradeTooLowException );
		_grade += x;
	}
	catch ( std::exception & e )
		std::cout << _name << e.what() << std::endl;

	return ;
}
