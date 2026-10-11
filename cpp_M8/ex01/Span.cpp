#include "Span.hpp"



Span::Span( void )
:	_size( 0 ),
	_filled( 0 ),
	_array( NULL)
{
	return ;
}

Span::Span( Span &source )
{
	*this = source;

	return;
}

Span::Span( unsigned int n )
:	_size( n ),
	_filled( 0 ),
	_array( NULL)
{
	_array = new int[_size];
	if ( _array == NULL )
	{
		throw ( AllocationFail() );
		return;
	}

	return;
}

Span::~Span( void )
{
	if ( _array != NULL )
		delete[] _array ;

	return;
}


Span&	Span::operator=( Span& source )	
{
	if ( &source == this )
		return ( *this );

	_size = source._size;
	_filled = source._filled;

	_array = new int[_size];
	if ( _array == NULL )
	{
		throw ( AllocationFail() );
		return ( *this );
	}
	
	for ( unsigned int i = 0; i < _filled; i++ )
		_array[i] = source._array[i];
			
	return ( *this );
}	


const char*	Span::SpanInsufficiencyException::what() const throw()
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

void	Span::addNumberRange( unsigned int b, unsigned int e, int* source )
{
	if ( _filled + e > _size )
	{
		throw ( SpanInsufficiencyException() );
		return;
	}

	unsigned int i = b;
	unsigned int j = 0;

	while ( i <= e )
		_array[i++] = source[j++];

	_filled += e;

	return;
}


unsigned int	Span::shortestSpan( void )
{
	if ( _filled < 2 )
	{
		throw ( SpanInsufficiencyException() );
		return ( 0 );
	}

	unsigned int	span = std::numeric_limits<unsigned int>::max();
	unsigned int	span_tmp = 0;
	for ( unsigned int i = 0; i < _filled - 1; i++ )
	{
		for ( unsigned int j = (i + 1); j < _filled; j++ )
		{
			int	bigy = 0;
			int	smol = 0;
			if ( _array[i] > _array[j] )
			{
				bigy = _array[i];
				smol = _array[j];
			}
			else
			{
				bigy = _array[j];
				smol = _array[i];
			}

			if ( bigy <= 0 && smol <= 0 )
				span_tmp = 0 - ( bigy + smol );
			else if ( bigy >= 0 && smol >= 0 )
				span_tmp = bigy - smol;
			else
				span_tmp = 0 - ( smol - bigy );

			if ( span > span_tmp )
				span = span_tmp;
		}
	}

	return ( span );
}

unsigned int	Span::longestSpan( void )
{
	if ( _filled < 2 )
	{
		throw ( SpanInsufficiencyException() );
		return ( 0 );
	}

	unsigned int	span = 0;
	unsigned int	span_tmp = 0;
	int				bigy = 0;
	int				smol = 0;
	for ( unsigned int i = 0; i < _filled - 1; i++ )
	{
		for ( unsigned int j = (i + 1); j < _filled; j++ )
		{
			if ( _array[i] > _array[j] )
			{
				bigy = _array[i];
				smol = _array[j];
			}
			else
			{
				bigy = _array[j];
				smol = _array[i];
			}

			if ( bigy <= 0 && smol <= 0 )
				span_tmp = 0 - ( bigy + smol );
			else if ( bigy >= 0 && smol >= 0 )
				span_tmp = bigy - smol;
			else
				span_tmp = 0 - ( smol - bigy );
			
			if ( span < span_tmp )
				span = span_tmp;
		}
	}

	return ( span );
}

void	Span::printArray( void )
{
	for ( unsigned int i = 0; i < _filled; i++ )
		std::cout << _array[i] << std::endl;

	return;
}
