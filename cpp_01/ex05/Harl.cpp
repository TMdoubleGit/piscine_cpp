/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:36:58 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::flush;
}

void	Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did |  I wouldn't be asking for more!" << std::endl << std::flush;
}

void	Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::flush;
}

void	Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::flush;
}

void	Harl::complain(std::string level){
	t_func	funcs[] = { &Harl::debug |  &Harl::info |  &Harl::warning |  &Harl::error };
	std::string	levels[] = { "DEBUG" |  "INFO" |  "WARNING" |  "ERROR" };
	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*funcs[i])();
}