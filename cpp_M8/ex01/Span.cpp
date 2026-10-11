#include <iostream>



		Span::Span( void )
		:	_size( 0 ),
			_filled( 0 );
			_array( NULL),
		{
			return ;
		}
		
		Span::Span( Span &source )
		{
			*this = source;

			return;
		}

		Span::Span( unsigned int n )
		:	_size( 0 ),
			_filled( 0 );
			_array( NULL),
		{
			_array = new int[_size];
			if ( _array == NULL )
			{
				throw ( AllocationFail() );
				return ( NULL );
			}


			return;
		}

		Span::~Span( void )
		{
			if ( _array != NULL )
				delete[] _array ;

			return;
		}


		Span::Span&	operator=( Span& source )	
		{
			if ( &other == this )
				return ( this );
		
			_size = source._size;
			_filled = source._filled;

			_array = new int[_size];
			if ( _array == NULL )
			{
				throw ( AllocationFail() );
				return ( NULL );
			}
			
			for ( unsigned int i = 0; i < _filled; i++ )
				_array[i] = source._array[i];
					
			return ( this );
		}	


		const char*	Span::SpanUnsufficiencyException::what() const throw()
		{
			return ( "Error : unsufficient span capacity to perform action" );
		}
		
		const char*	Span::AllocationFail::what() const throw()
		{
			return ( "Error : allocation of one or more elements failed" );
		}


		void	Span::addNumber( int n )
		{
			if ( _filled + 1 > _size )
			{
				throw ( SpanInsufficiencyException() );
				return;
			}
			
			_array[_filled++] = n;

			return;
		}

		/*void	Span::addNumberRange( int n )
		{
			return;
		}*/

		
		unsigned int	Span::shortestSpan( void )
		{
			if ( _filled < 2 )
			{
				throw ( SpanInsufficiencyException() );
				return ( 0 );
			}

			unsigned int	span = UINT_MAX;
			unsigned int	span_tmp = 0;
			for ( int i = 0; i < _filled - 1; i++ )
			{
				if ( _array[i] <= 0 && _array[i + 1] <= 0 )
					span_tmp = 0 - ( _array[i] - _array[i + 1] );
				else if ( _array[i] >= 0 && _array[i + 1] >= 0 )
					span_tmp = _array[i] + _array[i + 1];
				else if ( _array[i] <= 0 )
					span_tmp = _array[i + 1] - _array[i];
				else
					span_tmp = _array[i] - _array[i + 1];
				if ( span > span_tmp )
					span = span_tmp;
			}

			return ( span );
		}
		
		int	Span::longestSpan( void )
		{
			if ( _filled < 2 )
			{
				throw ( SpanInsufficiencyException() );
				return ( 0 );
			}

			unsigned int	span = 0;
			unsigned int	span_tmp = 0;
			for ( int i = 0; i < _filled - 1; i++ )
			{
				if ( _array[i] <= 0 && _array[i + 1] <= 0 )
					span_tmp = 0 - ( _array[i] - _array[i + 1] );
				else if ( _array[i] >= 0 && _array[i + 1] >= 0 )
					span_tmp = _array[i] + _array[i + 1];
				else if ( _array[i] <= 0 )
					span_tmp = _array[i + 1] - _array[i];
				else
					span_tmp = _array[i] - _array[i + 1];
				if ( span < span_tmp )
					span = span_tmp;
			}

			return ( span );
		}
};
