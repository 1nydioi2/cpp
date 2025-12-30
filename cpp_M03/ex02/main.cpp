#include "ClapTrap.hpp"
#include "FragTrap.hpp"



int	main( void )
{
	FragTrap	faux_s( "Squeezie" );
	FragTrap	s;
	s = faux_s;
	FragTrap	faux_d( "Doigby" );
	FragTrap	d( faux_d );
	
	s.attack( "Doiby" );
	d.takeDamage( s.getAD() );
	d.takeDamage( s.getAD() );
	d.takeDamage( s.getAD() );
	d.takeDamage( s.getAD() );
	d.highFivesGuys();
	d.beRepaired( s.getAD() );

	return ( 0 );
}
