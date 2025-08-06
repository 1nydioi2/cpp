#include "externals.hpp"
#include "Zombie.hpp"


int	main()
{
	Zombie* new_zombie = NULL;

	randomChump( "Steve" );
	new_zombie = newZombie( "Bob" );
	new_zombie->announce();
	delete ( new_zombie );

	return (0);
}
