template < typename T >
class	Array
{
	public :

		Array( void );
		Array( Array source );
		Array( unsigned int n );

		~Array( void );

		operator=( Array other );
		operator[]( unsigned int index );

		class	OutOfBoundsException : std::exception
		{};


	private :

		T	head;
		T	number;
		T	next;

};
