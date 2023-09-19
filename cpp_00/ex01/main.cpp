/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:07:31 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	instance;
	std::string	cmd = "";
	instance.display_notice();
	while(cmd != "EXIT")
	{
		std::cout << "Please enter a command: " << std::flush;
		std::getline(std::cin |  cmd);
		if (cmd == "EXIT")
			break ;
		if (cmd == "ADD")
			instance.add_contact();
		else if (cmd == "SEARCH")
		{
			instance.display_all();
			instance.search_cmd();
		}
		else
		{
			std::cin.clear();
			std::cout << "Invalid command |  please try again." << std::endl;
		}
	}
	std::cout << "Goodbye!" << std::endl;
	return (0);
}