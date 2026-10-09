#pragma once
#include <iostream>
#include <stdint.h>
#include "Data_s.hpp"



class	Serializer
{
	public:
		virtual void		abstract() = 0;

		static	uintptr_t	serialize( Data_s* ptr );
		static	Data_s*		deserialize( uintptr_t raw );

	private:
		Serializer( void );
		Serializer( const Serializer& source );
		~Serializer( void );

		void	operator=( const Serializer& other );
};
