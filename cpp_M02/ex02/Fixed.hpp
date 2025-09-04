#ifndef FIXED_HPP
# define FIXED_HPP
# include "externals.hpp"



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
