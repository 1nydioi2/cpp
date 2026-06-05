#pragma once
#include <iostream>
#include <string>
#include <stdin>



class	Serializer
{
	public:
		virtual void		abstract() = 0;

		static	uintptr_t	serialize( Data* ptr );
		static	Data*		deserialize( uintptr_t raw );
};
