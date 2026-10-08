#include <iostream>



template < typename T >
class	Array
{
	public :

		T		_value;
		
		Array( void )
		{
			_size = 0;
			_value = 0;
			_next = NULL;
			_prev = NULL;

			return ;
		}

		Array( Array &source )
		{
			unsigned int	n = source.size();
			_size = n;
			_value = source.getVal();
			_prev = source.getPrev();

			Array*	ptr = this;
			Array*	ptr_s = &source;
			while ( --n )
			{
				ptr->_next = new Array;
				ptr->_next->_prev = ptr;
				ptr = ptr->getNext();
				ptr_s = ptr_s->getNext();
				ptr->_value = ptr_s->getVal();
				ptr->_size = n;
			}
			ptr->_next = ptr_s->getPrev();

			return;
		}

		Array( unsigned int n )
		{
			_size = n;
			_value = 0;
			_prev = NULL;
			Array*	ptr = this;
			while ( --n )
			{
				ptr->_next = new Array;
				ptr->_next->_prev = ptr;
				ptr = ptr->getNext();
				ptr->_value = 0;
				ptr->_size = n;
			}
			ptr->_next = NULL;

			return;
		}

		~Array( void )
		{
			
			if ( _next != NULL )
				delete _next;
			
			return;
		}

		//operator=( Array other );
		T&	operator[]( unsigned int index )
		{
			Array*	iter = this;
			for ( unsigned int i = 0; i < index; i++)
				iter = iter->_next;

			return ( iter->_value );
		}

		unsigned int size( void ) const
		{
			return ( _size );
		}

		T	getVal( void ) const
		{
			return ( _size );
		}
		
		Array*	getNext( void )
		{
			return ( _next );
		}
		
		Array*	getPrev( void )
		{
			return ( _prev );
		}
		

		//class	OutOfBoundsException : std::exception


	private :

		unsigned int	_size;
		Array*		_prev;
		Array*		_next;


//	protected :
/*
		void	setVal( T value )
		{
			this->_value = value;

			return;
		}

		void	setSize( unsigned int size )
		{
			_size = size;

			return;
		}
		
		void	setNext( Array*	ptr )
		{
			_next = ptr;

			return;
		}
		
		void	setPrev( Array*	ptr )
		{
			_prev = ptr;

			return;
		}*/
};
