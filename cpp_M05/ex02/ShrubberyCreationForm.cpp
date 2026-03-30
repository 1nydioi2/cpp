#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm( void )
:	_name( "Groot" ),
	_sign( false ),
	_xgrade( 137 ),
	_sgrade( 145 )
{
	std::cout << "ShrubberyCreationForm Default Construtor called." << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name )
:	_name( name ),
	_sign( false ),
	_xgrade( 137 ),
	_sgrade( 145 )
{
	std::cout << "ShrubberyCreationForm Complete Construtor called." << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& source )
:	_name( source._name ),
	_sign( source._sign ),
	_xgrade( 137 ),
	_sgrade( 145 )
{
	std::cout << "ShrubberyCreationForm Copy Construtor called." << std::endl;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Destructor called." << std::endl;

	return ;
}


void	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other )
{
	if (this == &other)
		return;
	this->_sign = other._sign;

	return ;
}


const char	*ShrubberyCreationForm::GradeTooLowException::what( void ) const throw()
{
	return ( "'s grade is too low." );
}


const char	*ShrubberyCreationForm::GradeTooHighException::what( void ) const throw()
{
	return ( "'s grade is too high." );
}


std::string	ShrubberyCreationForm::getName( void ) const
{
	return ( this->_name );
}

bool	ShrubberyCreationForm::getSign( void ) const
{
	return ( this->_sign );
}

int	ShrubberyCreationForm::getXGrade( void ) const
{
	return ( this->_xgrade );
}

int	ShrubberyCreationForm::getSGrade( void ) const
{
	return ( this->_sgrade );
}


void	ShrubberyCreationForm::execute( Bureaucrat const & b )
{	
	try
	{
		if ( _sign && b.getGrade() > _xgrade )
			throw ( AForm::GradeTooLowException() );
		else
		{
			std::string	filename = _name + "_shrubbery";
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
