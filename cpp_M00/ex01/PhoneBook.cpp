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
	Contact			new_c;
	std::string		buff;
	
	std::cout << "Please enter contact's first name : ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	new_c.add_info(1, buff);

	std::cout << "Please enter contact's last name : ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	new_c.add_info(2, buff);
	
	std::cout << "Please enter contact's nickname : ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	new_c.add_info(3, buff);
	
	std::cout << "Please enter contact's phone number : ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	new_c.add_info(4, buff);
	
	std::cout << "Please enter contact's darkest secret : ";
	std::getline(std::cin, buff);
	std::cout << std::endl;
	new_c.add_info(5, buff);
	std::cout << std::endl;	

	if (!new_c.is_conform())
		return ;
	if (this->tracker == 8)
		this->tracker = 0;

	this->contact_list[tracker++].copy(new_c);
	this->c_num += (this->c_num < 8);
	std::cout << new_c.get_info('f', 'd')<< " " << new_c.get_info('l', 'd')<< " has been added to your phonebook." << std::endl << "You now have " << (char) (this->c_num + '0') << " contact(s)\n\n" << std::endl;
	return ;
}

void PhoneBook::search_contact(int index)
{
	if (index > this->c_num || index < 1)
	{
		std::cout << "The provided index does not belong to any of your contacts." << std::endl;
		return ;
	}
	std::cout << "First Name : " << this->contact_list[index - 1].get_info('f', 'd')<< std::endl;
	std::cout << "Last Name : " << this->contact_list[index - 1].get_info('l', 'd')<< std::endl;
	std::cout << "NickName : " << this->contact_list[index - 1].get_info('n', 'd')<< std::endl;
	std::cout << "Phone Number : " << this->contact_list[index - 1].get_info('p', 'd')<< std::endl;
	std::cout << "Darkest Secret : " << this->contact_list[index - 1].get_info('s', 'd')<< std::endl;
	return ;
}

bool PhoneBook::search_contact_list()
{

	std::cout << "You have " << (char) (this->c_num + '0') << " contact(s)." << std::endl;
	if (this->c_num < 1)
	{
		std::cout << "Before parsing throughout your phonebook, you should first add at least one contact." << std::endl;
		return (0);
	}
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < c_num; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << (i + 1) << "|";
		if (this->contact_list[i].get_info('f', 'd').length() > 10)
			std::cout << this->contact_list[i].get_info('f', '9') << ".|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].get_info('f', 'd') << "|";
		}
		if (this->contact_list[i].get_info('l', 'd').length() > 10)
			std::cout << this->contact_list[i].get_info('l', '9') << ".|";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].get_info('l', 'd') << "|";
		}
		if (this->contact_list[i].get_info('n', 'd').length() > 10)
			std::cout << this->contact_list[i].get_info('n', '9') << ".|\n";
		else
		{
			std::cout << std::setw(10);
			std::cout << this->contact_list[i].get_info('n', 'd') << "|" << std::endl;
		}
	}
	return (1);
}
