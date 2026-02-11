#include "../inc/RPN.hpp"

int	RPN(std::istringstream& input)
{
	std::stack<int>	s;
	int				num1, num2;

	std::string	token;
	while (input >> token)
	{
		if (token == "+" || token == "-" || token == "/" || token == "*")
		{
			if (s.size() < 2)
				return (std::cout << "Error" << std::endl, 1);
			num2 = s.top();
			s.pop();
			num1 = s.top();
			s.pop();
			if (token == "+")
				s.push(num1 + num2);
			else if (token == "-")
				s.push(num1 - num2);
			else if (token == "/")
			{
				if (!num2)
					return (std::cout << "Error" << std::endl, 1);
				s.push(num1 / num2);
			}
			else if (token == "*")
				s.push(num1 * num2);
		}
		else if (token.size() != 1 || !isdigit(token[0]))
			return (std::cout << "Error" << std::endl, 1);
		else
			s.push(atoi(token.c_str()));
	}
	if (s.size() != 1)
		return (std::cout << "Error" << std::endl, 1);
	return (std::cout << s.top() << std::endl, 0);
}
