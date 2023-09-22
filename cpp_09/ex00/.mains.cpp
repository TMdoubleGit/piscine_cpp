/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .mains.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:09:54 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/22 16:10:13 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
	{
		std::cout << "Error:could not open file." << std::endl;
		return (1);
	}
	std::ifstream file("input.txt");
	std::ifstream database("data.csv");
	if (!file || !database)
	{
		std::cout << "Error while opening files" << std::endl;
		return (1);
	}
	std::string line, date, value, dline, ddate, dvalue, space;
	float quantity = 0.0;
	std::getline(file, line);
	std::getline(database, dline);
	std::streampos prev_position;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::getline(iss, date, ' ');
		std::getline(iss, space , '|');
		iss.ignore();
		std::getline(iss, value);
		try
		{
			float dvaluef;
			if (checkValue(value) == true)
			{
				try
				{
					if (checkDate(date) == true)
						std::cout << date << " => ";
				}
				catch(const BadInputException &e)
				{
					std::cerr << e.what() << date << std::endl;
					throw ;
				}
				std::istringstream(value) >> quantity;
				while (std::getline(database, dline))
				{
					prev_position = database.tellg();
					std::istringstream diss(dline);
					std::getline(diss, ddate, ',');
					diss.ignore();
					std::getline(diss, dvalue);
					if (ddate < date)
						continue ;
					else
					{
						std::cout << "ddate is " << ddate << " and date is " << date << std::endl;
						database.seekg(prev_position);
						std::getline(database, dline);
						std::istringstream diss_new(dline);
						std::getline(diss_new, ddate, ',');
						diss.ignore();
						std::getline(diss_new, dvalue);
						std::cout << "ddate is " << ddate << " and date is " << date << std::endl;						
						break ;
					};
				}
				std::istringstream(dvalue) >> dvaluef;
				float amount = quantity * dvaluef;
				std::cout << quantity << " = " << amount << std::endl;
			}
			database.close();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		}
		file.close();
		return (0);
	}