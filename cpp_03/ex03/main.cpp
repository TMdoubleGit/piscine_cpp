/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:10:50 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 12:03:19 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diams( "Diams" );

	diams.whoAmI();
	diams.attack("Vitaa");
	diams.takeDamage(10);
	diams.beRepaired(10);
	diams.highFivesGuys();

	return EXIT_SUCCESS;
}