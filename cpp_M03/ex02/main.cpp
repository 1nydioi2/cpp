#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"



int	main( void )
{
	FragTrap	faux_s( "Squeezie" );
	FragTrap	s;
	s = faux_s;
	FragTrap	faux_d( "Doigby" );
	FragTrap	d( faux_d );
	
	std::cout << std::endl;
	
	s.attack( "Doiby" );
	d.takeDamage( 30 );
	d.takeDamage( 30 );
	d.takeDamage( 30 );
	d.beRepaired( 3000000000 );
	d.highFivesGuys();
	d.takeDamage( 3000000000 );
	d.beRepaired( 40 );
	d.highFivesGuys();
	
	std::cout << std::endl;
	
	return ( 0 );
}
