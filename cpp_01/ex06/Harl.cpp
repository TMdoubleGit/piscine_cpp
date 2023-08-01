/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:36:58 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/26 16:04:15 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl << std::flush;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::flush;
	std::cout << std::endl << std::flush;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl << std::flush;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::flush;
	std::cout << std::endl << std::flush;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl << std::flush;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::flush;
	std::cout << std::endl << std::flush;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl << std::flush;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::flush;
	std::cout << std::endl << std::flush;
}

void	Harl::complain(std::string level){
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::flush;
	}
}