/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:15 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 15:48:03 by tmichel-         ###   ########.fr       */
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
	if (str.length() != 8)
		return (false);
	for (int i = 0; i < 8; i++)
	{
		if (i == 2 || i == 5)
		{
			if (str[i] != '/')
				return (false);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}