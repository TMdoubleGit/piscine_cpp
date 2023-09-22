/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:15 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/22 16:55:10 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &ref)
{
	if (this != &ref)
		_wallet = ref._wallet;
	return (*this);
}

bool checkDate(std::string const &str)
{
	int year, month, day;
	char dash, dash2;
	std::istringstream iss(str);
	iss >> year >> dash >> month >> dash2 >> day;
	if (str.length() != 10)
		throw BadInputException();
	if (year < 2009 || (year == 2009 && month == 1 && day < 2))
		throw BadInputException();
	if (month < 1 || month > 12)
		throw BadInputException();
	if (day < 1 || day > 31)
		throw BadInputException();
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			if (str[i] != '-')
				throw BadInputException();
		}
		else if (str[i] < '0' || str[i] > '9')
			throw BadInputException();
	}
	return (true);
}

bool checkValue(std::string const &str)
{
	int dot = 0;
	if (str.length() > 4)
		throw ValueTooBigException();
	if (str[0] == '-')
		throw NegativeValueException();
	if (str.length() == 4 && (str[0] > '1' || (str[0] == '1' && (str[1] > '0' || str[2] > '0' || str[3] > '0'))))
		throw ValueTooBigException();
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (((str[i] < '0' || str[i] > '9') && str[i] != '.') || (str[i] == '.' && dot > 0))
			throw BadInputException();
		if (str[i] == '.')
			dot++;
	}
	return (true);
}
