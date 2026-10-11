#pragma once

#include <iostream>
#include <limits>



class	Span
{
	public :

		Span( void );
		Span( Span &source );
		Span( unsigned int n );
		~Span( void );

		Span&	operator=( Span& other );


		class	AllocationFail : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class	SpanInsufficiencyException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		void			addNumber( int n );
		//void			addNumberRange( int n );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		void			printArray( void );


	private :

		unsigned int	_size;
		unsigned int	_filled;
		int*			_array;
};
