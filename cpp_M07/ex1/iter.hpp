template < typename T >
void	iter( T array[], const size_t size, void ( &f )( T& cell ) const )
{
	for ( size_t i = 0; i < size; i++ )
		f( &(array[i]) );

	return;
}

template < typename T >
void	iter( T& array[], const size_t size, void ( &f )( T& cell ) )
{
	for ( size_t i = 0; i < size; i++ )
		f( &(array[i]) );

	return;
}
