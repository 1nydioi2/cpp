#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm( void )
:	AForm( "Groot", 137, 145 )
{
	std::cout << "ShrubberyCreationForm Default Construtor called." << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name )
:	AForm( name, 137, 145 )
{
	std::cout << "ShrubberyCreationForm Complete Construtor called." << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const AForm& source )
:	AForm( source.getName(), 137, 145 )
{
	std::cout << "ShrubberyCreationForm Copy Construtor called." << std::endl;
	setSign( source.getSign() );

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;

	return ;
}


void	ShrubberyCreationForm::operator=( const AForm& other )
{
	if (this == &other)
		return;
	setSign( other.getSign() );

	return ;
}


void	ShrubberyCreationForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( getSign() && b.getGrade() > getXGrade() )
			throw ( AForm::GradeTooLowException() );
		else
		{
			std::string	filename = getName() + "_shrubbery";
			ofstream target( filename );
			
			target << "					\
			  ..............              \n\
          ......................          \n\
        .......@@@@@@@@@@.........        \n\
      ........@@@@@@@++@@@@@@@@.....      \n\
    ...@@@@@@@@@@@+@@@@+@@@@+@@@@.....    \n\
   ....@@++@@@@@@@@@@@@@@@@@@@@@@......   \n\
  .....@@@@@@@@+@@@@@@@@+@@@@@@@@@@@....  \n\
 .....@@@++@@@@@@@@@@@@@@@@@@@++@@@@..... \n\
 ...+@@@@@@@@@@@@@..@@@@.@@@@@@@@@@@@@... \n\
...@@@@@@+@@@@@@@@@@@@@@...@@@@@@@@@@@@...\n\
...@@@@@@@@@@@@..@@@@@@@.@@@@@@@@++@@@@...\n\
....@@+@@@@@@@@@@@@@@@@@@@@@@@@+@@@@@@....\n\
...@@@@@@@@@....@@@@@@@@@@...@@@@@@@@@@...\n\
...@@@@++@@@@@@@..@@@@@@@@@@@@@..@@@@@@...\n\
 ..@@@@@@@@...@@@@@@@@@@@@............... \n\
 ....@@@@.......@@@@@@@@@................ \n\
  ...............@@@@@@@@...............  \n\
   ..............@@@@@@@@..............   \n\
    .............@@@@@@@@.............    \n\
      ......@@@@@@@@@@@@@@@@........      \n\
        ........@@@@@@@@@@@@@@....        \n\
          .........@@@..@@......          \n\
              ..............              ";
			target.close();
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
	outstream << "ShrubberyCreationForm ";
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
