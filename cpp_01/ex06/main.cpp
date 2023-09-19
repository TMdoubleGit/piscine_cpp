/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:49:38 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/26 16:05:16 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){
	if (ac != 2)
		return (std::cout << "Please insert a level of complaint, a single one !" << std::endl << std::flush, 1);
	std::string input = av[1];
	Harl harl;
	harl.complain(input);
	return (0);
}