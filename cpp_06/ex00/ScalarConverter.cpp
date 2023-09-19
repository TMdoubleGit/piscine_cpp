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
	this->_c = 0;
	this->_i = 0;
	this->_f = 0.0f;
	this->_d = 0.0;
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
	if (this != &ref)
	{
		this->_c = ref._c;
		this->_i = ref._i;
		this->_f = ref._f;
		this->_d = ref._d;
		this->_str = ref._str;
		this->_type = ref._type;
	}
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
	if (isImpossible())
	{
		std::cout << "impossible : " << this->_impossible << std::endl;
		return ;
	}
	if (this->_type == CHAR)
	{
		this->_c = this->_str[0];
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
	}
	else if (this->_type == INT)
	{
		this->_c = static_cast<char>(this->_i);
		std::istringstream(this->_str) >> this->_i;
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else if (this->_type == FLOAT)
	{
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		std::istringstream(this->_str) >> this->_f;
		this->_d = static_cast<double>(this->_f);
	}
	else if (this->_type == DOUBLE)
	{
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
		std::istringstream(this->_str) >> this->_d;
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
	this->setType();
	if (this->getType() == NONE)
	{
		throw ScalarConverter::ConverterException();
	}
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
	else if (isLiteral())
		this->_type = LITERAL;
	else
		this->_type = NONE;
	return ;
}

bool		ScalarConverter::isChar()
{
	if (this->_str.length() == 1 && std::isdigit(this->_str[0]) == 0 && std::isprint(this->_str[0]))
		return (true);
	return (false);
}

bool		ScalarConverter::isInt()
{
	int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	for (int j (i); j < (int) this->_str.length(); j++)
	{
		if (!isdigit(this->_str[j]))
			return (false);
	}
	return (true);
}

bool		ScalarConverter::isFloat()
{
	int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	if (this->_str[_str.length() - 1] == 'f')
	{
		for (int j (i); j < (int) this->_str.length(); j++)
		{
			if (!isdigit(this->_str[j]))
			{
				if (this->_str[j] == '.')
					return (true);
				return (false);
			}
		}
	}
	return (false);
}

bool		ScalarConverter::isDouble()
{
	int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	for (int j (i); j < (int) this->_str.length(); j++)
	{
		if (!isdigit(this->_str[j]))
		{
			if (this->_str[j] == '.')
				return (true);
			return (false);
		}
	}
	return (false);
}

bool		ScalarConverter::isImpossible()
{
	try
	{
		if (_type == INT)
			std::istringstream(_str) >> _i;
		else if (_type == FLOAT)
			std::istringstream(_str) >> _f;
		else if (_type == DOUBLE)
			std::istringstream(_str) >> _d;
	}
	catch (std::exception &e)
	{
		_impossible = true;
		return (true);
	}
	return (false);
}

bool		ScalarConverter::isLiteral() const
{
	if (this->_str == "nan" || this->_str == "nanf" || this->_str == "+inf" || this->_str == "+inff" || this->_str == "-inf" || this->_str == "-inff")
		return (true);
	return (false);
}

void		ScalarConverter::printChar() const
{
	std::cout << "char: ";
	if (this->_impossible || this->isLiteral() || this->_i > 127)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(this->_c))
		std::cout << "'" << this->_c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	return ;
}

void		ScalarConverter::printInt() const
{
	std::cout << "int: ";
	if (this->_impossible || this->isLiteral() || this->_str > std::string("2147483647") || this->_str < std::string("-2147483648"))
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_i << std::endl;
	return ;
}

void		ScalarConverter::printFloat() const
{
	std::cout << "float: ";
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		std::cout << "nanf" << std::endl;
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		std::cout << "+inff" << std::endl;
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		std::cout << "-inff" << std::endl;
	else if (this->_f - static_cast<int>(this->_f) == 0.0)
		std::cout << this->_f << ".0f" << std::endl;
	else
		std::cout << this->_f << "f" << std::endl;
	return ;
}

void		ScalarConverter::printDouble() const
{
	std::cout << "double : ";
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		std::cout << "nan" << std::endl;
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		std::cout << "+inf" << std::endl;
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		std::cout << "-inf" << std::endl;
	else if (this->_d - static_cast<int>(this->_d) == 0.0)
		std::cout <<this->_d << ".0" << std::endl;
	else
		std::cout << this->_d << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &out |  ScalarConverter const &ref)
{
	ref.printChar();
	ref.printInt();
	ref.printFloat();
	ref.printDouble();
	return (out);
}