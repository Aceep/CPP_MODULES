#include "Fixed.hpp"


int main( void )
{
    //*------------Main in the subject------------*//
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    //*--------------------Own Tests----------------*//

    Fixed c( 5 );
    Fixed d( 2 );
    
    // Test for operator comparison
    std::cout << "Test for operator comparison" << std::endl;
    std::cout << Fixed::max( c, d ) << std::endl;
    std::cout << Fixed::min( c, d ) << std::endl;

    std::cout << c * d << std::endl;
    std::cout << c / d << std::endl;
    std::cout << c + d << std::endl;
    std::cout << c - d << std::endl;
    
    return 0;
}