/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:04:18 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/24 16:31:20 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name = "";

	std::cout << "Stack's Zombie name: " << std::flush;
	std::cin >> name;
	Zombie stackzombie(name);
	std::cout << "Zombheap's name: " << std::flush;
	std::cin >> name;
	Zombie *zombheap = newZombie(name);
	zombheap->announce();
	delete zombheap;
	randomChump("Randyboi");
}