#include <iostream>



class	Span
{
	public :


		Span( void );
		Span( Span &source );
		Span( unsigned int n );
		~Span( void );

		Span&	operator=( Span& other );

		class	FullSpanException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
		class	UnsufficientSpanException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		void	addNumber( int n );
		int		shortestSpan( void );
		int		longestSpan( void );
};
