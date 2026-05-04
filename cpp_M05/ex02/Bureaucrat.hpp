#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"


class	AForm;

class	Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& source );
		~Bureaucrat( void );

		void			operator=( const Bureaucrat& other );

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
		
		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		raiseGrade( int x );
		void		lowerGrade( int x );

		void	executeForm( AForm const & form ) const;
		void	signForm( AForm &f );
		

	private:
		const std::string	_name;
		int 				_grade;
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& other );
