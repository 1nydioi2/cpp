#include "externals.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool	parser(std::string &input, PhoneBook &pb)
{
	char		index = 0;
	std::string	garbage;
	
	if (input.compare("ADD") == 0)
		pb.add_contact();
	else if (input.compare("SEARCH") == 0)
	{
		if (pb.search_contact_list())
		{
			std::cout << "Which contact's informations would you like to see ? (Enter their index) : ";
			std::cin.get(index);	
			std::getline(std::cin, garbage);
			if (garbage.empty())
				pb.search_contact(index - '0');
			else
				pb.search_contact('e');
		}
		return (1);
	}
	else if (input.compare("EXIT") == 0)
		return (0);
	else
		std::cout << "Would you be so kind to type in a valid command ?" << std::endl;
	return (1);
}

int	main()
{
	PhoneBook	pb;
	std::string	cmd;
	bool		go = true;

	std::cout << "\nThis is a simple phonebook that allows you to register 8 contacts." << std::endl;
	std::cout << "There are three commands let to your disposal :" << std::endl;
	std::cout << "- ADD : This command lets you  create a new contact and then add it to the phonebook." << std::endl;
	std::cout << "- SEARCH : This command displays all the contacts registered, then asks you to choose which contact informations you want to look at by entering their index." << std::endl;
	std::cout << "- EXIT : This command leave the program and destroy all contacts it contained.\n\n" << std::endl;
	while (go) 
	{
		std::cout << "Please enter a command : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "\nEOF reached, exiting program..." << std::endl;	
			return (0);
		}
		go = parser(cmd, pb);
	}
	return (0);
}
