/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:27:42 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/04 14:32:58 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &ref)
{
	(void)ref;
	return (*this);
}

char		ScalarConverter::getC() const
{
	return (this->_c);
}

void		ScalarConverter::setC(char c)
{
	this->_c = c;
	return ;
}

int			ScalarConverter::getI() const
{
	return (this->_i);
}

void		ScalarConverter::setI(int i)
{
	this->_i = i;
	return ;
}

float		ScalarConverter::getF() const
{
	return (this->_f);
}

void		ScalarConverter::setF(float f)
{
	this->_f = f;
	return ;
}

double		ScalarConverter::getD() const
{
	return (this->_d);
}

void		ScalarConverter::setD(double d)
{
	this->_d = d;
	return ;
}

void		ScalarConverter::convert()
{
	if (this->_type == CHAR)
	{
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
	}
	else if (this->_type == INT)
	{
		this->_c = static_cast<char>(this->_i);
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else if (this->_type == FLOAT)
	{
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		this->_d = static_cast<double>(this->_f);
	}
	else if (this->_type == DOUBLE)
	{
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
	}
	return ;
}

std::string	ScalarConverter::getStr() const
{
	return (this->_str);
}

void		ScalarConverter::setStr(std::string str)
{
	this->_str = str;
	return ;
}

input_type	ScalarConverter::getType() const
{
	return (this->_type);
}

void		ScalarConverter::setType()
{
	if (isChar())
		this->_type = CHAR;
	else if (isInt())
		this->_type = INT;
	else if (isFloat())
		this->_type = FLOAT;
	else if (isDouble())
		this->_type = DOUBLE;
	elseif (isLiteral())
		this->_type = LITERAL;
	else
		this->_type = NONE;
	return ;
}

bool		ScalarConverter::isChar() const
{
	if (this->_str.length() == 1 && !isdigit(this->_str[0]))
		return (true);
	return (false);
}

bool		ScalarConverter::isInt() const
{
	int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	for (int j (i); j < (int) this->_str.length(); j++)
	{
		if (!isdigit(this->_str[j]))
			return (false);
	}
	return (false);
}