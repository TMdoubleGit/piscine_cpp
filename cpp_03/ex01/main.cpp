/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:10:50 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 08:52:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ash( "Ash" );

	ash.attack( "the air" );
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );
	ash.guardGate();

	return EXIT_SUCCESS;
}