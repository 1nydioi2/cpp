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
	Contact		new_c;
	char		buff[513];

	std::cout << "Please enter contact's first name (up to 64 characters) : ";
	std::cin.get(&buff, 64) << std::endl;
	new_c.add_info(1, &buff);
	clear513(&buff);

	std::cout << "Please enter contact's last name (up to 64 characters) : ";
	std::cin.get(&buff, 64) << std::endl;
	new_c.add_info(2, &buff);
	clear513(&buff);
	
	std::cout << "Please enter contact's nickname (up to 64 characters) : ";
	std::cin.get(&buff, 64) << std::endl;
	new_c.add_info(3, &buff);
	clear(&buff);
	
	std::cout << "Please enter contact's phone number (up to 16 digits) : ";
	std::cin.get(&buff, 16) << std::endl;
	new_c.add_info(4, &buff);
	clear(&buff);
	
	std::cout << "Please enter contact's darkest secret (up to 512 characters) : ";
	std::cin.get(&buff, 512) << std::endl;
	new_c.add_info(5, &buff);
	clear(&buff);
	std::cout << std::endl;	

	if (!new_c.is_conform())
		return ;
	if (this->tracker == 8)
		this->tracker = 0;

	this->contact_list[tracker++].copy(new_c);
	std::cout << new_c->f_name << " " << new_c->l_name << "has been added to your phonebook.\n\n" << std::endl;
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
	std::cout << "First Name : " << this->contact_list[index - 1].get_info(1) << std::endl;
	std::cout << "Last Name : " << this->contact_list[index - 1].get_info(2) << std::endl;
	std::cout << "NickName : " << this->contact_list[index - 1].get_info(3) << std::endl;
	std::cout << "Phone Number : " << this->contact_list[index - 1].get_info(4) << std::endl;
	std::cout << "Darkest Secret : " << this->contact_list[index - 1].get_info(5) << std::endl;
	return ;
}

bool PhoneBook::search_contact_list()
{
	if (this->c_num == 0)
	{
		std::cout << "Before parsing throughout your phonebook, you should first add at least one contact." << std::endl;
		return (0);
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
	return (1);
}
