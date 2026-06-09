#include <iostream>
#include "Serializer.hpp"
#include "Data_s.hpp"



int main()
{
	Data_s 		a;
	uintptr_t	adr;
	Data_s		*a_ptr;
	
	a.value = 42;
	a.name = "Zei";
	adr = Serializer::serialize( &a );
	a_ptr = Serializer::deserialize( adr );

	std::cout << "adr = " << adr << "\ta_ptr = " << a_ptr << "\t&a = " << &a << std::endl;
	std::cout << "\na.value = " << a.value << "\ta_ptr.value = " << a_ptr->value << std::endl;
	std::cout << "\na.name = " << a.name << "\ta_ptr.name = " << a_ptr->name << std::endl;

	return ( 0 );
}
