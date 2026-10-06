template < typename T >
class	Array
{
	public :

		Array( void )
		{
			_number = 0;
			_value = 0;
			_next = NULL;

			return ;
		}

		Array( Array source )
		{
			_number = source.
		}

		Array( unsigned int n );

		~Array( void );

		operator=( Array other );
		operator[]( unsigned int index );

		unsigned int size( void ) const
		{
			return ( _number );
		}
		

		class	OutOfBoundsException : std::exception
		{};


	private :

		T		_value;
		Array		*_next;

};
