#include "Array.hpp"

template <class T> Array<T>::Array() : _array(NULL), _size(0)
{
}

template <class T> Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <class T> Array<T>::Array(const Array &copy) : _array(NULL), _size(0)
{
    *this = copy;
}

template <class T> Array<T>::~Array()
{
    delete [] this->_array;
}

template <class T> Array<T> &Array<T>::operator=(const Array<T> &copy)
{
    if (this != &copy)
    {
        delete [] this->_array;
        this->_array = new T[copy._size];
        this->_size = copy._size;
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = copy._array[i];
    }
    return (*this);
}

template <class T> unsigned int Array<T>::size() const
{
    return (this->_size);
}

template <class T> T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->_size)
        throw Array<T>::OutOfRangeException();
    return (this->_array[i]);
}