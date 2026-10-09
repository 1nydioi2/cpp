#include <iostream>
#include <string>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"



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
:	AForm( source.getName(), 45, 72 )
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


bool	RobotomyRequestForm::execute( Bureaucrat const & b ) const
{
	bool ret = 0;

	try
	{
		if ( b.getGrade() > getXGrade() )
			throw ( GradeTooLowException() );
		else if ( getSign() )
		{
			time_t timestamp = time( NULL );

			std::cout << "DZZZZZ..." << std::endl;
			if ( timestamp % 2 )
				std::cout << getName() << " has successfully been robotomized. x)" << std::endl;
			else	
				std::cout << getName() << " resisted robotomization. x(" << std::endl;
			ret = 1;
		}
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return ( ret );
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
