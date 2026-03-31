#include <iostream>
#include <string>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



RobotomyRequestForm::RobotomyRequestForm( void )
:	AForm( "Wall-E", 45, 72 )
{
	std::cout << "RobotomyRequestForm Default Construtor called." << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string name )
:	AForm( name, 45, 72 )
{
	std::cout << "RobotomyRequestForm Complete Construtor called." << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const AForm& source )
:	AForm( source.getName, 45, 72 )
{
	std::cout << "RobotomyRequestForm Copy Construtor called." << std::endl;
	setSign( source.getSign() );

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm Destructor called." << std::endl;

	return ;
}


void	RobotomyRequestForm::operator=( const AForm& other )
{
	if (this == &other)
		return;
	setSign( other.getSign() );

	return ;
}


void	RobotomyRequestForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( getSign() && b.getGrade() > getXGrade() )
			throw ( AForm::GradeTooLowException() );
		else
		{
			time_t timestamp;

			time( &timestamp );
			std::cout << "DZZZZZ..." << std::endl;
			if ( ctime( &timestamp ) % 2 )
				std::cout << getName() << "has successfully been robotomized. x)" << std::endl;
			else	
				std::cout << getName() << "resisted robotomization. x(" << std::endl;
		}
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return;
}


std::ostream&	operator<<( std::ostream& outstream, const AForm &target )
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
