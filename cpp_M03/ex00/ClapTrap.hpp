#pragma once
#include <iostream>
#include <iomanip>
#include <string>



class	ClapTrap
{
	public:
		Clap( void );
		Clap( const Clap& source );
		Clap( std::string Name );
		~Clap( void );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amout );
		void	beRepaired( unsigned int amout );

	
	private:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damage;
}
