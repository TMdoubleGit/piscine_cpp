/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:15 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/21 18:10:15 by tmichel-         ###   ########.fr       */
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
	if (*this != ref)
		_wallet = ref._wallet;
	return (*this);
}

bool BitcoinExchange::checkDate(std::string const &str)
{
	if (str.length() != 10)
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			if (str[i] != '-')
				return (false);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

bool BitcoinExchange::checkValue(std::string const &str)
{
	if (str.length() > 4)
		throw ValueTooBigException();
	if (str[0] == '-')
		throw NegativeValueException();
	if (str[0] > '1' || (str[0] == '1' && (str[1] > '0' || str[2] > '0' || str[3] > '0')))
		throw ValueTooBigException();
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			throw BadInputException();
	}
	return (true);
}