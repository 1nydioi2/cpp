#include <iostream>
#include "Serializer.hpp"
#include "Data_s.hpp"



Serializer::Serializer( void )
{
	std::cout << "Serializer Default Construtor called." << std::endl;

	return ;
}

Serializer::Serializer( const Serializer& source )
{
	std::cout << "Serializer Copy Construtor called." << std::endl;
	*this = source;

	return ;
}

Serializer::~Serializer( void )
{
	std::cout << "Serializer Destructor called." << std::endl;

	return ;
}


void	Serializer::operator=( const Serializer& other )
{
	std::cout << "Serializer assignment operator called." << std::endl;
	(void) other;

	return ;
}


uintptr_t	Serializer::serialize( Data_s* ptr )
{
	uintptr_t res = reinterpret_cast< uintptr_t >( ptr );

	return ( res );
}

Data_s*		Serializer::deserialize( uintptr_t raw )
{
	Data_s *res = reinterpret_cast< Data_s* >( raw );

	return ( res );
}
