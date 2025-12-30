/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/18 14:02:52 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"



FragTrap::FragTrap( void )
: ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	setName( "" );
	setHP( 100 );
	setEP( 100 );
	setAD( 30 );
	
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
	setName( name );
	setHP( 100 );
	setEP( 100 );
	setAD( 30 );
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
	setName( source.getName() );
	setHP( source.getHP() );
	setEP( source.getEP() );
	setAD( source.getAD() );

	return ;
}


void	FragTrap::highFivesGuys( void )
{
	if (getHP() > 0 && getEP() > 0)
		std::cout << "*" << getName() << "* asks everyone if it is possible to top fighting since it would win, and instead kiss." << std::endl;
	else
		std::cout << "*" << getName() << "* 's face is in no condition to ask for kisses." << std::endl;
	
	return ;
}
