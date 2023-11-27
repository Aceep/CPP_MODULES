#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(0, 1);
    Point c(1, 0);
    Point point(0.2, 0.5);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside the triangle" << std::endl;
    return (0);
}