#include "Fixed.hpp"

Fixed::Fixed( void )
{
    this->_fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const n )
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed( float const n )
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}



int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
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