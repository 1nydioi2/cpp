#include "externals.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	clear513(char buff[513])
{
	for (short i = 0; i < 513; i++)
		buff[i] = '\0';
}

void	clear7(char cmd[7])
{
	for (short i = 0; i < 7; i++)
		cmd[i] = '\0';
}

bool	parser(char cmd[7], PhoneBook pb)
{
	int		index = 0;
	std::string	input;

	input.copy(cmd, 7);
	if (input.compare("ADD") == 0)
		pb.add_contact();
	else if (input.compare("SEARCH") == 0)
	{
		if (pb.search_contact_list())
		{
			std::cin >>  index;
			pb.search_contact(index);
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
	char		cmd[7];
	bool		go = 1;

	std::cout << "This is a simple phonebook that allows you to register 8 contacts." << std::endl;
	std::cout << "There are three commands let to your disposal :" << std::endl;
	std::cout << "- ADD : This command lets you  create a new contact and then add it to the phonebook." << std::endl;
	std::cout << "- SEARCH : This command displays all the contacts registered, then asks you to choose which contact informations you want to look at by entering their index." << std::endl;
	std::cout << "- EXIT : This command leave the program and destroy all contacts it contained.\n\n" << std::endl;
	while (go) 
	{
		std::cout << "Please enter a command : ";
		clear7(cmd);
		std::cin.get(cmd, 6);
		go = parser(cmd, pb);
	}
	return (0);
}
