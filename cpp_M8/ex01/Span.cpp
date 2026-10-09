#include <iostream>



		Span::Span( void )
		{
			return ;
		}
		
		Span::Span( Span &source )
		{
			*this = source;
			return;
		}

		Span::Span( unsigned int n )
		{
			return;
		}

		Span::~Span( void )
		{	
			return;
		}


		Span::Span&	operator=( Span& other )
		{
			if ( &other == this )
				return ( this );
			
			return ( this );
		}	


		const char*	Span::SpanUnsufficiencyException::what() const throw()
		{
			return ( "Error : unsufficient span capacity to perform action" );
		}


		void	Span::addNumber( int n )
		{
			return;
		}
		
		int	Span::shortestSpan( void )
		{
			return;
		}
		
		int	Span::longestSpan( void )
		{
			return;
		}
};
