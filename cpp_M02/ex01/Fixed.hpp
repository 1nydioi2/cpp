/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:55:58 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/02 14:56:00 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>



class	Fixed
{
	public:
		Fixed( void );
		Fixed( const int source );
		Fixed( const float source );
		Fixed( const Fixed& source );
		~Fixed( void );
		
		void	operator=( const Fixed& source );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;


	private:
		int			_value;
		static const int	_fbits;
};


std::ostream&	operator<<( std::ostream& outstream, const Fixed& target );



#endif
