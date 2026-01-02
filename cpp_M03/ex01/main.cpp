#include "ClapTrap.hpp"
#include "ScavTrap.hpp"



int	main( void )
{
	ScavTrap	faux_s( "Squeezie" );
	ScavTrap	s;
	s = faux_s;
	ScavTrap	faux_d( "Doigby" );
	ScavTrap	d( faux_d );
	
	std::cout << std::endl;
	
	s.attack( "Doigby" );
	d.takeDamage( 20 );
	d.takeDamage( 20 );
	d.takeDamage( 20 );
	d.takeDamage( 20 );
	d.takeDamage( 20 + 10 );
	d.takeDamage( 20 );
	d.guardGate();
	d.beRepaired( 20 );
	
	std::cout << std::endl;

	return ( 0 );
}
