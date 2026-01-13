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
	try
	{
		if ( grade < 1 )
			throw ( Bureaucrat::GradeTooHighException );
		else if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException );
		_grade = grade;
		std::cout << "Bureaucrat Complete Construtor called." << std::endl;
	}
	catch
	{
		
	}

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


std::string	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int	Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void	raiseGrade( int x )
{

}

void	lowerGrade( int x )
{

}
