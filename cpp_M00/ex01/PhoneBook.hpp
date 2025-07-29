#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public	:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact(char index);
		bool	search_contact_list();

	private	:
		Contact	contact_list[8];
		char	tracker;
		char	c_num;
};


#endif
