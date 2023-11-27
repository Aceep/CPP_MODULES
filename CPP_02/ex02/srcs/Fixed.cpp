#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->_fixedPointValue = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const n )
{
    //std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed( float const n )
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::Fixed( Fixed const & src )
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+( Fixed const & rhs ) const
{
    //std::cout << "Addition operator called" << std::endl;
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed Fixed::operator-( Fixed const & rhs ) const
{
    //std::cout << "Subtraction operator called" << std::endl;
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed Fixed::operator*( Fixed const & rhs ) const
{
    //std::cout << "Multiplication operator called" << std::endl;
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed Fixed::operator/( Fixed const & rhs ) const
{
    //std::cout << "Division operator called" << std::endl;
    if (rhs.toFloat() != 0)
        return Fixed( this->toFloat() / rhs.toFloat() );
    else
        return (std::cout << "Division by zero is not allowed" << std::endl, 0);
}

bool Fixed::operator>( Fixed const & rhs ) const
{
    //std::cout << "Greater than operator called" << std::endl;
    return this->_fixedPointValue > rhs.getRawBits();
}

bool Fixed::operator<( Fixed const & rhs ) const
{
    //std::cout << "Less than operator called" << std::endl;
    return this->_fixedPointValue < rhs.getRawBits();
}

bool Fixed::operator>=( Fixed const & rhs ) const
{
    //std::cout << "Greater than or equal to operator called" << std::endl;
    return this->_fixedPointValue >= rhs.getRawBits();
}

bool Fixed::operator<=( Fixed const & rhs ) const
{
    //std::cout << "Less than or equal to operator called" << std::endl;
    return this->_fixedPointValue <= rhs.getRawBits();
}

bool Fixed::operator==( Fixed const & rhs ) const
{
    //std::cout << "Equal to operator called" << std::endl;
    return this->_fixedPointValue == rhs.getRawBits();
}

bool Fixed::operator!=( Fixed const & rhs ) const
{
    //std::cout << "Not equal to operator called" << std::endl;
    return this->_fixedPointValue != rhs.getRawBits();
}

Fixed & Fixed::operator++( void )
{
    //std::cout << "Pre-increment operator called" << std::endl;
    ++this->_fixedPointValue;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue++;
    return tmp;
}

Fixed & Fixed::operator--( void )
{
    //std::cout << "Pre-decrement operator called" << std::endl;
    --this->_fixedPointValue;
    return *this;
}

Fixed   Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._fixedPointValue = this->_fixedPointValue--;
    return tmp;
}

int Fixed::getRawBits( void ) const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int Fixed::toInt( void ) const
{
    return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i )
{
    o << i.toFloat();
    return o;
}

Fixed & Fixed::min( Fixed & a, Fixed & b )
{
    return a < b ? a : b;
}

Fixed & Fixed::max( Fixed & a, Fixed & b )
{
    return a > b ? a : b;
}

Fixed const & Fixed::min( Fixed const & a, Fixed const & b )
{
    return a < b ? a : b;
}

Fixed const & Fixed::max( Fixed const & a, Fixed const & b )
{
    return a > b ? a : b;
}