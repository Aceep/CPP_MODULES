#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T *array, size_t lenght, void (*f)(T const &)) 
{
    for (size_t i = 0; i < lenght; i++) 
        f(array[i]);
}

template <typename T, typename S>
void iter(T* array, size_t len, void (*fun)(S&))
{
    for (size_t i = 0; i < len; i++) {
        fun(array[i]);
    }
}
#endif //ITER_HPP