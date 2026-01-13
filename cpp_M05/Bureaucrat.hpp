#pragma once
#include <iostream>
#include <string>



class	Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& source );
		~Bureaucrat( void );

		void	operator=( const Bureaucrat& other );
		void	operator<<( const Bureaucrat& other );

		std::string	getName( void ) const;
		int		getGrade( void ) const;
		void		raiseGrade( int x );
		void		lowerGrade( int x );


	private:
		const std::string	_name;
		int 			_grade;
};
