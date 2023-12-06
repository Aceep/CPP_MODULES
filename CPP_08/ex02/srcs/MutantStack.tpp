#include "MutantStack.hpp"

template <class T> MutantStack<T>::MutantStack()
{
}

template <class T> MutantStack<T>::MutantStack(MutantStack const &other)
{
    *this = other;
}

template <class T> MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

template <class T> MutantStack<T>::~MutantStack()
{
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}

// template <class T> typename MutantStack<T>::iterator MutantStack<T>::begin()
// {
//     return std::list<T>::begin();
// }

// template <class T> typename MutantStack<T>::iterator MutantStack<T>::end()
// {
//     return std::list<T>::end();
// }
