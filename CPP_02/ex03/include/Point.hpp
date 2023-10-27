#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    public :
        Point();
        Point(const float x, const float y);
        Point(Point const & src);
        ~Point();
        Point & operator=(Point const & src);
        Fixed const & getX(void) const;
        Fixed const & getY(void) const;

    private :
        const Fixed   x;
        const Fixed   y;
};

#endif