#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

class Span
{
    private :
        unsigned int _N;
        std::vector<int> _numbers;

    public :
        Span();
        Span(unsigned int N);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();

        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class NotEnoughSpaceException : public std::exception {
            public:
                virtual const char* what() const throw() {return ("Not enough space to add");}
        };
        class NoShortestSpan : public std::exception {
            public:
                virtual const char* what() const throw() {return ("No shortest span");}
        };
        class NoLongestSpan : public std::exception {
            public:
                virtual const char* what() const throw() {return ("No longest span");}
        };
};

#endif //SPAN_HPP