/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:36:55 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/25 16:16:13 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	std::string level;
	Harl	harl;
	
	while (level.compare("EXIT"))
	{
		std::cout << "Enter a level of complaint (DEBUG, INFO, WARNING, ERROR) or EXIT to exit: ";
		std::cin >> level;
		harl.complain(level);
	}
	std::cout << "Security escorts Karen out of the building..." << std::endl << std::flush;
	return (0);
}