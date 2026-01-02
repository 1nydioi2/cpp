#include "ClapTrap.hpp"



int	main( void )
{
	ClapTrap	faux_m( "Mikalow" );
	ClapTrap	m;
	m = faux_m;
	ClapTrap	faux_g( "Gotaga" );
	ClapTrap	g( faux_g );

	std::cout << std::endl;
	
	m.attack( "Gotaga" );
	g.takeDamage( 0 );
	g.beRepaired( 10 );
	
	std::cout << std::endl;
	
	return ( 0 );
}
