#include "externals.hpp"
#include "Zombie.hpp"


Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed." << std::endl;
	
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
	return ;
}

void	Zombie::set_name( std::string name )
{
	this->name = name;
	
	return ;
}
