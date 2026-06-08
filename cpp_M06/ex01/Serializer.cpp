#include <iostream>
#include "Serializer.hpp"
#include "Data_s.hpp"



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
