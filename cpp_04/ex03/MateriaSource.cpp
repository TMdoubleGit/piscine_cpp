/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:14:38 by tmichel-          #+#    #+#             */
/*   Updated: 2023/08/02 15:25:27 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	*this = ref;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = ref._inventory[i];
	return (*this);
}

AMateria*	MateriaSource::getMateria(int idx) const
{
	return (_inventory[idx]);
}

void 		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}