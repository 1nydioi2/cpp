#include "Fixed.hpp"



const int Fixed::_fbits = 8;

Fixed::Fixed( void )
	: _value( 0 )
{
	std::cout << "Default Constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const int source )
{
	std::cout << "Int Constructor called" << std::endl;
	_value = source << _fbits;

	return ;
}

Fixed::Fixed( const float source )
{
	std::cout << "Float Constructor called" << std::endl;
	_value = int ( roundf( source * (1 << _fbits) ) );

	return ;
}

Fixed::Fixed( const Fixed& source )
	: _value( source.getRawBits() )
{
	std::cout << "Copy Constructor called" << std::endl;

	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return ;
}


void	Fixed::operator=( const Fixed& source )
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (&( *this ) != &source)
		_value = source.getRawBits();
	return ;
}


void	Fixed::setRawBits( const int raw )
{
	_value = raw;

	return ;
}

int	Fixed::getRawBits( void ) const
{
	return ( _value );
}

float	Fixed::toFloat( void ) const
{
	return ( float ( _value ) / ( 1 << _fbits ) );
}

int	Fixed::toInt( void ) const
{
	return ( _value / ( 1 << _fbits ) );
}


std::ostream&	operator<<( std::ostream& outstream, const Fixed &target )
{
	outstream << target.toFloat();

	return ( outstream );
}
