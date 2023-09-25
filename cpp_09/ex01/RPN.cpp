/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:22:20 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/25 16:23:23 by tmichel-         ###   ########.fr       */
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
	if (this != &ref)
		_left_args = ref._left_args;
	return *this;
}

bool	RPN::isOperator(std::string const & str)
{
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
		return true;
	return false;
}