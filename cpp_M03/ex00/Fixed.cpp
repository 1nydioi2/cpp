/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:09 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/02 14:56:11 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



const int Fixed::_fbits = 8;

Fixed::Fixed( void )
{
	std::cout << "Default Constructor called" << std::endl;
	this->_value = 0;

	return ;
}

Fixed::Fixed( const Fixed& source )
{
	std::cout << "Copy Constructor called" << std::endl;
	this->_value = source.getRawBits();

	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}


void	Fixed::operator=( const Fixed& source )
{
	std::cout << "Copy Assignment Operator Overload called" << std::endl;
	this->_value = source.getRawBits();

	return ;
}


void	Fixed::setRawBits( const int raw )
{
	std::cout << "setRawBits method called" << std::endl;
	this->_value = raw;

	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits method called" << std::endl;
	
	return ( this->_value );
}
