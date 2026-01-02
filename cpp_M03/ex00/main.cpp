#include "ClapTrap.hpp"



int	main( void )
{
	ClapTrap	faux_m( "Mikalow" );
	ClapTrap	m;
	m = faux_m;
	ClapTrap	faux_g( "Gotaga" );
	ClapTrap	g( faux_g );

	m.attack( "Gotaga" );
	g.takeDamage( 5 );
	g.beRepaired( 10 );

	return ( 0 );
}
