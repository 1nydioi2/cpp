#include <iostream>



template < typename T >
class	Array
{
	public :

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
				ptr->setNext( new Array );
				ptr->_next->setPrev( ptr );
				ptr = ptr->getNext();
				ptr_s = ptr_s->getNext();
				ptr->setVal( ptr_s->getVal() );
				ptr->setSize( n );
			}
			ptr->setNext( ptr_s->getPrev() );

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
				ptr->setNext( new Array );
				ptr->_next->setPrev( ptr );
				ptr = ptr->getNext();
				ptr->setVal( 0 );
				ptr->setSize( n );
			}
			ptr->setNext( NULL );

			return;
		}

		~Array( void )
		{
			if ( _next != NULL )
				delete _next;

			return;
		}

		//operator=( Array other );
		//operator[]( unsigned int index );

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

		T		_value;
		unsigned int	_size;
		Array*		_prev;
		Array*		_next;


//	protected :

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
		}
};
