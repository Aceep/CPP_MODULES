#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>
# include <sstream>

class RPN {
    public :
        RPN(const std::string arg);
        ~RPN();
        RPN(const RPN &src);
        RPN &operator=(const RPN &src);

        void    process();
        void    display(std::stack<std::string> show) const;
        void    calculate();

    private :
        RPN();

        std::stack<std::string> _tokens;
        std::stack<std::string> _calcul;
        bool                    valid_arg(std::string arg);
        void                    add();
        void                    sub();
        void                    mul();
        void                    div();
};

#endif //RPN_HPP