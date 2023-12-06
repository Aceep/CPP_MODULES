#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <string>

template <class T> class Array
{
    private :
        T *_array;
        unsigned int _size;

    public :
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array();
        Array &operator=(const Array &copy);

        unsigned int size() const;
        T &operator[](unsigned int i);

        class OutOfRangeException : public std::exception {
            public :
                virtual const char *what() const throw() {return "Out of range";}
        };
};

# include "../srcs/Array.tpp"

#endif //ARRAY_HPP