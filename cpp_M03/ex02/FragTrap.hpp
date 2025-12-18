/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:55:03 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/18 14:03:41 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "ClapTrap.hpp"


class	FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const FragTrap& source );
		FragTrap( std::string Name );
		~FragTrap( void );

		void	operator=( const FragTrap& other );

		void	highFivesGuys( void );
};
