#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public	:
		PhoneBook();
		~PhoneBook();

		void	add_contact(Contact contact);
		void	show_contact(char index);

	private	:
		Contact	contact_list;
		char	current_size;

};


#endif
