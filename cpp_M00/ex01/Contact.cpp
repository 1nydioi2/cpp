#include "externals.hpp"
#include "Contact.hpp"


Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::add_info(char info, char src[513])
{
	switch (info)
	{
		case 1:
			this->f_name = src;
			break;
		case 2:
			this->l_name = src;
			break;
		case 3:
			this->n_name = src;
			break;
		case 4:
			this->ph_num = src;
			break;
		case 5:
			this->secret = src;
			break;
		default:
			return ;
	}
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

/*void Contact::get_info(char info)
{
	switch (info)
	{
		case 1:
			std::cout << this->f_name << std::endl;
			break;
		case 2:
			std::cout << this->l_name << std::endl;
			break;
		case 3:
			std::cout << this->n_name << std::endl;
			break;
		case 4:
			std::cout << this->ph_num << std::endl;
			break;
		case 5:
			std::cout << this->secret << std::endl;
			break;
		default:
			return ;
	}
	return ;
}
*/
bool Contact::is_conform()
{
	char c = 0;

	for (size_t i = 0; i < this->f_name.length(); i++)
	{
		if (!std::isprint(this->f_name[i]))
			return (std::cout << "First name of contact is not conform" << std::endl, 0);
		if (this->f_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "First name of contact is not conform" << std::endl, 0);

	c = 0;
	for (size_t i = 0; i < this->l_name.length(); i++)
	{
		if (!std::isprint(this->l_name[i]))
			return (std::cout << "Last name of contact is not conform" << std::endl, 0);
		if (this->l_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Last name of contact is not conform" << std::endl, 0);

	c = 0;
	for (size_t i = 0; i < this->n_name.length(); i++)
	{
		if (!std::isprint(this->n_name[i]))
			return (std::cout << "Nickname of contact is not conform" << std::endl, 0);
		if (this->n_name[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Nickname of contact is not conform" << std::endl, 0);

	c = 0;
	for (size_t i = 0; i < this->ph_num.length(); i++)
	{
		if (!(std::isdigit(this->ph_num[i]) || this->ph_num[i] == '.' || this->ph_num[i] == '#' || this->ph_num[i] == '+' || this->ph_num[i] == ' '))
			return (std::cout << "Last name of contact is not conform" << std::endl, 0);
		if (std::isdigit(this->ph_num[i]))
			c++;
	}
	if (!c)
		return (std::cout << "Phone number of contact is not conform" << std::endl, 0);

	c = 0;
	for (size_t i = 0; i < this->secret.length(); i++)
	{
		if (!std::isprint(this->secret[i]))
			return (std::cout << "Darkest Secret of contact is not conform" << std::endl, 0);
		if (this->secret[i] != ' ')
			c++;
	}
	if (!c)
		return (std::cout << "Darkest Secret of contact is not conform" << std::endl, 0);
	return (1);
}
