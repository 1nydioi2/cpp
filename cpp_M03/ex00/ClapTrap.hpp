/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:55:03 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/02 15:57:00 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>



class	ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( const ClapTrap& source );
		ClapTrap( std::string Name );
		~ClapTrap( void );

		void	operator=( const ClapTrap& other );

		std::string	getName( void ) const;
		int		getHP( void ) const;
		int		getEP( void ) const;
		int		getAD( void ) const;

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );


	private:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_damages;
};
