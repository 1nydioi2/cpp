/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/16 18:24:33 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"



ScavTrap::ScavTrap( void )
:	_name( "" ),
	_hit_points( 100 ),
	_energy_points( 50 ),
	_attack_damages( 20 )
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	
	return ;
}

ScavTrap::ScavTrap( const ScavTrap& source )
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = source;

	return ;
}

ScavTrap::ScavTrap( const std::string name )
:	_name( name ),
	_hit_points( 100 ),
	_energy_points( 50 ),
	_attack_damages( 20 )
{
	std::cout << "ScavTrap Named Constructor called" << std::endl;

	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;

	return ;
}


void	ScavTrap::operator=( const ScavTrap& source )
{
	std::cout << "ScavTrap Copy Assignment Operator Overload called" << std::endl;
	_name = source._name;
	_hit_points = source._hit_points;
	_energy_points = source._energy_points;
	_attack_damages = source._attack_damages;

	return ;
}


void	ScavTrap::attack( const std::string& target )
{
	std::cout << "*" << _name << "* just kissed *" << target << "* on its right cheek.\n Causing it to take " << _attack_damages << " damages. ( don't play with feelings that's mean :(...)\n*" << _name << "* loses 1 energy point and now has " << --_energy_points << " energy points.\n" << std::endl;

	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "*" << _name << "* is now in Gate keeper mode to protect its feelings." << std::endl;
	
	return ;
}
