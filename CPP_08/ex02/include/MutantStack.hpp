#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <list>
# include <vector>
# include <set>

template <class T> class MutantStack : public std::stack<int>
{
    private :

    public :
        MutantStack();
        MutantStack(MutantStack const &other);
        MutantStack &operator=(MutantStack const &other);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();
};

// template <class T> class MutantStack : public std::list<int>
// {
//     private :

//     public :
//         MutantStack();
//         MutantStack(MutantStack const &other);
//         MutantStack &operator=(MutantStack const &other);
//         ~MutantStack();

//         typedef typename std::list<T>::iterator iterator;

//         iterator begin();
//         iterator end();
// };

# include "../srcs/MutantStack.tpp"

#endif //MUTANTSTACK_HPP