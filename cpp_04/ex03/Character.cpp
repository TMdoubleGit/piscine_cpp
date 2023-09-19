/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:56:36 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:02:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default"), _nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Default character created" << std::endl;
}

Character::Character(std::string name) : _name(name), _nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " created" << std::endl;
}

Character::Character(const Character &ref)
{
	*this = ref;
	std::cout << "Character " << _name << " copied" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < _nbMateria; i++)
		delete _inventory[i];
	std::cout << "Character " << _name << " destroyed" << std::endl;
}

Character	&Character::operator=(const Character &ref)
{
	_name = ref._name;
	_nbMateria = ref._nbMateria;
	for (int i = 0; i < _nbMateria; i++)
		_inventory[i] = ref._inventory[i];
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (_nbMateria == 4 || m == NULL)
		return ;
	for (int i = 0; i < _nbMateria; i++)
		if (_inventory[i] == m)
			return ;
	_inventory[_nbMateria] = m;
	_nbMateria++;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= _nbMateria)
		return ;
	for (int i = idx; i < _nbMateria - 1; i++)
		_inventory[i] = _inventory[i + 1];
	_inventory[_nbMateria - 1] = NULL;
	_nbMateria--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= _nbMateria)
		return ;
	_inventory[idx]->use(target);
}