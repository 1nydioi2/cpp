#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class	Form
{
	public:
		Form( void );
		Form( std::string name, int xgrade, int sgrade );
		Form( const Form& source );
		~Form( void );

		void			operator=( const Form& other );

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
		int			getXGrade( void ) const;
		int			getSGrade( void ) const;
		bool		getSign( void ) const;

		void		beSigned( const Bureaucrat &b );


	private:
		const std::string	_name;
		bool				_sign;
		const int 			_xgrade;
		const int 			_sgrade;
};

std::ostream&	operator<<( std::ostream& out, const Form& other );
