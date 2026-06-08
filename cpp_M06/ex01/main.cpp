#include <iostream>
#include "Serializer.hpp"
#include "Data_s.hpp"



int main()
{
	Data_s 		a;
	uintptr_t	adr;
	Data_s		*a_ptr;
	
	a.value = 42;
	adr = Serializer::serialize( &a );
	a_ptr = Serializer::deserialize( adr );

	std::cout << "adr = " << adr << "\ta_ptr = " << a_ptr << std::endl;
	std::cout << "\na.value = " << a.value << "\ta_ptr.value = " << a_ptr->value << std::endl;

	return ( 0 );
}
