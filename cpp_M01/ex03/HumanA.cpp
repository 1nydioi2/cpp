#include "externals.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;

	return ;
}
