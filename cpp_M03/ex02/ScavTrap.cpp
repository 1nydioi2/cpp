/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/18 13:47:53 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"



ScavTrap::ScavTrap( void )
: ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	setName( "" );
	setHP( 100 );
	setEP( 50 );
	setAD( 20 );
	
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
	setName( name );
	setHP( 100 );
	setEP( 50 );
	setAD( 20 );
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
	setName( source.getName() );
	setHP( source.getHP() );
	setEP( source.getEP() );
	setAD( source.getAD() );

	return ;
}


void	ScavTrap::attack( const std::string& target )
{
	if (getHP() > 0 && getEP() > 0)
	{
	 	std::cout << "*" << getName() << "* just kissed *" << target << "* on its right cheek.\n Causing it to take " << getAD() << " damages. ( don't play with feelings that's mean :(...)\n*" << getName() << "* loses 1 energy point and now has " << (getEP() - 1) << " energy points.\n" << std::endl;
		setEP(getEP() - 1);
	}    
	else
		std::cout << "*" << getName() << "* is in no condition to attack." << std::endl;


	return ;
}

void	ScavTrap::guardGate( void )
{
	if (getHP() > 0 && getEP() > 0)
		std::cout << "*" << getName() << "* is now in Gate keeper mode to protect its feelings." << std::endl;
	else
		std::cout << "*" << getName() << "* is in no condition to activate Gate keeper mode." << std::endl;
	
	return ;
}
