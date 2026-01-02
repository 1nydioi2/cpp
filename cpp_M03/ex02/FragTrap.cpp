/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2026/01/02 17:01:17 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"



FragTrap::FragTrap( void )
: ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	_name = "";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damages = 30;
	
	return ;
}

FragTrap::FragTrap( const FragTrap& source )
: ClapTrap()
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = source;

	return ;
}

FragTrap::FragTrap( const std::string name )
: ClapTrap()
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damages = 30;
	std::cout << "FragTrap Named Constructor called" << std::endl;

	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;

	return ;
}


void	FragTrap::operator=( const FragTrap& source )
{
	std::cout << "FragTrap Copy Assignment Operator Overload called" << std::endl;
	_name = source._name;
	_hit_points = source._hit_points;
	_energy_points = source._energy_points;
	_attack_damages = source._attack_damages;

	return ;
}

void	FragTrap::highFivesGuys( void )
{
	if (_hit_points > 0 && _energy_points > 0)
		std::cout << "*" << _name << "* asks everyone if it is possible to top fighting since it would win, and instead kiss." << std::endl;
	else
		std::cout << "*" << _name << "* 's face is in no condition to ask for kisses." << std::endl;
}
