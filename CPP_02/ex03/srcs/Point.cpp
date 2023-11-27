#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(Point const & src) : x(src.x), y(src.y)
{
}

Point::~Point()
{
}

Point & Point::operator=(Point const & src)
{
    (void)src;
    return (*this);
}

Fixed const & Point::getX(void) const
{
    return (this->x);
}

Fixed const & Point::getY(void) const
{
    return (this->y);
}
