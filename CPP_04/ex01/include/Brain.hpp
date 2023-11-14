#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private :
        std::string _ideas[100];

    public :
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &rhs);

        std::string getIdea(int index) const;
        void setIdea(std::string idea);
};

#endif