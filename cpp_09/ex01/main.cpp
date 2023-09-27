/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:40:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/26 14:08:37 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN \"expression\"" << std::endl;
		return 1;
	}
	std::stack<int>		stack;
	std::istringstream	iss(av[1]);
	std::string			token;
	
	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (stack.size() < 2)
			{
				std::cout << "Error: invalid RPN" << std::endl;
				return 1;
			}
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			switch(token[0])
			{
				case '+':
					stack.push(b + a);
					break;
				case '-':
					stack.push(b - a);
					break;
				case '*':
					stack.push(b * a);
					break;
				case '/':
					if (a == 0)
					{
						std::cout << "Error: division by zero" << std::endl;
						return 1;
					}
					stack.push(b / a);
					break;
				default:
					throw std::runtime_error ("Error: invalid operator: " + token);
			}
		}
		else
		{
			std::istringstream converter(token);
			int value;
			converter >> value;
			if (value < 0 || value > 9)
			{
				std::cout << "Error: numbers must be comprised between 0 and 9" << std::endl;
				return 1;
			}
			stack.push(value);
		}
	}
	if (stack.size() != 1)
	{
		std::cout << "Error: invalid RPN" << std::endl;
		return 1;
	}
	std::cout << stack.top() << std::endl;
}