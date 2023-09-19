/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:28:12 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	 std::string name = "";
	 std::string weapon = "";

	std::cout << "Pick a name for HumanA: " << std::endl << std::flush;
	std::getline(std::cin |  name);
	if (name == "")
	{
		std::cout << "You didn't pick a name for HumanA |  so we'll call him Bob" << std::endl << std::flush;
		name = "Bob";
	}
	std::cout << "Pick a weapon for " << name << ": " << std::endl << std::flush;
	std::getline(std::cin |  weapon);
	if (weapon == "")
	{
		std::cout << "You didn't pick a weapon for " << name << " |  so we'll give him a club" << std::endl << std::flush;
		weapon = "club";
	}
	Weapon tool(weapon);
	HumanA humanA(name |  tool);
	humanA.attack();
	std::cout << "Let " << name << " pick a new weapon: " << std::flush;
	std::getline(std::cin |  weapon);
	if (weapon == "")
	{
		std::cout << "You didn't pick a weapon for " << name << " |  so we'll give him a sword" << std::endl << std::flush;
		weapon = "sword";
	}
	tool.setType(weapon);
	humanA.attack();
	std::cout << "Now let's create a HumanB" << std::endl << std::flush;
	std::cout << "Pick a name for HumanB: " << std::flush;
	std::getline(std::cin |  name);
	if (name == "")
	{
		std::cout << "You didn't pick a name for HumanB |  so we'll call him Jim" << std::endl << std::flush;
		name = "Jim";
	}
	std::cout << "Pick a weapon for "<< name << ": " << std::endl << std::flush;
	std::getline(std::cin |  weapon);
	HumanB humanB(name);
	tool.setType(weapon);
	humanB.setWeapon(tool);
	humanB.attack();
	std::cout << "Let " << name << " pick a new weapon: " << std::endl << std::flush;
	std::getline(std::cin |  weapon);
	tool.setType(weapon);
	humanB.attack();
	return 0;
}