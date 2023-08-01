/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:10:50 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 11:28:07 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap ash( "Ash" );

	ash.attack( "the air" );
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );
	ash.highFivesGuys();

	return EXIT_SUCCESS;
}