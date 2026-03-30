#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"



class	Bureaucrat;

class	AForm
{
	public:
		AForm( void );
		AForm( std::string name, int xgrade, int sgrade );
		AForm( const AForm& source );
		~AForm( void );

		void			operator=( const AForm& other );

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
		
		std::string		getName( void ) const;
		int				getXGrade( void ) const;
		int				getSGrade( void ) const;
		bool			getSign( void ) const;

		bool			beSigned( const Bureaucrat &b );
		virtual void	execute( Bureaucrat const & executor ) = 0;


	private:
		const std::string	_name;
		bool				_sign;
		const int 			_xgrade;
		const int 			_sgrade;
};

std::ostream&	operator<<( std::ostream& out, const AForm& other );
