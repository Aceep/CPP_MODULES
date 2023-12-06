#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{

}

Span::Span(Span const &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
        _N = other._N;
    return *this;
}

Span::~Span()
{
}

void    Span::addNumber(int n)
{
    if (_N == 0)
        throw Span::NotEnoughSpaceException();
    _N --;
    _numbers.push_back(n);
}
unsigned int Span::shortestSpan()
{
    int min = INT_MAX;

    if (_numbers.size() < 2)
        throw Span::NoShortestSpan();
    std::sort(_numbers.begin(), _numbers.end());
    for ( std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); it++)
    {
        if (it + 1 != _numbers.end())
        {
            if (min > *(it + 1) - *it)
                min = *(it + 1) - *it;
        }
    }
    return min;
}

unsigned int Span::longestSpan()
{
    int max = 0;

    if (_numbers.size() < 2)
        throw Span::NoLongestSpan();
    std::sort(_numbers.begin(), _numbers.end());
    max = _numbers.back() - _numbers.front();
    return max;
}