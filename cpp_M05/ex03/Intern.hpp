#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"


class	AForm;

class	Intern
{
	public:
		Intern( void );
		~Intern( void );

		AForm	*makeForm( std::string form, std::string target );
};
