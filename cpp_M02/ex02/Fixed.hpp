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

		bool	operator>( const Fixed& source ) const;
		bool	operator<( const Fixed& source ) const;
		bool	operator>=( const Fixed& source ) const;
		bool	operator<=( const Fixed& source ) const;
		bool	operator==( const Fixed& source ) const;
		bool	operator!=( const Fixed& source ) const;
		
		float	operator+( const Fixed& that ) const;
		float	operator-( const Fixed& that ) const;
		float	operator*( const Fixed& by ) const;
		float	operator/( const Fixed& by ) const;
		
		float	operator++( void );
		float	operator++( int );
		float	operator--( void );
		float	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static	Fixed&	min( Fixed& f1, Fixed& f2 );
		static	const Fixed&	min( const Fixed& f1, const Fixed& f2 );
		static	Fixed&	max( Fixed& f1, Fixed& f2 );
		static	const Fixed&	max( const Fixed& f1, const Fixed& f2 );


	private:
		int	_value;

		static const int	_fbits;
};


std::ostream&	operator<<( std::ostream& outstream, const Fixed& target );



#endif
