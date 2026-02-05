#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"



Form::Form( void )
:	_name( "Blank" ),
	_sign( false ),
	_gradex( 150 ),
	_grades( 150 ),
{
	std::cout << "Form Default Construtor called." << std::endl;

	return ;
}

Form::Form( std::string name, int gradex, int grades )
:	_name( name )
	_sign( false ),
{
	std::cout << "Form Complete Construtor called." << std::endl;
	try
	{
		if ( gradex > 150 || grades > 150 )
			throw ( Form::GradeTooLowException() );
		else if ( gradex < 1 || grades < 1 )
			throw ( Form::GradeTooHighException() );
		_gradex = gradex;
		_grades = grades;
	}
	catch ( std::exception & e )
	{
		std::cout << _name << e.what() << std::endl;
		_gradex = 150;
		_grades = 150;
	}

	return ;
}

Form::Form( const Form& source )
{
	std::cout << "Form Copy Construtor called." << std::endl;
	*this = source;

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
	return ( "'s grade is too low. ( 150 -> 1 )" );
}


const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high. ( 150 -> 1 )" );
}


std::string	Form::getName( void ) const
{
	return ( this->_name );
}

bool	Form::getSign( void ) const
{
	return ( this->_sign );
}

int	Form::getGradeX( void ) const
{
	return ( this->_gradex );
}

int	Form::getGradeS( void ) const
{
	return ( this->_grades );
}


bool	Form::beSigned( const Bureaucrat &b )
{
	try
	{
		if ( b.getGrade() > _grades && b.getGrade() == 0 )
			throw ( Form::GradeTooLowException() );
		_sign = true;
	}
	catch ( std::exception & e )
	{
		std::cout << _name << e.what() << std::endl;
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
	outstream << target.getGradex();
	outstream << ", grade required for signing : ";
	outstream << target.getGrades();
	outstream << ".";

	return ( outstream );
}
