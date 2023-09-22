/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:40:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/22 16:37:51 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error:could not open file." << std::endl;
		return (1);
	}
	
	std::ifstream file("input.txt");
	std::ifstream database("data.csv");
	
	if (!file || !database)
	{
		std::cout << "Error while opening files." << std::endl;
		return (1);
	}
	
	std::map<std::string, float> data;
	std::string  dline, ddate, dvalue;
	float dvaluef;

	while (std::getline(database, dline))
	{
		std::istringstream iss(dline);
		std::getline(iss, ddate, ',');
		std::getline(iss, dvalue);
		std::istringstream(dvalue) >> dvaluef;
		data.insert(std::pair<std::string, float>(ddate, dvaluef));
	}
	std::string line, date, value, space;
	float quantity = 0.0;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::getline(iss, date, ' ');
		std::getline(iss, space , '|');
		iss.ignore();
		std::getline(iss, value);
		try
		{
			try
			{
				if (checkDate(date) == true)
					;
			}
			catch(const BadInputException &e)
			{
				std::cerr << e.what() << date << std::endl;
				continue ;
			}
			if (checkValue(value) == true)
			{
				if (data.find(date) != data.end())
				{
					std::istringstream(value) >> quantity;
					std::cout << date << " => " << quantity << " = " << quantity * data[date] << std::endl;
				}
				else
				{
					auto it = data.lower_bound(date);
					if (it != data.begin())
					{
						--it;
						float previousValue = it->second;
						std::istringstream(value) >> quantity;
						std::cout << date << " => " << quantity << " = " << quantity * previousValue << std::endl;
					}
				}
			}
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		

}