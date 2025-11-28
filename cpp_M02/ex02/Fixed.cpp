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
	std::cout << "Float() Constructor called" << std::endl;
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
	std::cout << "Assignment Operator called" << std::endl;
	if (&( *this ) != &source)
		_value = source.getRawBits();
	return ;
}

bool	Fixed::operator>( const Fixed& source ) const
{
	std::cout << "Superior Assignment Operator called" << std::endl;
	return ( _value > source.getRawBits() );
}

bool	Fixed::operator<( const Fixed& source ) const
{
	std::cout << "Inferior Operator called" << std::endl;
	return ( _value < source.getRawBits() );
}

bool	Fixed::operator>=( const Fixed& source ) const
{
	std::cout << "Superior or Equal Operator called" << std::endl;
	return ( _value >= source.getRawBits() );
}

bool	Fixed::operator<=( const Fixed& source ) const
{
	std::cout << "Inferior or Equal Operator called" << std::endl;
	return ( _value <= source.getRawBits() );
}

bool	Fixed::operator==( const Fixed& source ) const
{
	std::cout << "EqualOperator called" << std::endl;
	return ( _value == source.getRawBits() );
}

bool	Fixed::operator!=( const Fixed& source ) const
{
	std::cout << "Inequal Operator called" << std::endl;
	return ( _value != source.getRawBits() );
}

float	Fixed::operator+( const Fixed& that ) const
{
	std::cout << "Addition Operator called" << std::endl;
	return ( this->toFloat() + that.toFloat() );
}

float	Fixed::operator-( const Fixed& that ) const
{
	std::cout << "Substraction Operator called" << std::endl;
	return ( this->toFloat() - that.toFloat() );
}

float	Fixed::operator*( const Fixed& by ) const
{
	std::cout << "Multiplication Operator called" << std::endl;
	return ( this->toFloat() * by.toFloat() );
}

float	Fixed::operator/( const Fixed& by ) const
{
	std::cout << "Division Operator called" << std::endl;
	return ( this->toFloat() / by.toFloat() );
}

float	Fixed::operator++( void )
{
	std::cout << "Pre-Incrementation Operator called" << std::endl;
	++_value;
	return ( toFloat() );
}

float	Fixed::operator++( int )
{
	float	temp = toFloat();
	std::cout << "Post-Incrementation Operator called" << std::endl;
	++_value;
	return ( temp );
}

float	Fixed::operator--( void )
{
	std::cout << "Pre-Decrementation Operator called" << std::endl;
	--_value;
	return ( toFloat() );
}

float	Fixed::operator--( int )
{
	float	temp = toFloat();

	std::cout << "Post-Decrementation Operator called" << std::endl;
	--_value;
	return ( temp );
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


Fixed&		Fixed::min( Fixed& f1, Fixed& f2 )
{
	if (f1.getRawBits() < f2.getRawBits())
		return ( f1 );
	else 
		return ( f2 );
}

const Fixed&	Fixed::min( const Fixed& f1, const Fixed& f2 )
{
	if (f1.getRawBits() < f2.getRawBits())
		return ( f1 );
	else
		return ( f2 );
}

Fixed&		Fixed::max( Fixed& f1, Fixed& f2 )
{
	if (f1.getRawBits() > f2.getRawBits())
		return ( f1 );
	else
		return ( f2 );
}

const Fixed&	Fixed::max( const Fixed& f1, const Fixed& f2 )
{
	if (f1.getRawBits() > f2.getRawBits())
		return ( f1 );
	else
		return ( f2 );
}
