/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:56:15 by nilamber          #+#    #+#             */
/*   Updated: 2025/12/02 14:56:17 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <iomanip>
# include <string>



class	Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& source );
		~Fixed( void );
		
		void	operator=( const Fixed& source );

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );


	private:
		int			_value;
		static const int	_fbits;
};



#endif
