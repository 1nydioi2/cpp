/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2026/01/02 17:09:05 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap::ClapTrap( void )
:	_name( "" ),
	_hit_points( 10 ),
	_energy_points( 10 ),
	_attack_damages( 0 )
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& source )
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = source;

	return ;
}

ClapTrap::ClapTrap( const std::string name )
:	_name( name ),
	_hit_points( 10 ),
	_energy_points( 10 ),
	_attack_damages( 0 )
{
	std::cout << "ClapTrap Named Constructor called" << std::endl;

	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;

	return ;
}


void	ClapTrap::operator=( const ClapTrap& source )
{
	_name = source._name;
	_hit_points = source._hit_points;
	_energy_points = source._energy_points;
	_attack_damages = source._attack_damages;

	return ;
}


void	ClapTrap::attack( const std::string& target )
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		if ( (int)(_energy_points - 1) < 0)
			_energy_points = 0;
		else
			_energy_points -= 1;
		std::cout << "*" << _name << "* just took *" << target << "* brutaly by the colback and cracked their head open against the floor.\n Causing them to take " << _attack_damages << " damages. ( not cool :(... )\n*" << _name << "* loses 1 energy point and now has " << _energy_points << " energy points.\n" << std::endl;
	}
	else
		std::cout << "*" << _name << "* is in no contidition to attack." << std::endl;

	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if ( _hit_points > 0 )
	{
		if ( (int)(_hit_points - amount) < 0)
			_hit_points = 0;
		else
			_hit_points -= amount;
		std::cout << "*" << _name << "* is crumbled across the floor after having been savagely hit against it and took " << amount << " damage points.\n*" << _name << "* now has " << _hit_points << " hit points.\n*old granny crying and screaming in the back* : \"PLEASE, SOMEONE PLEASE BRING THIS ROBOT A full AND real BOTTLE OF *Ciao Kombucha*, IT'S A LIFE OR DEATH TYPE OF SITUATION !!! ( yeah, it's not I know, since it's a robot and technically robot are not living nor dead, but who cares ? stop being a crybaby and take this bottle of *Ciao Kombucha*)\n*CONGRATULATIONS, you received ONE bottle of EMPTY and FALSE *Ciao Kombucha*.*\nDon't look at me like that :(, you really thought a CS student could affort a real one ?\n" << std::endl;
	}	
	else	
		std::cout << "*" << _name << "* is already  destroyed." << std::endl;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( _energy_points > 0 && _hit_points > 0 )
	{
		if ( (unsigned int)(_hit_points + amount) > 2147483647 ) 
			_hit_points = 2147483647;
		else
			_hit_points += amount;
		if ( _energy_points - 1 < 0)
			_energy_points = 0;
		else
			_energy_points -= 1;
		std::cout << "But everything's fine for *" << _name << "*, since across the street *The Legendary Squeezos* appears, a FULL and REAL bottle of *Ciao Kombucha* in his hand. After hearing all those poor people complaining ( as always... ), he couldn't possibily not intervene, and rushed straight from his *1955 Mercedes-Benz 300 SLR Uhlenhaut Coupe* to the poor *" << _name << "*, broke the top of the bottle against the floor, drank it all up, and kissed *" << _name << "*. They kiss for about *42 FULL and REAL seconds* straight.\n*" << _name << "* is repaired and gains back " << amount << " hit points and now has " << _hit_points << " hit points. ( LOVE ALWAYS finds its way ;) )\n*" << _name << "* loses 1 energy point and now has " << _energy_points << " energy points.\n" << std::endl;
	}
	else
		std::cout << "*" << _name << "* is in no contidition to be repaired." << std::endl;

	return ;
}
