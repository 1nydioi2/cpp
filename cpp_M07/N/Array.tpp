#include "Array.hpp"

Array::Array( void )
{
	_size = 0;
	_value = 0;
	_next = NULL;
	_prev = NULL;

	return ;
}

Array::Array( Array &source )
{
	int n = source.size();
	_size = n;
	_value = source.getVal();
	_prev = source.getPrev();

	Array*	ptr = this;
	Array*	ptr_s = source;
	while ( --n )
	{
		ptr->setNext( new Array );
		ptr->next.setPrev( ptr );
		*ptr = ptr->getNext();
		*ptr_s = ptr_s->getNext();
		ptr->setVal( ptr_s->getVal() );
		ptr->setSize( n );
	}
	ptr->setNext( ptr_s->getPrev() );

	return;
}

Array::Array( unsigned int n )
{
	_size = n;
	_value = 0;
	_prev = NULL;

	Array*	ptr = this;
	while ( --n )
	{
		ptr->setNext( new Array );
		ptr->next.setPrev( ptr );
		*ptr = ptr->getNext();
		ptr->setVal( 0 );
		ptr->setSize( n );
	}
	ptr->setNext( NULL );

	return;
}

Array::~Array( void )
{
	if ( _next != NULL )
		delete _next;

	return;
}

//operator=( Array other );
//operator[]( unsigned int index );

unsigned int Array::size( void ) const
{
	return ( _size );
}

T	Array::getVal( void ) const
{
	return ( _size );
}

Array*	Array::getNext( void ) const
{
	return ( _next );
}

Array*	Array::getPrev( void ) const
{
	return ( _prev );
}


//class	OutOfBoundsException : std::exception

void	Array::setVal( T value )
{
	this._value = value;

	return;
}

void	Array::setSize( unsigned int size )
{
	_size = size;

	return;
}

void	Array::setNext( Array*	ptr )
{
	_next = ptr;

	return;
}

void	Array::setPrev( Array*	ptr )
{
	_prev = ptr;

	return;
}
};
