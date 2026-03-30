#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"



class	ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name );
		ShrubberyCreationForm( const ShrubberyCreationForm& source );
		~ShrubberyCreationForm( void );

		void			operator=( const ShrubberyCreationForm& other );
/*
		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what( void ) const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what( void ) const throw();
		};
*/		
		void		execute( Bureaucrat const & executor );

	private:
		const std::string	_name;
		bool				_sign;
		const int 			_xgrade;
		const int 			_sgrade;
};

std::ostream&	operator<<( std::ostream& out, const ShrubberyCreationForm& other );
