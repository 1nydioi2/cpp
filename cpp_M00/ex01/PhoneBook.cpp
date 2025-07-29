#include "externals.hpp"
#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->tracker = 0;
	this->c_num = 0;
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
	std::cout << "Please enter contact's phone number (up to 16 digits) : ";
	std::cin.get(new_contact.ph_num, 16) << std::endl;
	std::cout << "Please enter contact's darkest secret (up to 512 characters) : ";
	std::cin.get(new_contact.secret, 512) << std::endl;
	std::cout << std::endl;	

	if (!new_contact.is_conform())
		return ;
	if (this->tracker == 8)
		this->tracker = 0;

	this->contact_list[tracker++].copy(new_contact);
	std::cout << new_contact->f_name << " " << new_contact->l_name << "has been added to your phonebook.\n\n" << std::endl;
	this->c_num += (this->c_num < 8);
	return ;
}

void PhoneBook::search_contact(char index)
{
	if (index > this->c_num || index < 1)
	{
		std::cout << "The provided index does not belong to any of your contacts." << std::endl;
		return ;
	}
	std::cout << "First Name : " << this->contact_list[index - 1].f_name << std::endl;
	std::cout << "Last Name : " << this->contact_list[index - 1].l_name << std::endl;
	std::cout << "NickName : " << this->contact_list[index - 1].n_name << std::endl;
	std::cout << "Phone Number : " << this->contact_list[index - 1].ph_num << std::endl;
	std::cout << "Darkest Secret : " << this->contact_list[index - 1].secret << std::endl;
	return ;
}

void PhoneBook::search_contact_list()
{
	if (this->c_num == 0)
	{
		std::cout << "Before parsing throughout your phonebook, you should first add at least one contact." << std::endl;
		return ;
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (char i = 0; i < c_num; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i << "|";
		if (this->contact_list[i].f_name.width > 10)
			std::cout << this->contact_list[i].f_name.subtr(0, 9) << ".|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].f_name << "|";
		}
		if (this->contact_list[i].l_name.width > 10)
			std::cout << this->contact_list[i].l_name.subtr(0, 9) << ".|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].l_name << "|";
		}
		if (this->contact_list[i].n_name.width > 10)
			std::cout << this->contact_list[i].n_name.subtr(0, 9) << ".|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].n_name << "|" << std::endl;
		}
	}
	return ;
}
