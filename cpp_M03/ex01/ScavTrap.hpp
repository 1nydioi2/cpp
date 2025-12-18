/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:55:03 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/18 12:57:25 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "ClapTrap.hpp"


class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const ScavTrap& source );
		ScavTrap( std::string Name );
		~ScavTrap( void );

		void	operator=( const ScavTrap& other );

		void	attack( const std::string& target );
		void	guardGate( void );
};
