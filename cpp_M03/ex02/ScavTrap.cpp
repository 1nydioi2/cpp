/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2026/01/02 17:23:40 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"



ScavTrap::ScavTrap( void )
: ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	_name = "";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damages = 20;
	
	return ;
}

ScavTrap::ScavTrap( const ScavTrap& source )
: ClapTrap()
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = source;

	return ;
}

ScavTrap::ScavTrap( const std::string name )
: ClapTrap()
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damages = 20;
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
	_name = source._name;
	_hit_points = source._hit_points;
	_energy_points = source._energy_points;
	_attack_damages = source._attack_damages;

	return ;
}


void	ScavTrap::attack( const std::string& target )
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		if (_energy_points - 1 < 0)
			_energy_points = 0;
		else
			_energy_points--;
	 	std::cout << "*" << _name << "* just kissed *" << target << "* on its right cheek.\n Causing it to take " << _attack_damages << " damages. ( don't play with feelings that's mean :(...)\n*" << _name << "* loses 1 energy point and now has " << _energy_points << " energy points.\n" << std::endl;
	}    
	else
		std::cout << "*" << _name << "* is in no condition to attack." << std::endl;


	return ;
}

void	ScavTrap::guardGate( void )
{
	if (_hit_points > 0 && _energy_points > 0)
		std::cout << "*" << _name << "* is now in Gate keeper mode to protect its feelings." << std::endl;
	else
		std::cout << "*" << _name << "* is in no condition to activate Gate keeper mode." << std::endl;
	
	return ;
}
