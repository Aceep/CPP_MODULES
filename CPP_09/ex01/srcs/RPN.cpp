#include "RPN.hpp"
#include <sstream>

RPN::RPN() {
}

RPN::RPN(const std::string arg)
{
    std::stack<std::string> tok;
    std::istringstream iss(arg);
    std::string token;

    while (std::getline(iss, token, ' ')){
        if (!token.empty() && !valid_arg(token))
            tok.push(token);
    }

    std::stack<std::string> tokens;
    while (!tok.empty()){
        tokens.push(tok.top());
        tok.pop();
    }

    this->_tokens = tokens;

	std::stack<std::string> calcul;
	this->_calcul = calcul;
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
        return (std::cout << "Invalid arg : " << arg << std::endl, 1);
    else if (!std::isdigit(arg[0]) && arg[0] != '+' && arg[0] != '-' && arg[0] != '*' && arg[0] != '/' && arg[0] != '%') 
        return (std::cout << "Not a valid character : " << arg << std::endl, 1);
    return (0);
}

void   RPN::add() {
	std::cout << "add" << std::endl;
    std::stringstream ss(_calcul.top());
    int a;
    ss >> a;
	_calcul.pop();
	std::stringstream ss2(_calcul.top());
    int b;
    ss2 >> b;
	_calcul.pop();
	std::cout << ss.str() << " + " << ss2.str() << " = " << a + b << std::endl;
	std::stringstream ss3(_calcul.top());
	ss3 << a + b;
	_calcul.push(ss.str());
}

void   RPN::sub() {
    std::cout << "sub" << std::endl;
	std::stringstream ss(_calcul.top());
    int a;
    ss >> a;
	_calcul.pop();
	std::stringstream ss2(_calcul.top());
    int b;
    ss2 >> b;
	_calcul.pop();
	std::cout << ss.str() << " + " << ss2.str() << " = " << a - b << std::endl;
	std::stringstream ss3(_calcul.top());
	ss3 << a - b;
	_calcul.push(ss3.str());
}

void   RPN::mul() {
    _calcul.pop();
	std::stringstream ss(_calcul.top());
    int a;
    ss >> a;
	_calcul.pop();
	std::stringstream ss2(_calcul.top());
    int b;
    ss >> b;
	_calcul.pop();
	ss << a * b;
	_calcul.push(ss.str());
    std::cout << "mul" << std::endl;
}

void   RPN::div() {
    _calcul.pop();
	std::stringstream ss(_calcul.top());
    int a;
    ss >> a;
	_calcul.pop();
	std::stringstream ss2(_calcul.top());
    int b;
    ss >> b;
	_calcul.pop();
	ss << a / b;
	_calcul.push(ss.str());
    std::cout << "div" << std::endl;
}

void    RPN::display(std::stack<std::string> show) const {
	std::stack<std::string> tmp = show;
	while (!tmp.empty()){
		std::cout << tmp.top() << std::endl;
		tmp.pop();
	}
}

void	RPN::calculate() {
	void		(RPN::*ptr_complain[4])(void) = {&RPN::add, &RPN::sub, &RPN::mul, &RPN::div};
	std::string	operators[4] = {"+", "-", "*", "/"};

	if (_calcul.size() < 2)
	{
		std::cout << "Not enough numbers to calculate" << std::endl;
		exit(1);
	}

	for (int i = 0; i < 4; i++)
	{
		if (operators[i] == _tokens.top())
		{
			(this->*ptr_complain[i])();
			return ;
		}
	}
}

void	RPN::process() {
	while (!_tokens.empty())
	{
		if (std::isdigit(_tokens.top()[0]))
			_calcul.push(_tokens.top());
		else
			calculate();
		_tokens.pop();
	}
	//display(_calcul);
}