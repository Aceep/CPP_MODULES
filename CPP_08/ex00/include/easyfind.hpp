#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <exception>
# include <deque>
# include <set>
# include <map>

class NoOccurenceException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("No occurence found");
        }
};

template <typename T> int easyfind(T &a, int b)
{
    if (std::find(a.begin(), a.end(), b) != a.end())
        return (std::cout << "Occurence found" << std::endl, 0);
    throw NoOccurenceException();
    return (-1);
}

#endif //EASYFIND.HPP