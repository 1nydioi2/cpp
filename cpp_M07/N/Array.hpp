#include <iostream>



template < typename T >
class	Array
{
	public :

		Array( void );
		Array( Array &source );
		Array( unsigned int n );

		~Array( void );

		//operator=( Array other );
		//operator[]( unsigned int index );

		unsigned int 	size( void ) const;
		T		getVal( void ) const;
		Array*		getNext( void ) const;
		Array*		getPrev( void ) const;

		//class	OutOfBoundsException : std::exception


	private :

		T		_value;
		unsigned int	_size;
		Array*		_prev;
		Array*		_next;


//	protected :

		void	setVal( T value );
		void	setSize( unsigned int size );
		void	setNext( Array*	ptr );
		void	setPrev( Array*	ptr );
};
