#include "externals.hpp"
#include "contact.hpp"


Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::copy(Contact source)
{
	this->f_name = source.f_name;
	this->l_name = source.l_name;
	this->n_name = source.n_name;
	this->ph_num = source.ph_num;
	this->secret = source.secret;
	return ;
}

void Contact::get_info(char info)
{
	switch (info)
	{
		case 0:
			std::cout << this->index;
			break;
		case 1:
			std::cout << this->f_name;
			break;
		case 2:
			std::cout << this->l_name;
			break;
		case 3:
			std::cout << this->n_name;
			break;
		case 4:
			std::cout << this->ph_num;
			break;
		case 5:
			std::cout << this->secret;
			break;
		default:
			return ;
	}
	return ;
}

bool Contact::is_conform()
{
	char c = 0;

	for (char i = 0; i < this->f_name.lenght(); i++)
	{
		if !(std::isprint(this->f_name[i]))
			return (std::cout << "First name of contact is not conform" << std::endl, 0);
		if (this->f_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "First name of contact is not conform" << std::endl, 0);

	c = 0;
	for (char i = 0; i < this->l_name.lenght(); i++)
	{
		if !(std::isprint(this->l_name[i]))
			return (std::cout << "Last name of contact is not conform" << std::endl, 0);
		if (this->l_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Last name of contact is not conform" << std::endl, 0);

	c = 0;
	for (char i = 0; i < this->n_name.lenght(); i++)
	{
		if !(std::isprint(this->n_name[i]))
			return (std::cout << "Nickname of contact is not conform" << std::endl, 0);
		if (this->n_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Nickname of contact is not conform" << std::endl, 0);

	c = 0;
	for (char i = 0; i < this->ph_num.lenght(); i++)
	{
		if !(std::isnum(this->ph_num[i]) || this->ph_num[i] == '.' || this->ph_num[i] == '#' || this->ph_num[i] == '+' || this->ph_num[i] == ' ')
			return (std::cout << "Last name of contact is not conform" << std::endl, 0);
		if (this->ph_num[i].isdigit())
			c++;
	}
	if (!c)
		return (std::cout << "Phone number of contact is not conform" << std::endl, 0);

	c = 0;
	for (char i = 0; i < this->secret.lenght(); i++)
	{
		if !(std::isprint(this->secret[i]))
			return (std::cout << "Darkest Secret of contact is not conform" << std::endl, 0);
		if (this->secret[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Darkest Secret of contact is not conform" << std::endl, 0);
	return (1);
}
