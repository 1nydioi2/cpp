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
