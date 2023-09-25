/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:20 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/25 17:05:13 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(RPN const & src)
{
	*this = src;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(RPN const & ref)
{
	(void)ref;
	return *this;
}

bool	isOperator(std::string const & str)
{
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
		return true;
	return false;
}

bool	isNumber(std::string const & str)
{
	if (str[0] >= '0' && str[0] <= '9')
		return true;
	return false;
}