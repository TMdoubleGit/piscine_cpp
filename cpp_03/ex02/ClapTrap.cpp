/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:10:53 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/01 11:30:44 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if  (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack because he has no energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints += -1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if  (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no HP left, rip ClapTrap " << _name << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints += -amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if  (_hitPoints == 1)
	{
		std::cout << "ClapTrap " << _name << " just lost his last HP, rip ClapTrap " << _name << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " heals himself for " << amount << " points of damage!" << std::endl;
	_energyPoints += -1;
	_hitPoints += amount;
}