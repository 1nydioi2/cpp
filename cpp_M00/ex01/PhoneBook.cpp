#include "externals.hpp"
#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->tracker = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::add_contact()
{
	Contact new_contact;

	std::cout << "Please enter contact's first name (up to 64 characters) : ";
	std::cin.get(new_contact.f_name, 64) << std::endl;
	std::cout << "Please enter contact's last name (up to 64 characters) : ";
	std::cin.get(new_contact.l_name, 64) << std::endl;
	std::cout << "Please enter contact's nickname (up to 64 characters) : ";
	std::cin.get(new_contact.n_name, 64) << std::endl;
	std::cout << "Please enter contact's phone number (up to 16 digits characters) : ";
	std::cin.get(new_contact.ph_num, 16) << std::endl;
	std::cout << "Please enter contact's darkest secret (up to 512 characters) : ";
	std::cin.get(new_contact.secret, 512) << std::endl;
	std::cout << std::endl;	

	if (!new_contact.is_conform())
		return ;
	if (this->tracker == 8)
		this->tracker = 0;

	this->contact_list[tracker].copy(new_contact);
	std::cout << new_contact->f_name << " " << new_contact->l_name << "has been added to your phonebook.\n\n" << std::endl;
	return ;
}

void PhoneBook::search_contact(char index)
{

}

void PhoneBook::search_contact_list()
{

}
