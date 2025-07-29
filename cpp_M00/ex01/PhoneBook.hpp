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
		void	search_contact_list();

	private	:
		Contact	[8]contact_list;
		char	tracker;
		char	c_num;
};


#endif
