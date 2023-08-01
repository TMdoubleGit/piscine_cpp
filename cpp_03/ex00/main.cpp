/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:10:50 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 08:35:47 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clapTrap("Tortank");

    clapTrap.attack("Dracaufeu");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    return (0);
}