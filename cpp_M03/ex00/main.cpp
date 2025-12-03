#include "ClapTrap.hpp"



int	main( void )
{
	ClapTrap	faux_m( "Mikalow" );
	ClapTrap	m;
	m = faux_m;
	ClapTrap	faux_g( "Gotaga" );
	ClapTrap	g( faux_g );

	m.attack( "Gotaga" );
	g.takeDamage( (unsigned int) m.getAD() );
	g.beRepaired( (unsigned int) m.getAD() );

	return ( 0 );
}
