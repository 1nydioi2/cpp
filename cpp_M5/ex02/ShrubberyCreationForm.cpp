#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"



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


bool	ShrubberyCreationForm::execute( Bureaucrat const & b ) const
{
	bool	ret = 0;

	try
	{
		if ( b.getGrade() > getXGrade() )
			throw ( GradeTooLowException() );
		else if ( getSign() )
		{
			std::string	filename = getName() + "_shrubbery";
			std::ofstream target( filename.c_str() );
			
			target << "\
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
			ret = 1;
		}
	}
	catch ( std::exception & e )
	{
		std::cout << b.getName() << e.what() << std::endl;
	}

	return( ret );
}


std::ostream&	operator<<( std::ostream& outstream, const ShrubberyCreationForm &target )
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
