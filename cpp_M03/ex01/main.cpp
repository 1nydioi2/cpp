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
	d.takeDamage( s.getAD() );
	std::cout << "1" << std::endl;
	d.takeDamage( s.getAD() );
	std::cout << "2" << std::endl;
	d.takeDamage( s.getAD() );
	std::cout << "3" << std::endl;
	d.takeDamage( s.getAD() );
	std::cout << "4" << std::endl;
	d.takeDamage( s.getAD() + 10 );
	std::cout << "5" << std::endl;
	d.takeDamage( s.getAD() );
	std::cout << "6" << std::endl;
	d.guardGate();
	d.beRepaired( s.getAD() );

	return ( 0 );
}
