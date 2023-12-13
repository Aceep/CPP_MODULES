#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
    public :
        RPN(const std::string arg);
        ~RPN();
        RPN(const RPN &src);
        RPN &operator=(const RPN &src);

        
    private :
        std::stack<std::string> _tokens;

        RPN();
        bool    valid_arg(std::string arg);
};

#endif //RPN_HPP