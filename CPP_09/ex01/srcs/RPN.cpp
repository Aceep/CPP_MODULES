#include "RPN.hpp"
#include <sstream>

RPN::RPN() {
}

RPN::RPN(const std::string arg)
{
    std::stack<std::string> tokens;
    std::istringstream iss(arg);
    std::string token;

    while (std::getline(iss, token, ' ')){
        if (!token.empty() && !valid_arg(token))
            tokens.push(token);
    }

    while (!tokens.empty()){
        std::cout << tokens.top() << std::endl;
        tokens.pop();
    }
}

RPN::~RPN(){
}

RPN::RPN(const RPN &src){
    *this = src;
}

RPN &RPN::operator=(const RPN &src) {
    if (this != &src)
        this->_tokens = src._tokens;
    return (*this);
}

bool    RPN::valid_arg(std::string arg) {
    if (arg.length() != 1)
        return (std::cout << "Invalid arg" << std::endl, 1);
    else if (!std::isdigit(arg[0]))
        return (std::cout << "Not a valid character" << std::endl, 1);
    return (0);
}