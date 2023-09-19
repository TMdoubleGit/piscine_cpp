/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 00:31:32 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/25 15:18:17 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	std::string name = "";
	int N = 0;
	bool valid = false;
	
	while (!valid)
	{
		std::cout << "How many zombies do you want to summon? " << std::flush;
		std::cin >> N;
		valid = true;
		if (N <= 0 || std::isdigit(N))
		{
			std::cout << "You can't summon " << N << " zombies, you fool!" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a correct value (integer > 0)" << std::endl;
			valid = false;
		}
	}
	std::cout << "Please, give a name to your zombies: " << std::flush;
	std::cin >> name;
	Zombie* horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}