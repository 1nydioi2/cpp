#include "ClapTrap.hpp"
#include "ScavTrap.hpp"



int	main( void )
{
	ScavTrap	faux_s( "Squeezie" );
	ScavTrap	s;
	s = faux_s;
	ScavTrap	faux_d( "Doigby" );
	ScavTrap	d( faux_d );
	
	s.attack( "Doiby" );
	d.takeDamage( (unsigned int) s.getAD() );
	d.guardGate();
	d.beRepaired( (unsigned int) s.getAD() );

	return ( 0 );
}
