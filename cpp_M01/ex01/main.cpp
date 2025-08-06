#include "externals.hpp"
#include "Zombie.hpp"


int	main()
{
	Zombie* new_zombie = NULL;
	Zombie* zombie_horde = NULL;

	randomChump( "Steve" );
	new_zombie = newZombie( "Bob" );
	new_zombie->announce();
	delete ( new_zombie );
	zombie_horde = zombieHorde(42, "Alex");
	for (short i = 0; i < 42; i++)
		zombie_horde[i].announce();
	delete[] zombie_horde;

	return (0);
}
