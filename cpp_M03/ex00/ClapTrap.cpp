/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/18 13:49:59 by nilamber         ###   ########.fr       */
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
	std::cout << "ClapTrap Copy Assignment Operator Overload called" << std::endl;
	_name = source._name;
	_hit_points = source._hit_points;
	_energy_points = source._energy_points;
	_attack_damages = source._attack_damages;

	return ;
}


std::string	ClapTrap::getName( void )	const
{
	std::cout << "Name Accessor called" << std::endl;
	
	return ( _name );
}

int		ClapTrap::getHP( void )	const
{
	std::cout << "Hit Points Accessor called" << std::endl;

	return ( _hit_points );
}

int		ClapTrap::getEP( void )	const
{
	std::cout << "Energy Points Accessor called" << std::endl;
	
	return ( _energy_points );
}

int		ClapTrap::getAD( void )	const
{
	std::cout << "Attack Damages Accessor called" << std::endl;
	
	return ( _attack_damages );
}

void	ClapTrap::setName( std::string name )
{
	std::cout << "Name Initializer called" << std::endl;
	_name = name;

	return ;
}

void		ClapTrap::setHP( int amount )
{
	std::cout << "Hit Points Initializer called" << std::endl;
	if ( amount < 0)
		_hit_points = 0;
	else
		_hit_points = amount;

	return ;
}

void		ClapTrap::setEP( int amount )
{
	std::cout << "Energy Points Initializer called" << std::endl;
	if ( amount < 0)
		_energy_points = 0;
	else
		_energy_points = amount;
	
	return ;
}

void		ClapTrap::setAD( int amount )
{
	std::cout << "Attack Damages Initializer called" << std::endl;
	if ( amount < 0)
		_attack_damages = 0;
	else
		_attack_damages = amount;
	
	return ;
}


void	ClapTrap::attack( const std::string& target )
{
	if (getEP() > 0 && getHP() > 0)
	{
		setEP( getEP() - 1 );
		std::cout << "*" << getName() << "* just took *" << target << "* brutaly by the colback and cracked their head open against the floor.\n Causing them to take " << getAD() << " damages. ( not cool :(... )\n*" << getName() << "* loses 1 energy point and now has " << getEP() << " energy points.\n" << std::endl;
	}
	else
		std::cout << "*" << getName() << "* is in no contidition to attack." << std::endl;

	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if ( getHP() > 0 )
	{
		setHP( getHP() - amount );
		std::cout << "*" << getName() << "* is crumbled across the floor after having been savagely hit against it and took " << amount << " damage points.\n*" << getName() << "* now has " << getHP() << " hit points.\n*old granny crying and screaming in the back* : \"PLEASE, SOMEONE PLEASE BRING THIS ROBOT A full AND real BOTTLE OF *Ciao Kombucha*, IT'S A LIFE OR DEATH TYPE OF SITUATION !!! ( yeah, it's not I know, since it's a robot and technically robot are not living nor dead, but who cares ? stop being a crybaby and take this bottle of *Ciao Kombucha*)\n*CONGRATULATIONS, you received ONE bottle of EMPTY and FALSE *Ciao Kombucha*.*\nDon't look at me like that :(, you really thought a CS student could affort a real one ?\n" << std::endl;
	}	
	else	
		std::cout << "*" << getName() << "* is already  destroyed." << std::endl;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( getEP() > 0 && getHP() > 0 )
	{
		if ( (int)( getHP() + amount ) > 2147483647 ) 
			setHP( 2147483647 );
		else
			setHP( getHP() + amount );
		setEP( getEP() - 1 );
		std::cout << "But everything's fine for *" << getName() << "*, since across the street *The Legendary Squeezos* appears, a FULL and REAL bottle of *Ciao Kombucha* in his hand. After hearing all those poor people complaining ( as always... ), he couldn't possibily not intervene, and rushed straight from his *1955 Mercedes-Benz 300 SLR Uhlenhaut Coupe* to the poor *" << getName() << "*, broke the top of the bottle against the floor, drank it all up, and kissed *" << getName() << "*. They kiss for about *42 FULL and REAL seconds* straight.\n*" << getName() << "* is repaired and gains back " << amount << " hit points and now has " << getHP() << " hit points. ( LOVE ALWAYS finds its way ;) )\n*" << getName() << "* loses 1 energy point and now has " << getEP() << " energy points.\n" << std::endl;
	}
	else
		std::cout << "*" << getName() << "* is in no contidition to be repaired." << std::endl;

	return ;
}
