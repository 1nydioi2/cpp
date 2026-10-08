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
			_value = source._value;
			_prev = source._prev;

			Array*	ptr = this;
			Array*	ptr_s = &source;
			while ( --n )
			{
				ptr->_next = new Array;
				ptr->_next->_prev = ptr;
				ptr = ptr->_next;
				ptr_s = ptr_s->_next;
				ptr->_value = ptr_s->_value;
				ptr->_size = n;
			}
			ptr->_next = ptr_s->_next;

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
				ptr = ptr->_next;
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


		Array&	operator=( Array& other )
		{
			if ( &other == this )
				return ( this );
			
			int	s = ( other._size <= INT_MAX) ? static_cast<int>(other._size) : static_cast<int>(other._size - INT_MIN) + INT_MIN;
			Array*	ptr_s = &other;
			
			int	n = _size;
			Array*	ptr = this;

			while ( --s > 0 || --n > 0 )
			{
				if ( s <= 0 )
				{
					ptr = ptr->_next;
					delete ptr->_prev;
					continue;
				}
				if ( n <= 0 )
				{
					ptr->_next = new Array;
					ptr->_next->_prev = ptr;
				}
				ptr = ptr->_next;
				ptr_s = ptr_s->_next;
				ptr->_value = ptr_s->_value;
				ptr->_size = n;
			}
			
			return ( this );
		}

		T&	operator[]( unsigned int index )
		{
			if ( index >= _size )
				throw ( OutOfBoundsIndexException() );
			
			Array*	iter = this;
			for ( unsigned int i = 0; i < index; i++)
				iter = iter->_next;

			return ( iter->_value );
		}


		class	OutOfBoundsIndexException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ( "Error : index is out of bounds" );
				}
		};


		unsigned int size( void ) const
		{
			return ( _size );
		}

	private :

		unsigned int	_size;
		Array*		_prev;
		Array*		_next;
};
